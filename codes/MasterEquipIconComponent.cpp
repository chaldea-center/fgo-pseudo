// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent___ctor(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s4
  float v11; // s5
  float v12; // s6
  struct UnityEngine_Color_o v13; // [xsp+0h] [xbp-30h] BYREF
  struct UnityEngine_Color_o v14; // [xsp+10h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = 1.0;
  v8 = 1.0;
  v9 = 1.0;
  *(_QWORD *)&v14.fields.r = 0LL;
  UnityEngine_Color___ctor_41567816(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  this->fields.ICON_NORMAL_COLOR = v14;
  v15.fields.r = 0.518;
  v13 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.518;
  v15.fields.b = 0.518;
  UnityEngine_Color___ctor_41567816(v15, v10, v11, v12, (const MethodInfo *)&v13);
  this->fields.ICON_MASK_COLOR = v13;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipIconComponent__GetEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterEquipIconComponent_o *v4; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_42EBB62 & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EBB62 = 1;
  }
  usrEquipData = v4->fields.usrEquipData;
  if ( !usrEquipData )
    sub_B5D69C(this, method);
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v9, 0LL);
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
    sub_B5D69C(this, method);
  return usrEquipData->fields.id;
}


void __fastcall MasterEquipIconComponent__OnClickEquipIcon(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterEquipIconComponent_o *v4; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t moveEqIdx; // w20
  __int64 v8; // x22
  __int64 v9; // x23
  struct UserEquipEntity_o *v10; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v4 = this;
  if ( (byte_42EBB61 & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           (_DWORD)method,
                                           v2,
                                           v3);
    byte_42EBB61 = 1;
  }
  usrEquipData = v4->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_10;
  callbackFunc = v4->fields.callbackFunc;
  moveEqIdx = v4->fields.moveEqIdx;
  v9 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
  v10 = v4->fields.usrEquipData;
  if ( !v10 || !callbackFunc )
LABEL_10:
    sub_B5D69C(this, method);
  MasterEquipIconComponent_CallbackFunc__Invoke(callbackFunc, moveEqIdx, (int32_t)this, v10->fields.id, 0LL);
}


void __fastcall MasterEquipIconComponent__SetEnabled(
        MasterEquipIconComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v7; // x1

  if ( (byte_42EBB63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, isEnabled, (_DWORD)method, v3);
    byte_42EBB63 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B5D69C(0LL, v7);
  UnityEngine_Collider__set_enabled(Component_WebViewObject, isEnabled, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent__SetEquipInfo(
        MasterEquipIconComponent_o *this,
        UserEquipEntity_o *usrEquipData,
        int64_t usrEquipId,
        int32_t userLv,
        int32_t moveIdx,
        MasterEquipIconComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ItemIconComponent_o *equipIconComp; // x0
  __int64 v25; // x1
  UILabel_o *equipLevelLabel; // x20
  System_String_o *v27; // x21
  Il2CppObject *v28; // x0
  int32_t lv; // [xsp+8h] [xbp-48h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_42EBB5F & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)usrEquipData, usrEquipId, *(_QWORD *)&userLv);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, v15, v16, v17);
    byte_42EBB5F = 1;
  }
  condUsrLv = 0;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  this->fields.usrEquipData = usrEquipData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrEquipData,
    (System_Int32_array **)usrEquipData,
    (System_String_array **)usrEquipId,
    *(System_String_array ***)&userLv,
    *(System_Boolean_array ***)&moveIdx,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v7);
  this->fields.callbackFunc = callback;
  this->fields.moveEqIdx = moveIdx;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !usrEquipData )
    goto LABEL_10;
  UserEquipEntity__getEquipInfo(usrEquipData, &condUsrLv, &maxLv, &equipName, &detail, &genderImageId, 0LL);
  equipIconComp = this->fields.equipIconComp;
  if ( !equipIconComp )
    goto LABEL_10;
  ItemIconComponent__SetEquipItem(equipIconComp, genderImageId, 0LL);
  equipLevelLabel = this->fields.equipLevelLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_8719/*"MASTER_EQSKILL_LV_TXT"*/, 0LL);
  lv = usrEquipData->fields.lv;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  equipIconComp = (ItemIconComponent_o *)System_String__Format(v27, v28, 0LL);
  if ( !equipLevelLabel )
