void __fastcall TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  int64_t v13; // x1
  int64_t v14; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B14538 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidHpComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19425/*"event_raid_ok"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_19423/*"event_raid_ng"*/, v10, v11);
    byte_4B14538 = 1;
  }
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  static_fields->WIDTH = 31.0;
  v13 = StringLiteral_19425/*"event_raid_ok"*/;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)StringLiteral_19425/*"event_raid_ok"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->RESULT_OK_SPNAME, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_19423/*"event_raid_ng"*/;
  v15 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v15->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_19423/*"event_raid_ng"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v15->RESULT_NG_SPNAME, v14, v16, v17, v18, v19, v20, v21);
}


void __fastcall TitleInfoEventRaidHpComponent___ctor(TitleInfoEventRaidHpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventRaidHpComponent__Setup(
        TitleInfoEventRaidHpComponent_o *this,
        int32_t dispHpType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resultSp; // x0
  UISprite_o *v6; // x20
  System_String_o *RESULT_NG_SPNAME; // x1

  if ( (byte_4B14537 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType, method);
    byte_4B14537 = 1;
  }
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_22;
  resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0LL);
  if ( !resultSp )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 1, 0LL);
  if ( dispHpType == 2 )
  {
    v6 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType);
    if ( !v6 )
      goto LABEL_22;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_NG_SPNAME;
  }
  else
  {
    if ( dispHpType != 1 )
    {
      if ( dispHpType )
        goto LABEL_20;
      resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
      if ( resultSp )
      {
        resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0LL);
        if ( resultSp )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 0, 0LL);
          goto LABEL_20;
        }
      }
LABEL_22:
      sub_1BCAA3C(resultSp, *(_QWORD *)&dispHpType);
    }
    v6 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType);
    if ( !v6 )
      goto LABEL_22;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_OK_SPNAME;
  }
  UISprite__set_spriteName(v6, RESULT_NG_SPNAME, 0LL);
LABEL_20:
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_22;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))resultSp->klass[2]._1.typeMetadataHandle)(
    resultSp,
    resultSp->klass[2]._1.interopData);
}