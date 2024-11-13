void __fastcall MasterEquipIconComponent___ctor(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_BD2780;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipIconComponent__GetEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterEquipIconComponent_o *v3; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_4B114FB & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           method,
                                           v2);
    byte_4B114FB = 1;
  }
  usrEquipData = v3->fields.usrEquipData;
  if ( !usrEquipData )
    sub_1BCAA3C(this, method);
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v8.fields.currentCryptoKey = v6;
  *(_QWORD *)&v8.fields.fakeValue = v5;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v8, 0LL);
}


int32_t __fastcall MasterEquipIconComponent__GetMoveBannerIdx(
        MasterEquipIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.moveEqIdx;
}


int64_t __fastcall MasterEquipIconComponent__GetUsrEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipData; // x8

  usrEquipData = this->fields.usrEquipData;
  if ( !usrEquipData )
    sub_1BCAA3C(this, method);
  return usrEquipData->fields.id;
}


void __fastcall MasterEquipIconComponent__OnClickEquipIcon(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterEquipIconComponent_o *v3; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // x23
  unsigned int moveEqIdx; // w20
  __int64 v7; // x21
  __int64 v8; // x22
  struct UserEquipEntity_o *v9; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = this;
  if ( (byte_4B114FA & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           method,
                                           v2);
    byte_4B114FA = 1;
  }
  usrEquipData = v3->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_9;
  callbackFunc = v3->fields.callbackFunc;
  moveEqIdx = v3->fields.moveEqIdx;
  v8 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v10, 0LL);
  v9 = v3->fields.usrEquipData;
  if ( !v9 || !callbackFunc )
LABEL_9:
    sub_1BCAA3C(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, int64_t, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    moveEqIdx,
    (unsigned int)this,
    v9->fields.id,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent__SetEnabled(
        MasterEquipIconComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4B114FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Collider___, isEnabled, method);
    byte_4B114FC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1BCAA3C(0LL, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnabled, 0LL);
}


void __fastcall MasterEquipIconComponent__SetEquipInfo(
        MasterEquipIconComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        MasterEquipIconComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ItemIconComponent_o *equipIconComp; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  UILabel_o *equipLevelLabel; // x20
  System_String_o *v19; // x21
  Il2CppObject *v20; // x0
  int32_t lv; // [xsp+0h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  __int64 maxLv; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B114F8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, usrEquipData, usrEquipId);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, v13, v14);
    byte_4B114F8 = 1;
  }
  equipName = 0LL;
  maxLv = 0LL;
  detail = 0LL;
  genderImageId = 0;
  this->fields.usrEquipData = usrEquipData;
  sub_1BCA784(&this->fields.usrEquipData, usrEquipData);
  this->fields.callbackFunc = callback;
  this->fields.moveEqIdx = moveIdx;
  equipIconComp = (ItemIconComponent_o *)sub_1BCA784(&this->fields.callbackFunc, callback);
  if ( !usrEquipData )
    goto LABEL_9;
  UserEquipEntity__getEquipInfo(
    usrEquipData,
    (int32_t *)&maxLv + 1,
    (int32_t *)&maxLv,
    &equipName,
    &detail,
    &genderImageId,
    0LL);
  equipIconComp = this->fields.equipIconComp;
  if ( !equipIconComp )
    goto LABEL_9;
  ItemIconComponent__SetEquipItem(equipIconComp, genderImageId, 0LL);
  equipLevelLabel = this->fields.equipLevelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_8648/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  lv = usrEquipData->fields.lv;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  equipIconComp = (ItemIconComponent_o *)System_String__Format(v19, v20, 0LL);
  if ( !equipLevelLabel )
LABEL_9:
    sub_1BCAA3C(equipIconComp, v16);
  UILabel__set_text(equipLevelLabel, (System_String_o *)equipIconComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent__UpdateSelected(
        MasterEquipIconComponent_o *this,
        int32_t nowEquipId,
        const MethodInfo *method)
{
  MasterEquipIconComponent_o *v4; // x20
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  struct ItemIconComponent_o *equipIconComp; // x8
  int v9; // w21
  float b; // s2
  float a; // s3
  float r; // s0
  float g; // s1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_4B114F9 & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1BCA7E0(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           *(_QWORD *)&nowEquipId,
                                           method);
    byte_4B114F9 = 1;
  }
  usrEquipData = v4->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_15;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&nowEquipId);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v14, 0LL);
  equipIconComp = v4->fields.equipIconComp;
  v9 = (int)this;
  if ( (_DWORD)this == nowEquipId )
  {
    if ( equipIconComp )
    {
      ItemIconComponent__SetColor(v4->fields.equipIconComp, v4->fields.ICON_NORMAL_COLOR, 0LL);
      this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
      if ( this )
      {
        b = v4->fields.ICON_NORMAL_COLOR.fields.b;
        a = v4->fields.ICON_NORMAL_COLOR.fields.a;
        r = v4->fields.ICON_NORMAL_COLOR.fields.r;
        g = v4->fields.ICON_NORMAL_COLOR.fields.g;
        goto LABEL_13;
      }
    }
LABEL_15:
    sub_1BCAA3C(this, *(_QWORD *)&nowEquipId);
  }
  if ( !equipIconComp )
    goto LABEL_15;
  ItemIconComponent__SetColor(v4->fields.equipIconComp, v4->fields.ICON_MASK_COLOR, 0LL);
  this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
  if ( !this )
    goto LABEL_15;
  b = v4->fields.ICON_MASK_COLOR.fields.b;
  a = v4->fields.ICON_MASK_COLOR.fields.a;
  r = v4->fields.ICON_MASK_COLOR.fields.r;
  g = v4->fields.ICON_MASK_COLOR.fields.g;
LABEL_13:
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&r, 0LL);
  this = (MasterEquipIconComponent_o *)v4->fields.equipSelectedSprite;
  if ( !this )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v9 == nowEquipId, 0LL);
}


void __fastcall MasterEquipIconComponent__add_callbackFunc(
        MasterEquipIconComponent_o *this,
        MasterEquipIconComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterEquipIconComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipIconComponent_o *v11; // x0
  MasterEquipIconComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B114F6 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipIconComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B114F6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v8->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_1BCACFC(v8);
  MasterEquipIconComponent__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MasterEquipIconComponent__remove_callbackFunc(
        MasterEquipIconComponent_o *this,
        MasterEquipIconComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MasterEquipIconComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MasterEquipIconComponent_o *v11; // x0
  UserEquipEntity_o *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  int32_t v15; // w4
  MasterEquipIconComponent_CallbackFunc_o *v16; // x5
  const MethodInfo *v17; // x6

  if ( (byte_4B114F7 & 1) == 0 )
  {
    sub_1BCA7E0(&MasterEquipIconComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B114F7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v8->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_1BCACFC(v8);
  MasterEquipIconComponent__SetEquipInfo(v11, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent_CallbackFunc___ctor(
        MasterEquipIconComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A05998;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05938;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MasterEquipIconComponent_CallbackFunc__BeginInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int64_t v15; // [xsp+28h] [xbp-48h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v15 = userEquipId;
  v16 = equipId;
  v17 = idx;
  if ( (byte_4B114FD & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&idx, *(_QWORD *)&equipId);
    sub_1BCA7E0(&long_TypeInfo, v10, v11);
    byte_4B114FD = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(long_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall MasterEquipIconComponent_CallbackFunc__EndInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MasterEquipIconComponent_CallbackFunc__Invoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int64_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    idx,
    equipId,
    userEquipId,
    *(_QWORD *)&this->fields.extra_arg);
}