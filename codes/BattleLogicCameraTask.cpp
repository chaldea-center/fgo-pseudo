void __fastcall BattleLogicCameraTask___ctor(
        BattleLogicCameraTask_o *this,
        System_String_o *cameraName,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  BattleLogicTask___ctor((BattleLogicTask_o *)this, 0LL);
  BattleLogicTask__setCamera((BattleLogicTask_o *)this, 0LL);
  this->fields.endCameraName = cameraName;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endCameraName,
    (System_Int32_array **)cameraName,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}