
CREATE DATABASE IF NOT EXISTS pengus_site;
USE pengus_site;

DROP TABLE IF EXISTS secret_keys;

CREATE TABLE secret_keys (
  secret_key VARCHAR(200) NOT NULL PRIMARY KEY
);

INSERT INTO secret_keys (secret_key) VALUES ('K7WjFm6eaB3TDD5ZjtfxFVAdCQJaRHyphmpDkfvm7JaqP8rWHF6cXPDzRYqZCKw3xyeQrFmVL6n93J2WaLnQU2efEfZPx2fv')
