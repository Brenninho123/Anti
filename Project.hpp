#ifndef PROJECT_HPP
#define PROJECT_HPP

#include <string>
#include <vector>
#include <memory>

namespace Anti {

class Project {
public:
    Project();
    explicit Project(const std::string& name);
    ~Project();

    Project(const Project&) = delete;
    Project& operator=(const Project&) = delete;
    Project(Project&&) noexcept = default;
    Project& operator=(Project&&) noexcept = default;

    void setName(const std::string& name);
    [[nodiscard]] std::string getName() const;

    void initialize();
    void update();
    void terminate();

    [[nodiscard]] bool isActive() const;

private:
    std::string m_name;
    bool m_isActive{false};
};

}

#endif
