void EventInfoScoreRecordCardComponent___ctor(EventInfoScoreRecordCardComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


bool EventInfoScoreRecordCardComponent__IsBusy(EventInfoScoreRecordCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x19

  if ( (byte_5972623 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972623 = 1;
  }
  scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0, 0);
}


void EventInfoScoreRecordCardComponent__OnTap(EventInfoScoreRecordCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scoreRecordCardDialog; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *baseTransform; // x20
  __int64 v6; // x1
  struct ScoreRecordCardDialog_o **p_scoreRecordCardDialogInstance; // x20
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x21
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  Il2CppObject *v11; // x21
  UnityEngine_Component_o *Instance; // x0
  __int64 v13; // x1
  UnityEngine_Transform_o *klass; // x22
  Il2CppObject *v15; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x22
  ScoreRecordCardDialog_o *v25; // x21
  System_Action_o *v26; // x22
  UnityEngine_Vector3_o position; // 0:kr00_12.12

  if ( (byte_5972622 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoScoreRecordCardComponent_OnTap__);
    sub_2213A60(&Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5972622 = 1;
  }
  scoreRecordCardDialog = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(scoreRecordCardDialog, 0, 0) )
  {
    baseTransform = (UnityEngine_Object_o *)this->fields.baseTransform;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(baseTransform, 0, 0) )
    {
      p_scoreRecordCardDialogInstance = &this->fields.scoreRecordCardDialogInstance;
      scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( !UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0, 0) )
      {
        v9 = Method_EventInfoScoreRecordCardComponent_OnTap__;
        if ( (*((_BYTE *)Method_EventInfoScoreRecordCardComponent_OnTap__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_2213A78(Method_EventInfoScoreRecordCardComponent_OnTap__);
        v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
        v11 = (Il2CppObject *)this->fields.scoreRecordCardDialog;
        Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          klass = (UnityEngine_Transform_o *)Instance[5].klass;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
          v15 = UnityEngine_Object__Instantiate_object__59717116(
                  v11,
                  klass,
                  (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
          Instance = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return;
          if ( v15 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v15,
                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___);
            *p_scoreRecordCardDialogInstance = (struct ScoreRecordCardDialog_o *)Component_object;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.scoreRecordCardDialogInstance,
              (int32_t)Component_object,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            v24 = (UnityEngine_Object_o *)*p_scoreRecordCardDialogInstance;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
            if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
            {
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
              UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)v15, 0);
              return;
            }
            Instance = (UnityEngine_Component_o *)this->fields.baseTransform;
            if ( Instance )
            {
              Instance = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(Instance, 0);
              if ( Instance )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
                Instance = (UnityEngine_Component_o *)this->fields.baseTransform;
                if ( Instance )
                {
                  v25 = this->fields.scoreRecordCardDialogInstance;
                  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0);
                  v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v26,
                    (Il2CppObject *)this,
                    Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__,
                    0);
                  if ( v25 )
                  {
                    ScoreRecordCardDialog__Setup(v25, position, v26, 0);
                    Instance = (UnityEngine_Component_o *)*p_scoreRecordCardDialogInstance;
                    if ( *p_scoreRecordCardDialogInstance )
                    {
                      ScoreRecordCardDialog__Open((ScoreRecordCardDialog_o *)Instance, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        sub_2213CDC(Instance, v13);
      }
    }
  }
}


void EventInfoScoreRecordCardComponent___OnTap_b__3_0(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseTransform; // x0
  MissionNaviTransitionBoardItem_o *p_scoreRecordCardDialogInstance; // x19
  struct ScoreRecordCardDialog_o *scoreRecordCardDialogInstance; // t1
  __int64 v6; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5972624 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972624 = 1;
  }
  baseTransform = (UnityEngine_Component_o *)this->fields.baseTransform;
  if ( !baseTransform
    || (baseTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseTransform, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseTransform, 1, 0),
        scoreRecordCardDialogInstance = this->fields.scoreRecordCardDialogInstance,
        p_scoreRecordCardDialogInstance = (MissionNaviTransitionBoardItem_o *)&this->fields.scoreRecordCardDialogInstance,
        (baseTransform = (UnityEngine_Component_o *)scoreRecordCardDialogInstance) == 0) )
  {
    sub_2213CDC(baseTransform, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(baseTransform, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  p_scoreRecordCardDialogInstance->klass = 0;
  sub_2213A04(p_scoreRecordCardDialogInstance, 0, v8, v9, v10, v11, v12, v13);
}