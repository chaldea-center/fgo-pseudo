void MasterEquipIconComponent___ctor(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.ICON_NORMAL_COLOR = _Q0;
  this->fields.ICON_MASK_COLOR = (struct UnityEngine_Color_o)xmmword_E9C1E0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


int32_t MasterEquipIconComponent__GetEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterEquipIconComponent_o *v3; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v5; // x19
  __int64 v6; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v8; // 0:x0.16

  v3 = this;
  if ( (byte_596B3AF & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B3AF = 1;
  }
  usrEquipData = v3->fields.usrEquipData;
  if ( !usrEquipData )
    sub_2213CDC(this, method);
  v5 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v8.fields.currentCryptoKey = v5;
  *(_QWORD *)&v8.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v8, 0);
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
    sub_2213CDC(this, method);
  return usrEquipData->fields.id;
}


void MasterEquipIconComponent__OnClickEquipIcon(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MasterEquipIconComponent_o *v3; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // x23
  unsigned int moveEqIdx; // w20
  struct UserEquipEntity_o *v9; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v3 = this;
  if ( (byte_596B3AE & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B3AE = 1;
  }
  usrEquipData = v3->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_9;
  v5 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  callbackFunc = v3->fields.callbackFunc;
  moveEqIdx = v3->fields.moveEqIdx;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
  v9 = v3->fields.usrEquipData;
  if ( !v9 || !callbackFunc )
LABEL_9:
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, int64_t, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    moveEqIdx,
    (unsigned int)this,
    v9->fields.id,
    callbackFunc->fields.method);
}


void MasterEquipIconComponent__SetEnabled(MasterEquipIconComponent_o *this, bool isEnabled, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_596B3B0 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_596B3B0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_object )
    sub_2213CDC(0, v6);
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnabled, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterEquipIconComponent__SetEquipInfo(
        MasterEquipIconComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        MasterEquipIconComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  ItemIconComponent_o *equipIconComp; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UILabel_o *equipLevelLabel; // x20
  System_String_o *v23; // x21
  Il2CppObject *v24; // x0
  int32_t lv; // [xsp+0h] [xbp-50h] BYREF
  int32_t genderImageId; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *detail; // [xsp+8h] [xbp-48h] BYREF
  System_String_o *equipName; // [xsp+10h] [xbp-40h] BYREF
  int32_t maxLv[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596B3AC & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_8913/*"MASTER_EQSKILL_LV_TXT"*/);
    byte_596B3AC = 1;
  }
  equipName = 0;
  *(_QWORD *)maxLv = 0;
  detail = 0;
  genderImageId = 0;
  this->fields.usrEquipData = usrEquipData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usrEquipData,
    (int32_t)usrEquipData,
    (System_String_o *)usrEquipId,
    *(System_String_o **)&userLv,
    moveIdx,
    (int32_t)callback,
    (bool)method,
    v7);
  this->fields.callbackFunc = callback;
  this->fields.moveEqIdx = moveIdx;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !usrEquipData )
    goto LABEL_9;
  UserEquipEntity__getEquipInfo(usrEquipData, &maxLv[1], maxLv, &equipName, &detail, &genderImageId, 0);
  equipIconComp = this->fields.equipIconComp;
  if ( !equipIconComp )
    goto LABEL_9;
  ItemIconComponent__SetEquipItem(equipIconComp, genderImageId, 0);
  equipLevelLabel = this->fields.equipLevelLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20, v21);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_8913/*"MASTER_EQSKILL_LV_TXT"*/, 0);
  lv = usrEquipData->fields.lv;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &lv);
  equipIconComp = (ItemIconComponent_o *)System_String__Format(v23, v24, 0);
  if ( !equipLevelLabel )
LABEL_9:
    sub_2213CDC(equipIconComp, v19);
  UILabel__set_text(equipLevelLabel, (System_String_o *)equipIconComp, 0);
}


// local variable allocation has failed, the output may be wrong!
void MasterEquipIconComponent__UpdateSelected(
        MasterEquipIconComponent_o *this,
        int32_t nowEquipId,
        const MethodInfo *method)
{
  MasterEquipIconComponent_o *v4; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w8
  bool v9; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_596B3AD & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B3AD = 1;
  }
  usrEquipData = v4->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_16;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      *(_QWORD *)&nowEquipId,
      method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v6;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipIconComp;
  if ( v8 != nowEquipId )
  {
    if ( this )
    {
      ItemIconComponent__SetColor((ItemIconComponent_o *)this, v4->fields.ICON_MASK_COLOR, 0);
      this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
      if ( this )
      {
        UIWidget__set_color((UIWidget_o *)this, v4->fields.ICON_MASK_COLOR, 0);
        this = (MasterEquipIconComponent_o *)v4->fields.equipSelectedSprite;
        if ( this )
        {
          v9 = 0;
          goto LABEL_15;
        }
      }
    }
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&nowEquipId);
  }
  if ( !this )
    goto LABEL_16;
  ItemIconComponent__SetColor((ItemIconComponent_o *)this, v4->fields.ICON_NORMAL_COLOR, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipLevelLabel;
  if ( !this )
    goto LABEL_16;
  UIWidget__set_color((UIWidget_o *)this, v4->fields.ICON_NORMAL_COLOR, 0);
  this = (MasterEquipIconComponent_o *)v4->fields.equipSelectedSprite;
  if ( !this )
    goto LABEL_16;
  v9 = 1;
LABEL_15:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v9, 0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MasterEquipIconComponent_o *v13; // x0
  MasterEquipIconComponent_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B3AA & 1) == 0 )
  {
    sub_2213A60(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    byte_596B3AA = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MasterEquipIconComponent_o *)sub_221405C(v8, MasterEquipIconComponent_CallbackFunc_TypeInfo, v9, v10);
  MasterEquipIconComponent__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MasterEquipIconComponent_o *v13; // x0
  UserEquipEntity_o *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  int32_t v17; // w4
  MasterEquipIconComponent_CallbackFunc_o *v18; // x5
  const MethodInfo *v19; // x6

  if ( (byte_596B3AB & 1) == 0 )
  {
    sub_2213A60(&MasterEquipIconComponent_CallbackFunc_TypeInfo);
    byte_596B3AB = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MasterEquipIconComponent_o *)sub_221405C(v8, MasterEquipIconComponent_CallbackFunc_TypeInfo, v9, v10);
  MasterEquipIconComponent__SetEquipInfo(v13, v14, v15, v16, v17, v18, v19);
}


void MasterEquipIconComponent_CallbackFunc___ctor(
        MasterEquipIconComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2001AEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2001A8C;
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
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  int64_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+38h] [xbp-28h] BYREF
  int32_t v15; // [xsp+3Ch] [xbp-24h] BYREF

  v14 = equipId;
  v15 = idx;
  v13 = userEquipId;
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(qword_5984348, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984348, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984368, &v13);
  return (System_IAsyncResult_o *)sub_2213A14(this, v11, callback, object);
}


void MasterEquipIconComponent_CallbackFunc__EndInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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