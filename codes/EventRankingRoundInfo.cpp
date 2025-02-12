void __fastcall EventRankingRoundInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  int64_t v10; // x1
  struct EventRankingRoundInfo_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB88D2 & 1) == 0 )
  {
    sub_1C13D24(&EventRankingRoundInfo_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_17741/*"btn_auto_on"*/, v8);
    sub_1C13D24(&StringLiteral_17742/*"btn_badge_organization"*/, v9);
    byte_4BB88D2 = 1;
  }
  EventRankingRoundInfo_TypeInfo->static_fields->SELECTED_SPRITE_NAME = (struct System_String_o *)StringLiteral_17742/*"btn_badge_organization"*/;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)EventRankingRoundInfo_TypeInfo->static_fields,
    StringLiteral_17742/*"btn_badge_organization"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_17741/*"btn_auto_on"*/;
  static_fields = EventRankingRoundInfo_TypeInfo->static_fields;
  static_fields->NON_SELECT_SPRITE_NAME = (struct System_String_o *)StringLiteral_17741/*"btn_auto_on"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->NON_SELECT_SPRITE_NAME, v10, v12, v13, v14, v15, v16, v17);
}


void __fastcall EventRankingRoundInfo___ctor(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRankingRoundInfo__OnClikcButton(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  EventRankingRoundInfo_o *v2; // x19
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventRankingRoundInfo_ClickFunc_o *onClickFunc; // x8

  v2 = this;
  if ( (byte_4BB88D1 & 1) == 0 )
  {
    this = (EventRankingRoundInfo_o *)sub_1C13D24(&Method_EventRankingRoundInfo_OnClikcButton__, method);
    byte_4BB88D1 = 1;
  }
  if ( v2->fields.isSelect )
  {
    v3 = Method_EventRankingRoundInfo_OnClikcButton__;
    if ( (*((_BYTE *)Method_EventRankingRoundInfo_OnClikcButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C13D3C(Method_EventRankingRoundInfo_OnClikcButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C13D08(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0LL);
  }
  else
  {
    onClickFunc = v2->fields.onClickFunc;
    if ( !onClickFunc )
      sub_1C13F80(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickFunc->fields.m_target)(
      onClickFunc->fields.original_method_info,
      (unsigned int)v2->fields.roundNum,
      *(_QWORD *)&onClickFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo__SetRoundInfo(
        EventRankingRoundInfo_o *this,
        bool isOpen,
        int32_t roundIndex,
        System_String_o *roundName,
        EventRankingRoundInfo_ClickFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseButton; // x0
  __int64 v11; // x1
  struct EventRankingRoundInfo_ClickFunc_o **p_onClickFunc; // x19
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  baseButton = (UnityEngine_GameObject_o *)this->fields.baseButton;
  if ( !baseButton
    || (!isOpen ? (v11 = 3LL) : (v11 = 0LL),
        (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *, EventRankingRoundInfo_ClickFunc_o *, const MethodInfo *))baseButton->klass[1]._1.implementedInterfaces)(
           baseButton,
           v11,
           1LL,
           baseButton->klass[1]._1.interfaceOffsets,
           callback,
           method),
         (baseButton = this->fields.maskObject) == 0LL)
     || (UnityEngine_GameObject__SetActive(baseButton, !isOpen, 0LL),
         baseButton = (UnityEngine_GameObject_o *)this->fields.roundLabel,
         this->fields.roundNum = roundIndex,
         !baseButton)) )
  {
    sub_1C13F80(baseButton, isOpen);
  }
  UILabel__set_text((UILabel_o *)baseButton, roundName, 0LL);
  this->fields.onClickFunc = callback;
  p_onClickFunc = &this->fields.onClickFunc;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_onClickFunc, (int64_t)callback, v14, v15, v16, v17, v18, v19);
  *((_BYTE *)p_onClickFunc - 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo__SetSelectInfo(
        EventRankingRoundInfo_o *this,
        bool isSelect,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  void *gameObject; // x0
  __int64 v11; // x1
  UISprite_o *roundSprite; // x20
  System_String_o **v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4BB88D0 & 1) == 0 )
  {
    sub_1C13D24(&EventRankingRoundInfo_TypeInfo, isSelect);
    byte_4BB88D0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = this->fields.roundLabel;
  this->fields.isSelect = isSelect;
  if ( !gameObject )
    goto LABEL_13;
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)gameObject, v14, 0LL);
  roundSprite = this->fields.roundSprite;
  gameObject = EventRankingRoundInfo_TypeInfo;
  if ( !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
    gameObject = EventRankingRoundInfo_TypeInfo;
  }
  if ( !roundSprite )
LABEL_13:
    sub_1C13F80(gameObject, v11);
  v13 = (System_String_o **)*((_QWORD *)gameObject + 23);
  if ( !isSelect )
    ++v13;
  UISprite__set_spriteName(roundSprite, *v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo_ClickFunc___ctor(
        EventRankingRoundInfo_ClickFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C13DE4(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C13F9C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C13E4C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A5A530;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5A4E8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventRankingRoundInfo_ClickFunc__BeginInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = num;
  if ( (byte_4BB88D3 & 1) == 0 )
  {
    sub_1C13D24(&int_TypeInfo, *(_QWORD *)&num);
    byte_4BB88D3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C13CD8(this, v9, callback, object);
}


void __fastcall EventRankingRoundInfo_ClickFunc__EndInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C13CDC(result, 0LL, method);
}


void __fastcall EventRankingRoundInfo_ClickFunc__Invoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    num,
    *(_QWORD *)&this->fields.extra_arg);
}