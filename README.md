# 21020793-Cyborg-Battle

BÁO CÁO KẾT QUẢ THỰC HIỆN DỰ ÁN CUỐI KÌ
HỌ VÀ TÊN : Đặng Quang Thắng
MSSV : 21020793
TÊN DỰ ÁN : CYBORG BATTLE

Phần I: Hướng dẫn cài đặt

B1: Cài đặt visual studio, tải project cyborgbattle về máy.
B2: Tạo một project c++ rỗng, sau đó tạo main.cpp sau đó copy main của project vào main.cpp vừa tạo.
B3: Tải các thư viện cần thiết của SDL2 về máy và giải nén (SDL2_image, SDL2, SDL2_tff, SDL2_mixer).
B4: Liên kết tất cả thư viện với project visual studio vừa tạo theo hướng dẫn: https://www.youtube.com/watch?v=7nkKVyt0DsY.
B5: Copy các file.cpp và file.h của cyborgbattle vào project vừa liên kết thư viện (patse vào phần solution explorer). 
    Tiếp tục patse vào phần file folder của project mới tạo.
B6: Build và chạy chương trình.

Phần II: Mô tả chung về trò chơi

- Game chiến đấu với quái vật, người chơi sử dụng các phím mũi tên để di chuyển và phím D để tấn công, phím F để lướt.

Phần III: Các chức năng đã cài đặt

- Di chuyển, lướt đi và tấn công kẻ địch.
- Quái vật có khả năng tự spawn và di chuyển để tìm kiếm và tấn công người chơi.
- Có âm thanh khi chiến đấu và di chuyển.

Phần IV: Các kĩ thuật lập trình được sử dụng

- Class: để tạo các đặc điểm của một chức năng hay nhân vật.
- Con trỏ: để lưu trữ dữ liệu của game.
- List: để lưu trữ frame cũng như animation.
- Inherritance cơ bản: Để inherit từ 1 class entity có các đặc điểm chung của nhân vật và các đối tượng trong game.
- Polymorphism cơ bản: Hỗ trợ thêm cho việc sử dụng Inheritance và các hàm có thể sử dụng cho nhiều nhân vật khác nhau.
- Thư viện đồ họa SDL2 (gồm SDL2_image, SDL2_mixer, SDL2_ttf): Load âm thanh, animation và phông chữ lên game. 
- Đọc và lấy dữ liệu từ ảnh(png) và file text.

Phần V: 

1. Hướng phát triển 
- Tương lai sẽ update thêm các loại quái vật khác nhau, có nhiều màn chơi hơn, có boss ở cuối màn và tính toán lại logic của game 
(damage và hp sẽ được điều chỉnh hợp lí hơn).
- Có nhiều màn hơn và update Health Bar.

2. Điều tâm đắc sau khi làm dự án

- Sau khi làm dự án, em đã hiểu biết thêm một số kiến thức mới về lập trình (về cách quản lí các 
đối tượng, cách sử dụng con trỏ và quản lí bộ nhớ động một cách hợp lí) và em đã hiểu được cách đọc animation 
cũng như frame từ file bên ngoài, cách sử dụng thư viện SDL2 hiệu quả.

