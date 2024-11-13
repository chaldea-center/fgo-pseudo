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
  __int64 v2; // x2
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x19

  if ( (byte_4B177F8 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177F8 = 1;
  }
  scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  return UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0LL, 0LL);
}


void __fastcall EventInfoScoreRecordCardComponent__OnTap(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Object_o *scoreRecordCardDialog; // x20
  __int64 v17; // x1
  UnityEngine_Object_o *baseTransform; // x20
  __int64 v19; // x1
  struct ScoreRecordCardDialog_o **p_scoreRecordCardDialogInstance; // x20
  UnityEngine_Object_o *scoreRecordCardDialogInstance; // x21
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  Il2CppObject *v24; // x21
  void *Instance; // x0
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x22
  Il2CppObject *v28; // x21
  Il2CppObject *Component_object; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x22
  ScoreRecordCardDialog_o *v38; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B177F7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventInfoScoreRecordCardComponent_OnTap__, v4, v5);
    sub_1BCA7E0(&Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    byte_4B177F7 = 1;
  }
  scoreRecordCardDialog = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(scoreRecordCardDialog, 0LL, 0LL) )
  {
    baseTransform = (UnityEngine_Object_o *)this->fields.baseTransform;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    if ( !UnityEngine_Object__op_Equality(baseTransform, 0LL, 0LL) )
    {
      p_scoreRecordCardDialogInstance = &this->fields.scoreRecordCardDialogInstance;
      scoreRecordCardDialogInstance = (UnityEngine_Object_o *)this->fields.scoreRecordCardDialogInstance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Inequality(scoreRecordCardDialogInstance, 0LL, 0LL) )
      {
        v22 = Method_EventInfoScoreRecordCardComponent_OnTap__;
        if ( (*((_BYTE *)Method_EventInfoScoreRecordCardComponent_OnTap__ + 83) & 2) != 0 )
          v22 = (_QWORD *)sub_1BCA7F8(Method_EventInfoScoreRecordCardComponent_OnTap__);
        v23 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v22, v22[4]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        v24 = (Il2CppObject *)this->fields.scoreRecordCardDialog;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( Instance )
        {
          v27 = (UnityEngine_Transform_o *)*((_QWORD *)Instance + 17);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
          v28 = UnityEngine_Object__Instantiate_object__49903816(
                  v24,
                  v27,
                  (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
          Instance = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v28, 0LL, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
            return;
          if ( v28 )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v28,
                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScoreRecordCardDialog___);
            *p_scoreRecordCardDialogInstance = (struct ScoreRecordCardDialog_o *)Component_object;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&this->fields.scoreRecordCardDialogInstance,
              (int64_t)Component_object,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35);
            v37 = (UnityEngine_Object_o *)*p_scoreRecordCardDialogInstance;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v36);
            if ( UnityEngine_Object__op_Equality(v37, 0LL, 0LL) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
              UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v28, 0LL);
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
                  v38 = this->fields.scoreRecordCardDialogInstance;
                  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)Instance, 0LL);
                  x = position.fields.x;
                  y = position.fields.y;
                  z = position.fields.z;
                  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
                  System_Action___ctor(
                    v45,
                    (Il2CppObject *)this,
                    Method_EventInfoScoreRecordCardComponent__OnTap_b__3_0__,
                    0LL);
                  if ( v38 )
                  {
                    v47.fields.x = x;
                    v47.fields.y = y;
                    v47.fields.z = z;
                    ScoreRecordCardDialog__Setup(v38, v47, v45, 0LL);
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
        sub_1BCAA3C(Instance, v26);
      }
    }
  }
}


void __fastcall EventInfoScoreRecordCardComponent___OnTap_b__3_0(
        EventInfoScoreRecordCardComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Component_o *baseTransform; // x0
  PartyOrganizationUtility_o *p_scoreRecordCardDialogInstance; // x19
  struct ScoreRecordCardDialog_o *scoreRecordCardDialogInstance; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B177F9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B177F9 = 1;
  }
  baseTransform = (UnityEngine_Component_o *)this->fields.baseTransform;
  if ( !baseTransform
    || (baseTransform = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(baseTransform, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)baseTransform, 1, 0LL),
        scoreRecordCardDialogInstance = this->fields.scoreRecordCardDialogInstance,
        p_scoreRecordCardDialogInstance = (PartyOrganizationUtility_o *)&this->fields.scoreRecordCardDialogInstance,
        (baseTransform = (UnityEngine_Component_o *)scoreRecordCardDialogInstance) == 0LL) )
  {
    sub_1BCAA3C(baseTransform, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(baseTransform, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
  p_scoreRecordCardDialogInstance->klass = 0LL;
  sub_1BCA784(p_scoreRecordCardDialogInstance, 0LL, v9, v10, v11, v12, v13, v14);
}