LABEL_10:
    sub_B5D69C(equipIconComp, v25);
  UILabel__set_text(equipLevelLabel, (System_String_o *)equipIconComp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent__UpdateSelected(
        MasterEquipIconComponent_o *this,
        int32_t nowEquipId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  MasterEquipIconComponent_o *v5; // x19
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v7; // x21
  __int64 v8; // x22
  struct ItemIconComponent_o *equipIconComp; // x8
  bool v10; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42EBB60 & 1) == 0 )
  {
    this = (MasterEquipIconComponent_o *)sub_B5D5C4(
                                           &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                           nowEquipId,
                                           (_DWORD)method,
                                           v3);
    byte_42EBB60 = 1;
  }
  usrEquipData = v5->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_17;
  v8 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v8;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  this = (MasterEquipIconComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
  equipIconComp = v5->fields.equipIconComp;
  if ( (_DWORD)this != nowEquipId )
  {
    if ( equipIconComp )
    {
      ItemIconComponent__SetColor(v5->fields.equipIconComp, v5->fields.ICON_MASK_COLOR, 0LL);
      this = (MasterEquipIconComponent_o *)v5->fields.equipLevelLabel;
      if ( this )
      {
        UIWidget__set_color((UIWidget_o *)this, v5->fields.ICON_MASK_COLOR, 0LL);
        this = (MasterEquipIconComponent_o *)v5->fields.equipSelectedSprite;
        if ( this )
        {
          v10 = 0;
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_B5D69C(this, *(_QWORD *)&nowEquipId);
  }
  if ( !equipIconComp )
    goto LABEL_17;
  ItemIconComponent__SetColor(v5->fields.equipIconComp, v5->fields.ICON_NORMAL_COLOR, 0LL);
  this = (MasterEquipIconComponent_o *)v5->fields.equipLevelLabel;
  if ( !this )
    goto LABEL_17;
  UIWidget__set_color((UIWidget_o *)this, v5->fields.ICON_NORMAL_COLOR, 0LL);
  this = (MasterEquipIconComponent_o *)v5->fields.equipSelectedSprite;
  if ( !this )
    goto LABEL_17;
  v10 = 1;
LABEL_16:
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v10, 0LL);
}


void __fastcall MasterEquipIconComponent__add_callbackFunc(
        MasterEquipIconComponent_o *this,
        MasterEquipIconComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MasterEquipIconComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MasterEquipIconComponent_o *v12; // x0
  MasterEquipIconComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EBB5D & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipIconComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBB5D = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v9->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  MasterEquipIconComponent__remove_callbackFunc(v12, v13, v14);
}


void __fastcall MasterEquipIconComponent__remove_callbackFunc(
        MasterEquipIconComponent_o *this,
        MasterEquipIconComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MasterEquipIconComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MasterEquipIconComponent_o *v12; // x0
  UserEquipEntity_o *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  int32_t v16; // w4
  MasterEquipIconComponent_CallbackFunc_o *v17; // x5
  const MethodInfo *v18; // x6

  if ( (byte_42EBB5E & 1) == 0 )
  {
    sub_B5D5C4(&MasterEquipIconComponent_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EBB5E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MasterEquipIconComponent_CallbackFunc_c *)v9->klass != MasterEquipIconComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  MasterEquipIconComponent__SetEquipInfo(v12, v13, v14, v15, v16, v17, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent_CallbackFunc___ctor(
        MasterEquipIconComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall MasterEquipIconComponent_CallbackFunc__BeginInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int64_t v15; // [xsp+20h] [xbp-30h] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = idx;
  v16 = equipId;
  v15 = userEquipId;
  if ( (byte_42E5F26 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, idx, equipId, userEquipId);
    sub_B5D5C4(&long_TypeInfo, v10, v11, v12);
    byte_42E5F26 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(long_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall MasterEquipIconComponent_CallbackFunc__EndInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent_CallbackFunc__Invoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        int32_t idx,
        int32_t equipId,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v10; // x26
  MasterEquipIconComponent_CallbackFunc_o **v11; // x27
  __int64 v12; // x28
  unsigned int v13; // w25
  __int64 class_0; // x0
  __int64 v15; // x3
  __int64 v16; // x8
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD); // x0
  MasterEquipIconComponent_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(_QWORD, _QWORD, int64_t, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  __int64 v30; // x8
  __int64 v31; // x1
  __int64 v32; // x2
  unsigned __int64 v33; // x10
  _DWORD *v34; // x11
  MasterEquipIconComponent_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v35;
    v10 = 1LL;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)(v5 + 24);
  if ( v10 )
  {
    v11 = (MasterEquipIconComponent_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v12 = 0LL;
    while ( 1 )
    {
      v23 = v11[v12];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(_QWORD, _QWORD, int64_t, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&idx, *(_QWORD *)&equipId);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int)idx, (unsigned int)equipId, userEquipId, v25);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v24 && *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          v30 = *v24;
          v31 = *(_QWORD *)(v25 + 24);
          v32 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v33 = 0LL;
            v34 = (_DWORD *)(*(_QWORD *)(v30 + 176) + 8LL);
            while ( *((_QWORD *)v34 - 1) != v31 )
            {
              ++v33;
              v34 += 4;
              if ( v33 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v30 + 16LL * (*v34 + (int)v32) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v31, v32, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, (unsigned int)idx, (unsigned int)equipId, userEquipId, v22);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v16 = *v24;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v16 + 16LL * (int)(*v18 + v13) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v13, v15);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD))v19)(
            v24,
            (unsigned int)idx,
            (unsigned int)equipId,
            userEquipId,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD))(*v24
                                                                             + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                             + 312))(
            v24,
            (unsigned int)idx,
            (unsigned int)equipId,
            userEquipId,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, int64_t, __int64))v26)(
      v24,
      (unsigned int)idx,
      (unsigned int)equipId,
      userEquipId,
      v25);
    goto LABEL_37;
  }
}