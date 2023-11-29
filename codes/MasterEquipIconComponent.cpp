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
  UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v14);
  this->fields.ICON_NORMAL_COLOR = v14;
  v15.fields.r = 0.518;
  v13 = (struct UnityEngine_Color_o)0LL;
  v15.fields.g = 0.518;
  v15.fields.b = 0.518;
  UnityEngine_Color___ctor_40666012(v15, v10, v11, v12, (const MethodInfo *)&v13);
  this->fields.ICON_MASK_COLOR = v13;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall MasterEquipIconComponent__GetEquipId(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v4; // x19
  __int64 v5; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40FB631 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB631 = 1;
  }
  usrEquipData = this->fields.usrEquipData;
  if ( !usrEquipData )
    sub_B170D4();
  v5 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v5;
  *(_QWORD *)&v7.fields.fakeValue = v4;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
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
    sub_B170D4();
  return usrEquipData->fields.id;
}


void __fastcall MasterEquipIconComponent__OnClickEquipIcon(MasterEquipIconComponent_o *this, const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipData; // x8
  MasterEquipIconComponent_CallbackFunc_o *callbackFunc; // x21
  int32_t moveEqIdx; // w20
  __int64 v6; // x22
  __int64 v7; // x23
  int32_t v8; // w0
  struct UserEquipEntity_o *v9; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_40FB630 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40FB630 = 1;
  }
  usrEquipData = this->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_10;
  callbackFunc = this->fields.callbackFunc;
  moveEqIdx = this->fields.moveEqIdx;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v10, 0LL);
  v9 = this->fields.usrEquipData;
  if ( !v9 || !callbackFunc )
LABEL_10:
    sub_B170D4();
  MasterEquipIconComponent_CallbackFunc__Invoke(callbackFunc, moveEqIdx, v8, v9->fields.id, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent__SetEnabled(
        MasterEquipIconComponent_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *Component_WebViewObject; // x0

  if ( (byte_40FB632 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Collider___, isEnabled);
    byte_40FB632 = 1;
  }
  Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !Component_WebViewObject )
    sub_B170D4();
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
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ItemIconComponent_o *equipIconComp; // x0
  UILabel_o *equipLevelLabel; // x20
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t lv; // [xsp+8h] [xbp-48h] BYREF
  int32_t genderImageId; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *detail; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *equipName; // [xsp+18h] [xbp-38h] BYREF
  int32_t maxLv; // [xsp+28h] [xbp-28h] BYREF
  int32_t condUsrLv; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_40FB62E & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, usrEquipData);
    sub_B16FFC(&LocalizationManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_8603, v13);
    byte_40FB62E = 1;
  }
  condUsrLv = 0;
  maxLv = 0;
  detail = 0LL;
  equipName = 0LL;
  genderImageId = 0;
  this->fields.usrEquipData = usrEquipData;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_8603, 0LL);
  lv = usrEquipData->fields.lv;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
  v24 = System_String__Format(v22, v23, 0LL);
  if ( !equipLevelLabel )
