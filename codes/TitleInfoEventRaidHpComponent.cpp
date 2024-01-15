void __fastcall TitleInfoEventRaidHpComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  struct TitleInfoEventRaidHpComponent_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FE002 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidHpComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_18487/*"event_raid_ok"*/, v8);
    sub_B16FFC(&StringLiteral_18485/*"event_raid_ng"*/, v9);
    byte_40FE002 = 1;
  }
  TitleInfoEventRaidHpComponent_TypeInfo->static_fields->WIDTH = 31.0;
  static_fields = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_18487/*"event_raid_ok"*/;
  static_fields->RESULT_OK_SPNAME = (struct System_String_o *)StringLiteral_18487/*"event_raid_ok"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->RESULT_OK_SPNAME, v11, v2, v3, v4, v5, v6, v7);
  v12 = TitleInfoEventRaidHpComponent_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_18485/*"event_raid_ng"*/;
  v12->RESULT_NG_SPNAME = (struct System_String_o *)StringLiteral_18485/*"event_raid_ng"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->RESULT_NG_SPNAME, v13, v14, v15, v16, v17, v18, v19);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UISprite_o *v9; // x20
  System_String_o *RESULT_NG_SPNAME; // x1
  struct UISprite_o *v11; // x0

  if ( (byte_40FE001 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventRaidHpComponent_TypeInfo, *(_QWORD *)&dispHpType);
    byte_40FE001 = 1;
  }
  resultSp = (UnityEngine_Component_o *)this->fields.resultSp;
  if ( !resultSp )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject(resultSp, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( dispHpType == 2 )
  {
    v9 = this->fields.resultSp;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    }
    if ( !v9 )
      goto LABEL_24;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_NG_SPNAME;
  }
  else
  {
    if ( dispHpType != 1 )
    {
      if ( dispHpType )
        goto LABEL_22;
      v7 = (UnityEngine_Component_o *)this->fields.resultSp;
      if ( v7 )
      {
        v8 = UnityEngine_Component__get_gameObject(v7, 0LL);
        if ( v8 )
        {
          UnityEngine_GameObject__SetActive(v8, 0, 0LL);
          goto LABEL_22;
        }
      }
LABEL_24:
      sub_B170D4();
    }
    v9 = this->fields.resultSp;
    if ( (BYTE3(TitleInfoEventRaidHpComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventRaidHpComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventRaidHpComponent_TypeInfo);
    }
    if ( !v9 )
      goto LABEL_24;
    RESULT_NG_SPNAME = TitleInfoEventRaidHpComponent_TypeInfo->static_fields->RESULT_OK_SPNAME;
  }
  UISprite__set_spriteName(v9, RESULT_NG_SPNAME, 0LL);
LABEL_22:
  v11 = this->fields.resultSp;
  if ( !v11 )
    goto LABEL_24;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v11->klass->vtable._33_MakePixelPerfect.method)(
    v11,
    v11->klass->vtable._34_get_minWidth.methodPtr);
}