void TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct TitleInfoEventRaidHpComponent_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C25C1E & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_19231/*"event_raid_ok"*/);
    sub_1C2D490(&StringLiteral_19229/*"event_raid_ng"*/);
    byte_4C25C1E = 1;
  }
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  static_fields->WIDTH = 31.0;
  v4 = StringLiteral_19231/*"event_raid_ok"*/;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)StringLiteral_19231/*"event_raid_ok"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->RESULT_OK_SPNAME, v4, v1, v2);
  v5 = StringLiteral_19229/*"event_raid_ng"*/;
  v6 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v6->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_19229/*"event_raid_ng"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->RESULT_NG_SPNAME, v5, v7, v8);
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
  UISprite_o *v6; // x20
  System_String_o *RESULT_NG_SPNAME; // x1

  if ( (byte_4C25C1D & 1) == 0 )
  {
    sub_1C2D490(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_4C25C1D = 1;
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
        resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0);
        if ( resultSp )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 0, 0);
          goto LABEL_20;
        }
      }
LABEL_22:
      sub_1C2D6EC(resultSp, *(_QWORD *)&dispHpType);
    }
    v6 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    if ( !v6 )
      goto LABEL_22;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_OK_SPNAME;
  }
  UISprite__set_spriteName(v6, RESULT_NG_SPNAME, 0);
LABEL_20:
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_22;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))resultSp->klass[2]._1.parent)(
    resultSp,
    resultSp->klass[2]._1.generic_class);
}