LABEL_10:
    sub_B170D4();
  UILabel__set_text(equipLevelLabel, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent__UpdateSelected(
        MasterEquipIconComponent_o *this,
        int32_t nowEquipId,
        const MethodInfo *method)
{
  struct UserEquipEntity_o *usrEquipData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w0
  struct ItemIconComponent_o *equipIconComp; // x8
  UIWidget_o *v10; // x0
  UnityEngine_Behaviour_o *equipSelectedSprite; // x0
  bool v12; // w1
  UIWidget_o *equipLevelLabel; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_40FB62F & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&nowEquipId);
    byte_40FB62F = 1;
  }
  usrEquipData = this->fields.usrEquipData;
  if ( !usrEquipData )
    goto LABEL_17;
  v7 = *(_QWORD *)&usrEquipData->fields.equipId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&usrEquipData->fields.equipId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = v7;
  *(_QWORD *)&v14.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
  equipIconComp = this->fields.equipIconComp;
  if ( v8 != nowEquipId )
  {
    if ( equipIconComp )
    {
      ItemIconComponent__SetColor(this->fields.equipIconComp, this->fields.ICON_MASK_COLOR, 0LL);
      equipLevelLabel = (UIWidget_o *)this->fields.equipLevelLabel;
      if ( equipLevelLabel )
      {
        UIWidget__set_color(equipLevelLabel, this->fields.ICON_MASK_COLOR, 0LL);
        equipSelectedSprite = (UnityEngine_Behaviour_o *)this->fields.equipSelectedSprite;
        if ( equipSelectedSprite )
        {
          v12 = 0;
          goto LABEL_16;
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !equipIconComp )
    goto LABEL_17;
  ItemIconComponent__SetColor(this->fields.equipIconComp, this->fields.ICON_NORMAL_COLOR, 0LL);
  v10 = (UIWidget_o *)this->fields.equipLevelLabel;
  if ( !v10 )
    goto LABEL_17;
  UIWidget__set_color(v10, this->fields.ICON_NORMAL_COLOR, 0LL);
  equipSelectedSprite = (UnityEngine_Behaviour_o *)this->fields.equipSelectedSprite;
  if ( !equipSelectedSprite )
    goto LABEL_17;
  v12 = 1;
LABEL_16:
  UnityEngine_Behaviour__set_enabled(equipSelectedSprite, v12, 0LL);
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

  if ( (byte_40FB62C & 1) == 0 )
  {
    sub_B16FFC(&MasterEquipIconComponent_CallbackFunc_TypeInfo, value);
    byte_40FB62C = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_B173C8(v8);
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

  if ( (byte_40FB62D & 1) == 0 )
  {
    sub_B16FFC(&MasterEquipIconComponent_CallbackFunc_TypeInfo, value);
    byte_40FB62D = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MasterEquipIconComponent_o *)sub_B173C8(v8);
  MasterEquipIconComponent__SetEquipInfo(v11, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterEquipIconComponent_CallbackFunc___ctor(
        MasterEquipIconComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int64_t v13; // [xsp+20h] [xbp-30h] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = idx;
  v14 = equipId;
  v13 = userEquipId;
  if ( (byte_40F694F & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&idx);
    sub_B16FFC(&long_TypeInfo, v10);
    byte_40F694F = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(long_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall MasterEquipIconComponent_CallbackFunc__EndInvoke(
        MasterEquipIconComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD); // x0
  MasterEquipIconComponent_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(_QWORD, _QWORD, int64_t, __int64); // x25
  char v26; // w25
  char v27; // w0
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  MasterEquipIconComponent_CallbackFunc_o *v33; // [xsp+8h] [xbp-58h] BYREF

  v33 = this;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v11 = &v33;
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
      v22 = v11[v12];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(_QWORD, _QWORD, int64_t, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&idx, *(_QWORD *)&equipId);
      if ( (sub_B1702C(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int)idx, (unsigned int)equipId, userEquipId, v24);
LABEL_37:
      if ( ++v12 == v10 )
        return;
    }
    if ( v23 && *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
      if ( (v26 & 1) != 0 )
      {
        if ( (v27 & 1) != 0 )
        {
          v28 = *v23;
          v29 = *(_QWORD *)(v24 + 24);
          v30 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AAFEF8(v23, v29, v30);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD))sub_B170AC(v19, v24);
        (*v21)(v23, (unsigned int)idx, (unsigned int)equipId, userEquipId, v21);
      }
      else
      {
        v13 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v15 = *v23;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v15 + 16LL * (int)(*v17 + v13) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AAFEF8(v23, class_0, v13);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD))v18)(
            v23,
            (unsigned int)idx,
            (unsigned int)equipId,
            userEquipId,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, int64_t, _QWORD))(*v23
                                                                             + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                             + 312))(
            v23,
            (unsigned int)idx,
            (unsigned int)equipId,
            userEquipId,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, int64_t, __int64))v25)(
      v23,
      (unsigned int)idx,
      (unsigned int)equipId,
      userEquipId,
      v24);
    goto LABEL_37;
  }
}