// local variable allocation has failed, the output may be wrong!
void PlayFieldMotionNpcActionData___ctor(
        PlayFieldMotionNpcActionData_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  if ( (byte_59730F8 & 1) == 0 )
  {
    sub_2213A60(&BattleActionData_TypeInfo);
    byte_59730F8 = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, *(_QWORD *)&targetId);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
  this->fields.targetId = targetId;
}


void PlayFieldMotionNpcActionData__PreActionProcess(
        PlayFieldMotionNpcActionData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *targetObject; // x22
  BattlePerformance_o *perf; // x0
  __int64 v8; // x1
  struct UnityEngine_GameObject_o *ServantGameObject; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_59730F9 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59730F9 = 1;
  }
  BattleActionData__PreActionProcess((BattleActionData_o *)this, data, 0);
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  perf = (BattlePerformance_o *)UnityEngine_Object__op_Equality(targetObject, 0, 0);
  if ( ((unsigned __int8)perf & 1) != 0 )
  {
    if ( !data || (perf = data->fields.perf) == 0 )
      sub_2213CDC(perf, v8);
    ServantGameObject = BattlePerformance__getServantGameObject(perf, this->fields.targetId, 0);
    this->fields.targetObject = ServantGameObject;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetObject,
      (int32_t)ServantGameObject,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}