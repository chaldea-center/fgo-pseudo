void __fastcall TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  System_Int32_array **v8; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43560F4 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventRaidHpComponent_TypeInfo);
    sub_B70694(&StringLiteral_18837/*"event_raid_ok"*/);
    sub_B70694(&StringLiteral_18835/*"event_raid_ng"*/);
    byte_43560F4 = 1;
  }
  TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH = 31.0;
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18837/*"event_raid_ok"*/;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)StringLiteral_18837/*"event_raid_ok"*/;
  sub_B70630((BattleServantConfConponent_o *)&static_fields->RESULT_OK_SPNAME, v8, v1, v2, v3, v4, v5, v6);
  v9 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18835/*"event_raid_ng"*/;
  v9->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_18835/*"event_raid_ng"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->RESULT_NG_SPNAME, v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_43560F3 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventRaidHpComponent_TypeInfo);
    byte_43560F3 = 1;
  }
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_24;
  resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0LL);
  if ( !resultSp )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 1, 0LL);
  if ( dispHpType == 2 )
  {
    v6 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    }
    if ( !v6 )
      goto LABEL_24;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_NG_SPNAME;
  }
  else
  {
    if ( dispHpType != 1 )
    {
      if ( dispHpType )
        goto LABEL_22;
      resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
      if ( resultSp )
      {
        resultSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSp, 0LL);
        if ( resultSp )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSp, 0, 0LL);
          goto LABEL_22;
        }
      }
LABEL_24:
      sub_B7076C(resultSp, *(_QWORD *)&dispHpType);
    }
    v6 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    }
    if ( !v6 )
      goto LABEL_24;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_OK_SPNAME;
  }
  UISprite__set_spriteName(v6, RESULT_NG_SPNAME, 0LL);
LABEL_22:
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))resultSp->klass[2]._1.typeMetadataHandle)(
    resultSp,
    resultSp->klass[2]._1.interopData);
}