void MasterEquipIconComponent___ctor(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V1.4S, #1.0 }
  this->fields.ICON_NORMAL_COLOR = _Q1;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_CEC270;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t MasterEquipIconComponent__GetEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  MasterEquipIconComponent_o *v2; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  v2 = this;
  if ( (byte_4CB10DC & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB10DC = 1;
  }
  usrEquipData = v2->fields.usrEquipData;
  if ( !usrEquipData )
    sub_1C6BC60(this, method);
  v5 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v7, 0);
}


int32_t MasterEquipIconComponent__GetMoveBannerIdx(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  return this->fields.moveEqIdx;
}


int64_t MasterEquipIconComponent__GetUsrEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipData; // x8

  usrEquipData = this->fields.usrEquipData;
  if ( !usrEquipData )
    sub_1C6BC60(this, method);
  return usrEquipData->fields.id;
}


void MasterEquipIconComponent__OnClickEquipIcon(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  MasterEquipIconComponent_o *v2; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // x23
  unsigned int moveEqIdx; // w20
  __int64 v6; // x21
  __int64 v7; // x22
  struct UserEquipEntity_o *v8; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v2 = this;
  if ( (byte_4CB10DB & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB10DB = 1;
  }
  usrEquipData = v2->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_9;
  callbackFunc = v2->fields.callbackFunc;
  moveEqIdx = v2->fields.moveEqIdx;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v9, 0);
  v8 = v2->fields.usrEquipData;
  if ( !v8 || !callbackFunc )
LABEL_9:
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    moveEqIdx,
    (unsigned int)this,
    v8->fields.id,
    callbackFunc->fields.method);
}


void MasterEquipIconComponent__SetEnabled(MasterEquipIconComponent_o *this, bool isEnabled, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4CB10DD & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CB10DD = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_1C6BC60(0, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnabled, 0);
}


void MasterEquipIconComponent__SetEquipInfo(
        MasterEquipIconComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        MasterEquipIconComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ItemIconComponent_o *equipIconComp; // x0
  __int64 v12; // x1
  UILabel_o *equipLevelLabel; // x20
  System_String_o *v14; // x21
  Il2CppObject *v15; // x0
  int32_t lv; // [xsp+0h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB10D9 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/);
    byte_4CB10D9 = 1;
  }
  equipName = 0;
  *(_QWORD *)maxLv = 0;
  detail = 0;
  genderImageId = 0;
  this->fields.usrEquipData = usrEquipData;
  sub_1C6B9AC(&this->fields.usrEquipData, usrEquipData);
  this->fields.callbackFunc = callback;
  this->fields.moveEqIdx = moveIdx;
  equipIconComp = (ItemIconComponent_o *)sub_1C6B9AC(&this->fields.callbackFunc, callback);
  if ( !usrEquipData )
    goto LABEL_9;
  UserEquipEntity__getEquipInfo(usrEquipData, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0);
  equipIconComp = this->fields.equipIconComp;
  if ( !equipIconComp )
    goto LABEL_9;
  ItemIconComponent__SetEquipItem(equipIconComp, genderImageId, 0);
  equipLevelLabel = this->fields.equipLevelLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_8547/*"MASTER_EQSKILL_LV_TXT"*/, 0);
  lv = usrEquipData->fields.lv;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  equipIconComp = (ItemIconComponent_o *)System_String__Format(v14, v15, 0);
  if ( !equipLevelLabel )
LABEL_9:
    sub_1C6BC60(equipIconComp, v12);
  UILabel__set_text(equipLevelLabel, (System_String_o *)equipIconComp, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterEquipIconComponent__UpdateSelected(
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
  float r; // s0 OVERLAPPED
  float g; // s1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  v4 = this;
  if ( (byte_4CB10DA & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB10DA = 1;
  }
  usrEquipData = v4->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_15;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v14, 0);
  equipIconComp = v4->fields.equipIconComp;
  v9 = (int)this;
  if ( (_DWORD)this == nowEquipId )
  {
    if ( equipIconComp )
    {
      ItemIconComponent__SetColor(v4->fields.equipIconComp, v4->fields.ICON_NORMAL_COLOR, 0);
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
    sub_1C6BC60(this, *(_QWORD *)&nowEquipId);
  }
  if ( !equipIconComp )
    goto LABEL_15;
  ItemIconComponent__SetColor(v4->fields.equipIconComp, v4->fields.ICON_MASK_COLOR, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
  if ( !this )
    goto LABEL_15;
  b = v4->fields.ICON_MASK_COLOR.fields.b;
  a = v4->fields.ICON_MASK_COLOR.fields.a;
  r = v4->fields.ICON_MASK_COLOR.fields.r;
  g = v4->fields.ICON_MASK_COLOR.fields.g;
LABEL_13:
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&r, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipSelectedSprite;
  if ( !this )
    goto LABEL_15;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v9 == nowEquipId, 0);
}


void MasterEquipIconComponent__add_callbackFunc(
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

  if ( (byte_4CB10D7 & 1) == 0 )
  {
    sub_1C6BA08(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    byte_4CB10D7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v8->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_1C6BFFC(v8);
  MasterEquipIconComponent__remove_callbackFunc(v11, v12, v13);
}


void MasterEquipIconComponent__remove_callbackFunc(
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

  if ( (byte_4CB10D8 & 1) == 0 )
  {
    sub_1C6BA08(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    byte_4CB10D8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v8->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_1C6BFFC(v8);
  MasterEquipIconComponent__SetEquipInfo(v11, v12, v13, v14, v15, v16, v17);
}


void MasterEquipIconComponent_CallbackFunc___ctor(
        MasterEquipIconComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A99D18;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A99CB8;
}


System_IAsyncResult_o *MasterEquipIconComponent_CallbackFunc__BeginInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  int64_t v13; // [xsp+28h] [xbp-48h] BYREF
  int32_t v14; // [xsp+38h] [xbp-38h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-34h] BYREF

  v13 = userEquipId;
  v14 = equipId;
  v15 = idx;
  if ( (byte_4CB10DE & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    byte_4CB10DE = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(long_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v11, callback, object);
}


void MasterEquipIconComponent_CallbackFunc__EndInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void MasterEquipIconComponent_CallbackFunc__Invoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int64_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    idx,
    equipId,
    userEquipId,
    this->fields.method);
}