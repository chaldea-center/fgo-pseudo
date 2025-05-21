void __fastcall EventInfoScoreRecordCardComponent___ctor(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


bool __fastcall EventInfoScoreRecordCardComponent__IsBusy(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x19

  if ( (byte_4B460CF & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B460CF = 1;
  }
  scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0LL, 0LL);
}


void __fastcall EventInfoScoreRecordCardComponent__OnTap(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *scoreRecordCardDialog; // x20
  UnityEngine_Object_o *baseTransform; // x20
  struct ScoreRecordCardDialog_o **p_scoreRecordCardDialogInstance; // x20
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x21
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *v15; // x21
  void *Instance; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *v18; // x22
  Il2CppObject *v19; // x21
  Il2CppObject *Component_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *v23; // x22
  ScoreRecordCardDialog_o *v24; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  System_Action_o *v28; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B460CE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_EventInfoScoreRecordCardComponent_OnTap__, v3);
    sub_1BDB878(&Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__, v4);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___, v5);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160024, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4B460CE = 1;
  }
  scoreRecordCardDialog = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(scoreRecordCardDialog, 0LL, 0LL) )
  {
    baseTransform = (UnityEngine_Object_o *)this->fields.baseTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseTransform, 0LL, 0LL) )
    {
      p_scoreRecordCardDialogInstance = &this->fields.scoreRecordCardDialogInstance;
      scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0LL, 0LL) )
      {
        v13 = Method_EventInfoScoreRecordCardComponent_OnTap__;
        if ( (*((_BYTE *)Method_EventInfoScoreRecordCardComponent_OnTap__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BDB890(Method_EventInfoScoreRecordCardComponent_OnTap__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
        v15 = (Il2CppObject *)this->fields.scoreRecordCardDialog;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          v18 = (UnityEngine_Transform_o *)*((_QWORD *)Instance + 17);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v19 = UnityEngine_Object__Instantiate_object__51108816(
                  v15,
                  v18,
                  (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_GameObject____77160024);
          Instance = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return;
          if ( v19 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v19,
                                 (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___);
            *p_scoreRecordCardDialogInstance = (struct ScoreRecordCardDialog_o *)Component_object;
            sub_1BDB81C(
              (CGThumbnailListItem_o *)&this->fields.scoreRecordCardDialogInstance,
              (int32_t)Component_object,
              v21,
              v22);
            v23 = (UnityEngine_Object_o *)*p_scoreRecordCardDialogInstance;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v23, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_70284200((UnityEngine_Object_o *)v19, 0LL);
              return;
            }
            Instance = this->fields.baseTransform;
            if ( Instance )
            {
              Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
              if ( Instance )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
                Instance = this->fields.baseTransform;
                if ( Instance )
                {
                  v24 = this->fields.scoreRecordCardDialogInstance;
                  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
                  x = position.fields.x;
                  y = position.fields.y;
                  z = position.fields.z;
                  v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                  System_Action___ctor(
                    v28,
                    (Il2CppObject *)this,
                    Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__,
                    0LL);
                  if ( v24 )
                  {
                    v30.fields.x = x;
                    v30.fields.y = y;
                    v30.fields.z = z;
                    ScoreRecordCardDialog__Setup(v24, v30, v28, 0LL);
                    Instance = *p_scoreRecordCardDialogInstance;
                    if ( *p_scoreRecordCardDialogInstance )
                    {
                      ScoreRecordCardDialog__Open((ScoreRecordCardDialog_o *)Instance, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        sub_1BDBAD4(Instance, v17);
      }
    }
  }
}


void __fastcall EventInfoScoreRecordCardComponent___OnTap_b__3_0(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *baseTransform; // x0
  CGThumbnailListItem_o *p_scoreRecordCardDialogInstance; // x19
  struct ScoreRecordCardDialog_o *scoreRecordCardDialogInstance; // t1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B460D0 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B460D0 = 1;
  }
  baseTransform = (UnityEngine_Component_o *)this->fields.baseTransform;
  if ( !baseTransform
    || (baseTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseTransform, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseTransform, 1, 0LL),
        scoreRecordCardDialogInstance = this->fields.scoreRecordCardDialogInstance,
        p_scoreRecordCardDialogInstance = (CGThumbnailListItem_o *)&this->fields.scoreRecordCardDialogInstance,
        (baseTransform = (UnityEngine_Component_o *)scoreRecordCardDialogInstance) == 0LL) )
  {
    sub_1BDBAD4(baseTransform, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(baseTransform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
  p_scoreRecordCardDialogInstance->klass = 0LL;
  sub_1BDB81C(p_scoreRecordCardDialogInstance, 0, v7, v8);
}