void __fastcall TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  int32_t v7; // w1
  int32_t v8; // w1
  struct TitleInfoEventRaidHpComponent_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FA527 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventRaidHpComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19147/*"event_raid_ok"*/, v4);
    sub_1B640C8(&StringLiteral_19145/*"event_raid_ng"*/, v5);
    byte_49FA527 = 1;
  }
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  static_fields->WIDTH = 31.0;
  v7 = StringLiteral_19147/*"event_raid_ok"*/;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)StringLiteral_19147/*"event_raid_ok"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->RESULT_OK_SPNAME, v7, v2, v3);
  v8 = StringLiteral_19145/*"event_raid_ng"*/;
  v9 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v9->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_19145/*"event_raid_ng"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->RESULT_NG_SPNAME, v8, v10, v11);
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

  if ( (byte_49FA526 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType);
    byte_49FA526 = 1;
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
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
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
      sub_1B64324(resultSp);
    }
    v6 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
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