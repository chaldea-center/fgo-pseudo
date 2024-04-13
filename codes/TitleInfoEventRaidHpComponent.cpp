void __fastcall TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  System_Int32_array **v15; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42ECC2A & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidHpComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_18787/*"event_raid_ok"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18785/*"event_raid_ng"*/, v11, v12, v13);
    byte_42ECC2A = 1;
  }
  TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH = 31.0;
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_18787/*"event_raid_ok"*/;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)StringLiteral_18787/*"event_raid_ok"*/;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->RESULT_OK_SPNAME, v15, v2, v3, v4, v5, v6, v7);
  v16 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_18785/*"event_raid_ng"*/;
  v16->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_18785/*"event_raid_ng"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->RESULT_NG_SPNAME, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x3
  UnityEngine_Component_o *resultSp; // x0
  UISprite_o *v7; // x20
  System_String_o *RESULT_NG_SPNAME; // x1

  if ( (byte_42ECC29 & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventRaidHpComponent_TypeInfo, dispHpType, (_DWORD)method, v3);
    byte_42ECC29 = 1;
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
    v7 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    }
    if ( !v7 )
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
      sub_B5D69C(resultSp, *(_QWORD *)&dispHpType);
    }
    v7 = this->fields.resultSp;
    resultSp = (UnityEngine_Component_o *)TitleInfoEventRaidHpComponent_TypeInfo;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    }
    if ( !v7 )
      goto LABEL_24;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_OK_SPNAME;
  }
  UISprite__set_spriteName(v7, RESULT_NG_SPNAME, 0LL);
LABEL_22:
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_24;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))resultSp->klass[2]._1.typeMetadataHandle)(
    resultSp,
    resultSp->klass[2]._1.interopData);
}