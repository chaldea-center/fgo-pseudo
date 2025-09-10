void EventInfoScoreRecordCardComponent___ctor(EventInfoScoreRecordCardComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


bool EventInfoScoreRecordCardComponent__IsBusy(EventInfoScoreRecordCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x19

  if ( (byte_4C28855 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28855 = 1;
  }
  scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0, 0);
}


void EventInfoScoreRecordCardComponent__OnTap(EventInfoScoreRecordCardComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scoreRecordCardDialog; // x20
  UnityEngine_Object_o *baseTransform; // x20
  struct ScoreRecordCardDialog_o **p_scoreRecordCardDialogInstance; // x20
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *v9; // x21
  UnityEngine_Component_o *Instance; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *m_CachedPtr; // x22
  Il2CppObject *v13; // x21
  Il2CppObject *Component_object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *v17; // x22
  ScoreRecordCardDialog_o *v18; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_Action_o *v22; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C28854 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventInfoScoreRecordCardComponent_OnTap__);
    sub_1C2D490(&Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C28854 = 1;
  }
  scoreRecordCardDialog = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scoreRecordCardDialog, 0, 0) )
  {
    baseTransform = (UnityEngine_Object_o *)this->fields.baseTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseTransform, 0, 0) )
    {
      p_scoreRecordCardDialogInstance = &this->fields.scoreRecordCardDialogInstance;
      scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0, 0) )
      {
        v7 = Method_EventInfoScoreRecordCardComponent_OnTap__;
        if ( (*((_BYTE *)Method_EventInfoScoreRecordCardComponent_OnTap__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C2D4A8(Method_EventInfoScoreRecordCardComponent_OnTap__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
        v9 = (Il2CppObject *)this->fields.scoreRecordCardDialog;
        Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          m_CachedPtr = (UnityEngine_Transform_o *)Instance[5].fields.m_CachedPtr;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v13 = UnityEngine_Object__Instantiate_object__51752420(
                  v9,
                  m_CachedPtr,
                  (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
          Instance = (UnityEngine_Component_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return;
          if ( v13 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v13,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___);
            *p_scoreRecordCardDialogInstance = (struct ScoreRecordCardDialog_o *)Component_object;
            sub_1C2D434(
              (CGThumbnailListItem_o *)&this->fields.scoreRecordCardDialogInstance,
              (int32_t)Component_object,
              v15,
              v16);
            v17 = (UnityEngine_Object_o *)*p_scoreRecordCardDialogInstance;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v17, 0, 0) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v13, 0);
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
                  v18 = this->fields.scoreRecordCardDialogInstance;
                  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0);
                  x = position.fields.x;
                  y = position.fields.y;
                  z = position.fields.z;
                  v22 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                  System_Action___ctor(
                    v22,
                    (Il2CppObject *)this,
                    Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__,
                    0);
                  if ( v18 )
                  {
                    v24.fields.x = x;
                    v24.fields.y = y;
                    v24.fields.z = z;
                    ScoreRecordCardDialog__Setup(v18, v24, v22, 0);
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
        sub_1C2D6EC(Instance, v11);
      }
    }
  }
}


void EventInfoScoreRecordCardComponent___OnTap_b__3_0(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseTransform; // x0
  CGThumbnailListItem_o *p_scoreRecordCardDialogInstance; // x19
  struct ScoreRecordCardDialog_o *scoreRecordCardDialogInstance; // t1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C28856 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C28856 = 1;
  }
  baseTransform = (UnityEngine_Component_o *)this->fields.baseTransform;
  if ( !baseTransform
    || (baseTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseTransform, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseTransform, 1, 0),
        scoreRecordCardDialogInstance = this->fields.scoreRecordCardDialogInstance,
        p_scoreRecordCardDialogInstance = (CGThumbnailListItem_o *)&this->fields.scoreRecordCardDialogInstance,
        (baseTransform = (UnityEngine_Component_o *)scoreRecordCardDialogInstance) == 0) )
  {
    sub_1C2D6EC(baseTransform, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(baseTransform, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(gameObject, 0);
  p_scoreRecordCardDialogInstance->klass = 0;
  sub_1C2D434(p_scoreRecordCardDialogInstance, 0, v7, v8);
}