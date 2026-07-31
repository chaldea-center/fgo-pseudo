void TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  int32_t v9; // w1
  struct TitleInfoEventRaidHpComponent_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5936F5C & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_20095/*"event_raid_ok"*/);
    sub_21FFC50(&StringLiteral_20093/*"event_raid_ng"*/);
    byte_5936F5C = 1;
  }
  v7 = StringLiteral_20095/*"event_raid_ok"*/;
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  static_fields->WIDTH = 31.0;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->RESULT_OK_SPNAME, v7, v1, v2, v3, v4, v5, v6);
  v9 = StringLiteral_20093/*"event_raid_ng"*/;
  v10 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v10->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_20093/*"event_raid_ng"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->RESULT_NG_SPNAME, v9, v11, v12, v13, v14, v15, v16);
}


void TitleInfoEventRaidHpComponent___ctor(TitleInfoEventRaidHpComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventRaidHpComponent__Setup(
        TitleInfoEventRaidHpComponent_o *this,
        int32_t dispHpType,
        const MethodInfo *method)
{
  UnityEngine_Component_o *resultSp; // x0
  __int64 v6; // x2
  UISprite_o *v7; // x20
  System_String_o *RESULT_NG_SPNAME; // x1

  if ( (byte_5936F5B & 1) == 0 )
  {
    sub_21FFC50(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_5936F5B = 1;
  }
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_22;
  resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0);
  if ( !resultSp )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 1, 0);
  if ( dispHpType == 2 )
  {
    v7 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType, v6);
    if ( !v7 )
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
        resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0);
        if ( resultSp )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 0, 0);
          goto LABEL_20;
        }
      }
LABEL_22:
      sub_21FFECC(resultSp, *(_QWORD *)&dispHpType);
    }
    v7 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !*(&TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType, v6);
    if ( !v7 )
      goto LABEL_22;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_OK_SPNAME;
  }
  UISprite__set_spriteName(v7, RESULT_NG_SPNAME, 0);
LABEL_20:
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_22;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))resultSp->klass[2]._1.parent)(
    resultSp,
    resultSp->klass[2]._1.generic_class);
}