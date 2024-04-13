void __fastcall PlayFieldMotionNpcActionData___ctor(
        PlayFieldMotionNpcActionData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E83E2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, targetId, (_DWORD)method, v3);
    byte_42E83E2 = 1;
  }
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  }
  BattleActionData___ctor((BattleActionData_o *)this, 0LL);
  this->fields.targetId = targetId;
}


void __fastcall PlayFieldMotionNpcActionData__PreActionProcess(
        PlayFieldMotionNpcActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *targetObject; // x22
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *ServantGameObject; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E83E3 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E83E3 = 1;
  }
  BattleActionData__PreActionProcess((BattleActionData_o *)this, data, 0LL);
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(targetObject, 0LL, 0LL);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !data || (perf = data->fields.perf) == 0LL )
      sub_B5D69C(perf, v8);
    ServantGameObject = BattlePerformance__getServantGameObject(perf, this->fields.targetId, 0LL);
    this->fields.targetObject = ServantGameObject;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.targetObject,
      (System_Int32_array **)ServantGameObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}