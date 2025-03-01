void __fastcall ServantBonusFilterEquipListViewItemDraw___ctor(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewItemDraw__IsSetFilter(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields.isButtonOn;
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__OnClickChangeDisplay(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BF8DEB & 1) == 0 )
  {
    sub_1C2E12C(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__, method);
    byte_4BF8DEB = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2E144(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2E110(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  this->fields.isButtonOn ^= 1u;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v5);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__ResetDisplayButton(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonOn = 0;
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, method);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButton(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *changeDisplayButton; // x0
  _BOOL4 isButtonOn; // w20
  UILabel_o *v12; // x20
  _BOOL4 v13; // w24
  System_String_o **v14; // x8
  UILabel_o *v15; // x19
  float *v16; // x11
  float *v17; // x8
  float *v18; // x9
  float *v19; // x10
  float *v20; // x11
  UILabel_o *buttonLabel; // x20
  _BOOL4 isButtonLabelOnOff; // w22
  System_String_o **v23; // x8
  float *v24; // x11
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BF8DED & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_12033/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_1C2E12C(&StringLiteral_3819/*"COMMON_ON"*/, v5);
    sub_1C2E12C(&StringLiteral_3818/*"COMMON_OFF"*/, v6);
    sub_1C2E12C(&StringLiteral_12034/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_1C2E12C(&StringLiteral_17793/*"btn_bg_off"*/, v8);
    sub_1C2E12C(&StringLiteral_17798/*"btn_bg_on"*/, v9);
    byte_4BF8DED = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17798/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = (System_String_o **)&StringLiteral_12033/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v23 = (System_String_o **)&StringLiteral_3819/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v23, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v15 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_4BF8543 )
      {
        sub_1C2E12C(&LocalizationManager_TypeInfo, method);
        byte_4BF8543 = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v15 )
      {
        v24 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
        v17 = v24 + 27;
        v18 = v24 + 26;
        v19 = v24 + 25;
        v20 = v24 + 24;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1C2E388(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17793/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  v13 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v13 )
    v14 = (System_String_o **)&StringLiteral_3818/*"COMMON_OFF"*/;
  else
    v14 = (System_String_o **)&StringLiteral_12034/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v14, 0LL);
  if ( !v12 )
    goto LABEL_34;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v15 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4BF8542 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    byte_4BF8542 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_34;
  v16 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
  v17 = v16 + 23;
  v18 = v16 + 22;
  v19 = v16 + 21;
  v20 = v16 + 20;
LABEL_33:
  v25.fields.a = *v17;
  v25.fields.b = *v18;
  v25.fields.g = *v19;
  v25.fields.r = *v20;
  UILabel__set_effectColor(v15, v25, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_1C2E388(0LL, isEnable);
  UnityEngine_Behaviour__set_enabled(changeDisplayButton, isEnable, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonOnOffLabel(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  this->fields.isButtonLabelOnOff = flag;
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetInitButtonSelect(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  System_String_o *saveKey; // x0
  const MethodInfo *v4; // x1

  saveKey = this->fields.saveKey;
  this->fields.isButtonOn = 0;
  if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0LL) )
  {
    if ( UnityEngine_PlayerPrefs__GetInt_70947428(this->fields.saveKey, 0LL) == this->fields.saveId )
      this->fields.isButtonOn = 1;
    else
      UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0LL);
  }
  ServantBonusFilterEquipListViewItemDraw__SetButton(this, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x5
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = idx;
  if ( (byte_4BF8DE7 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3345/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_4BF8DE7 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_63235584((System_String_o *)StringLiteral_3345/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_32395276(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_32395276(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        ServantEntity_o *equipEntity,
        EventUpValInfo_array *eventUpValInfos,
        SkillInfo_array *skillInfos,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x24
  __int64 v28; // x25
  int32_t v29; // w25
  EquipTargetInfo_o *v30; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v33; // w0
  System_Collections_Generic_List_object__o *v34; // x22
  signed int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v36; // x13
  il2cpp_array_size_t v37; // w27
  char v38; // w9
  Il2CppClass **v39; // x24
  Il2CppClass *v40; // x11
  char *v41; // x24
  Il2CppClass *v42; // t1
  Il2CppClass **v43; // x25
  Il2CppClass *v44; // x8
  char *v45; // x25
  Il2CppClass *v46; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v48; // x0
  SkillInfo_o *v49; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v51; // x25
  __int64 v52; // x23
  __int64 v53; // x0
  __int64 v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v63; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v63 = this;
  if ( (byte_4BF8DE8 & 1) == 0 )
  {
    sub_1C2E12C(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, equipEntity);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v10);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v11);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v12);
    sub_1C2E12C(&EquipTargetInfo_TypeInfo, v13);
    sub_1C2E12C(&EventDropItemUpValInfo_TypeInfo, v14);
    sub_1C2E12C(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_1C2E12C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v21);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_1C2E12C(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__, v24);
    sub_1C2E12C(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v25);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1C2E12C(&StringLiteral_152/*" + "*/, v26);
    byte_4BF8DE8 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( !equipEntity )
    goto LABEL_58;
  v28 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v66.fields.currentCryptoKey = v28;
  *(_QWORD *)&v66.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v66, 0LL);
  v30 = (EquipTargetInfo_o *)sub_1C2E378(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_40214572(v30, v29, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v63->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_39540440((ServantFaceIconComponent_o *)this, v30, 0LL, 0LL, 0LL);
  equipNameLabel = v63->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47794660(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(equipEntity->fields.id, 0LL);
  v63->fields.saveKey = saveKey;
  v63->fields.saveId = v33;
  sub_1C2E0D0(&v63->fields.saveKey);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v36 = v63;
  if ( max_length >= 1 )
  {
    v37 = 0;
    v38 = 1;
    while ( eventUpValInfos )
    {
      if ( v37 >= eventUpValInfos->max_length )
        goto LABEL_59;
      v39 = &eventUpValInfos->obj.klass + (int)v37;
      v42 = v39[4];
      v41 = (char *)(v39 + 4);
      v40 = v42;
      if ( !v42 )
        break;
      if ( LODWORD(v40->_1.namespaze) == v36->fields.saveId )
      {
        if ( (v38 & 1) != 0 )
        {
          if ( v37 >= max_length )
            goto LABEL_59;
          v43 = &skillInfos->obj.klass + (int)v37;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v36->fields.skillIcon;
          v46 = v43[4];
          v45 = (char *)(v43 + 4);
          v44 = v46;
          if ( !v46 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v44->_1.name, 0LL);
          skillTextLabel = v63->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v37 >= skillInfos->max_length )
            goto LABEL_59;
          if ( !*(_QWORD *)v45 )
            break;
          v48 = System_String__Concat_63235584(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v45 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v36->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v37 >= max_length )
LABEL_59:
            sub_1C2E390(this, equipEntity);
          v49 = skillInfos->m_Items[v37];
          if ( !v49 )
            break;
          v48 = System_String__Concat_63246844(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_152/*" + "*/,
                  v49->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v48, 0LL);
        if ( v37 >= eventUpValInfos->max_length )
          goto LABEL_59;
        if ( !*(_QWORD *)v41 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v41 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v64,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v65 = v64;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v65,
                  (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v65.fields._current;
          v51 = (EventDropItemUpValInfo_o *)sub_1C2E378(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v51, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v52 = sub_1C2E378(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v52, v51, 0LL);
          if ( !current )
            sub_1C2E388(v53, v54);
          if ( !v52 )
            sub_1C2E388(v53, v54);
          *(_QWORD *)(v52 + 92) = current[2].monitor;
          if ( !v34 )
            sub_1C2E388(v53, v54);
          items = v34->fields._items;
          v56 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v34->fields._version;
          if ( !items )
            sub_1C2E388(v53, v54);
          size = v34->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              (Il2CppObject *)v52,
              *(const MethodInfo_366B8AC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &items->obj.klass + size;
            v34->fields._size = size + 1;
            v58[4] = (Il2CppClass *)v52;
            sub_1C2E0D0(v58 + 4);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v65,
          (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v36 = v63;
        v38 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v37 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1C2E388(this, equipEntity);
  }
LABEL_48:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[1].fields.skillTextLabel->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[1].fields.saveGroupEquipKeys) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.skillTextLabel->klass;
    monitor = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1C2E0D0(&static_fields->__9__13_0);
  }
  if ( !v34 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_57070448(
    v34,
    monitor,
    (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v63->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.skillIcon,
    (int32_t)this[3].fields.skillTextLabel,
    0,
    0LL);
  eventUpValIcon = v63->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v34,
                                                        (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_32396904(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        int32_t equipIdx,
        const MethodInfo *method)
{
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  const MethodInfo *v12; // x5
  int32_t v13; // [xsp+Ch] [xbp-34h] BYREF

  v13 = idx;
  if ( (byte_4BF8DE9 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3347/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_4BF8DE9 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_63235584((System_String_o *)StringLiteral_3347/*"BonusFilterGroupId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_32397056(this, eventIdList, filterGroupId, v11, equipIdx, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_32397056(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        int32_t equipIdx,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 Instance; // x0
  System_Int32_array *v49; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v51; // x21
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v53; // x20
  System_Collections_Generic_Dictionary_object__int__o *v54; // x28
  EventBonusFilterGroupMemberEntity_array *EntitiesByGroupId; // x26
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  ServantBonusFilterEquipListViewItemDraw___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x27
  System_Func_object__bool__o *_9__15_1; // x28
  Il2CppObject *v60; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_List_object__o *v63; // x27
  System_Comparison_T__o *v64; // x28
  Il2CppObject *v65; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v66; // x0
  unsigned __int64 v67; // x19
  Il2CppObject *v68; // x29
  Il2CppObject *v69; // x24
  System_Func_object__bool__o *v70; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x29
  System_String_o *v72; // x0
  EventUpValSetupInfo_o *v73; // x24
  int *monitor; // x8
  unsigned __int64 v75; // x27
  EventUpValInfo_o *v76; // x23
  _DWORD *v77; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v79; // x26
  __int64 v80; // x23
  __int64 v81; // x0
  __int64 v82; // x1
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  System_Comparison_T__o *v87; // x21
  Il2CppObject *v88; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v89; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  System_String_o *str0; // [xsp+8h] [xbp-C8h]
  ServantBonusFilterEquipListViewItemDraw_o *v92; // [xsp+10h] [xbp-C0h]
  SkillLvMaster_o *v93; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+40h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+60h] [xbp-70h] BYREF
  int32_t v97; // [xsp+6Ch] [xbp-64h] BYREF

  v97 = equipIdx;
  if ( (byte_4BF8DEA & 1) == 0 )
  {
    sub_1C2E12C(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_1C2E12C(&Method_BasicHelper_Any_EventBonusFilterEntity___, v10);
    sub_1C2E12C(&System_Comparison_EventBonusFilterEntity__TypeInfo, v11);
    sub_1C2E12C(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v12);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v13);
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v14);
    sub_1C2E12C(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v16);
    sub_1C2E12C(&DataManager_TypeInfo, v17);
    sub_1C2E12C(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v18);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v19);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v20);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v21);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___, v22);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___, v23);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v24);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v25);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v26);
    sub_1C2E12C(&EventDropItemUpValInfo_TypeInfo, v27);
    sub_1C2E12C(&EventMargeItemUpValInfo_TypeInfo, v28);
    sub_1C2E12C(&EventUpValInfo_TypeInfo, v29);
    sub_1C2E12C(&EventUpValSetupInfo_TypeInfo, v30);
    sub_1C2E12C(&System_Func_EventBonusFilterEntity__bool__TypeInfo, v31);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v32);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v33);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v34);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v35);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v36);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v37);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v38);
    sub_1C2E12C(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v39);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40);
    sub_1C2E12C(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__, v41);
    sub_1C2E12C(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__, v42);
    sub_1C2E12C(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__, v43);
    sub_1C2E12C(&Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__, v44);
    sub_1C2E12C(&ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo, v45);
    sub_1C2E12C(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v46);
    sub_1C2E12C(&StringLiteral_3345/*"BonusFilterEquipId"*/, v47);
    byte_4BF8DEA = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v95, 0, sizeof(v95));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( Entity )
  {
    v51 = Entity;
    this->fields.saveKey = saveKey;
    this->fields.saveId = filterGroupId;
    sub_1C2E0D0(&this->fields.saveKey);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    v93 = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v53 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v53,
      (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v54 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__int__TypeInfo);
    System_Collections_Generic_Dictionary_object__int____ctor(
      v54,
      (const MethodInfo_332C2D8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    v92 = this;
    this->fields.saveGroupEquipKeys = (struct System_Collections_Generic_Dictionary_string__int__o *)v54;
    Instance = sub_1C2E0D0(&this->fields.saveGroupEquipKeys);
    if ( !MasterData_object )
      goto LABEL_85;
    EntitiesByGroupId = EventBonusFilterGroupMemberMaster__GetEntitiesByGroupId(
                          (EventBonusFilterGroupMemberMaster_o *)MasterData_object,
                          filterGroupId,
                          0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntitiesByGroupId, 0LL) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
      v49 = eventIdList;
      if ( !Instance )
        goto LABEL_85;
      FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0, 0LL);
      v57 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      v58 = (System_Collections_Generic_IEnumerable_TSource__o *)FilterList;
      if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
        v57 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      _9__15_1 = (System_Func_object__bool__o *)v57->static_fields->__9__15_1;
      if ( !_9__15_1 )
      {
        if ( !v57->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v57);
          v57 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v60 = (Il2CppObject *)v57->static_fields->__9;
        _9__15_1 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventBonusFilterEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__15_1,
          v60,
          Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__,
          0LL);
        static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__15_1 = (struct System_Func_EventBonusFilterEntity__bool__o *)_9__15_1;
        sub_1C2E0D0(&static_fields->__9__15_1);
      }
      v62 = System_Linq_Enumerable__Where_object_(
              v58,
              (System_Func_TSource__bool__o *)_9__15_1,
              (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
      v63 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v62,
                                                           (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v63, 0LL) )
      {
        Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
          Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v64 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 24LL);
        if ( !v64 )
        {
          if ( !*(_DWORD *)(Instance + 224) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
          }
          v65 = **(Il2CppObject ***)(Instance + 184);
          v64 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_EventBonusFilterEntity__TypeInfo);
          System_Comparison_object____ctor(
            v64,
            v65,
            Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__,
            0LL);
          v66 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
          v66->__9__15_2 = (struct System_Comparison_EventBonusFilterEntity__o *)v64;
          Instance = sub_1C2E0D0(&v66->__9__15_2);
        }
        if ( !v63 )
          goto LABEL_85;
        System_Collections_Generic_List_object___Sort_57070448(
          v63,
          v64,
          (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
        Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        str0 = (System_String_o *)StringLiteral_3345/*"BonusFilterEquipId"*/;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        if ( !saveKey )
          goto LABEL_85;
        Instance = System_String__Contains(
                     saveKey,
                     AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
                     0LL);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
            Instance = (__int64)AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          }
          str0 = **(System_String_o ***)(Instance + 184);
        }
        if ( !EntitiesByGroupId )
          goto LABEL_85;
        if ( (int)EntitiesByGroupId->max_length >= 1 )
        {
          v67 = 0LL;
          while ( 1 )
          {
            v68 = (Il2CppObject *)sub_1C2E378(ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
            System_Object___ctor(v68, 0LL);
            if ( v67 >= EntitiesByGroupId->max_length )
LABEL_86:
              sub_1C2E390(Instance, v49);
            if ( !v68 )
              break;
            v68[1].klass = (Il2CppClass *)EntitiesByGroupId->m_Items[v67];
            v69 = v68 + 1;
            sub_1C2E0D0(&v68[1]);
            v70 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_EventBonusFilterEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v70,
              v68,
              Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__,
              0LL);
            if ( BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v63,
                   (System_Func_T__bool__o *)v70,
                   (const MethodInfo_2FBC23C *)Method_BasicHelper_Any_EventBonusFilterEntity___) )
            {
              saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
              v72 = System_Int32__ToString((int32_t)&v97, 0LL);
              Instance = (__int64)System_String__Concat_63235584(str0, v72, 0LL);
              if ( !v69->klass || !saveGroupEquipKeys )
                break;
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
                (Il2CppObject *)Instance,
                HIDWORD(v69->klass->_1.name),
                (const MethodInfo_332CC8C *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              ++v97;
            }
            if ( (__int64)++v67 >= (int)EntitiesByGroupId->max_length )
              goto LABEL_44;
          }
LABEL_85:
          sub_1C2E388(Instance, v49);
        }
      }
    }
LABEL_44:
    Instance = (__int64)this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_85;
    ServantFaceIconComponent__SetEventBonus(
      (ServantFaceIconComponent_o *)Instance,
      (int32_t)v51[2].klass,
      HIDWORD(v51[2].klass),
      0LL);
    Instance = (__int64)this->fields.equipNameLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v51[1].monitor, 0LL);
    Instance = (__int64)this->fields.skillIcon;
    if ( !Instance )
      goto LABEL_85;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v51[3].monitor, 0LL);
    Instance = (__int64)this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v51[3].klass, 0LL);
    Instance = (__int64)this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    WrapControlText__textAdjust(
      (UILabel_o *)Instance,
      *(System_String_o **)(Instance + 416),
      *(_DWORD *)(Instance + 424),
      0,
      0LL);
    v73 = (EventUpValSetupInfo_o *)sub_1C2E378(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_40241872(v73, eventIdList, 0, 0, 0, 0LL);
    monitor = (int *)v51[2].monitor;
    if ( !monitor )
      goto LABEL_85;
    v75 = 0LL;
    while ( (__int64)v75 < monitor[6] )
    {
      v76 = (EventUpValInfo_o *)sub_1C2E378(EventUpValInfo_TypeInfo);
      EventUpValInfo___ctor(v76, v73, 0, 1, 1, 0, 0LL);
      eventUpVallInfo = v76;
      v77 = v51[2].monitor;
      if ( !v77 )
        goto LABEL_85;
      if ( v75 >= (unsigned int)v77[6] )
        goto LABEL_86;
      Instance = (__int64)v93;
      if ( v93 )
      {
        Instance = (__int64)SkillLvMaster__GetEntity(v93, v77[v75 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = SkillLvEntity__getEventUpVal_41306680(
                       (SkillLvEntity_o *)Instance,
                       &eventUpVallInfo,
                       1,
                       1,
                       0,
                       1,
                       0LL,
                       0LL);
          if ( eventUpVallInfo )
          {
            Instance = (__int64)eventUpVallInfo->fields.dropList;
            if ( Instance )
            {
              if ( *(_DWORD *)(Instance + 24) )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v94,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v95 = v94;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v95,
                          (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v95.fields._current;
                  v79 = (EventDropItemUpValInfo_o *)sub_1C2E378(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v79, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v80 = sub_1C2E378(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v80, v79, 0LL);
                  if ( !current )
                    sub_1C2E388(v81, v82);
                  if ( !v80 )
                    sub_1C2E388(v81, v82);
                  *(_QWORD *)(v80 + 92) = current[2].monitor;
                  if ( !v53 )
                    sub_1C2E388(v81, v82);
                  items = v53->fields._items;
                  v84 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v53->fields._version;
                  if ( !items )
                    sub_1C2E388(v81, v82);
                  size = v53->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v53,
                      (Il2CppObject *)v80,
                      *(const MethodInfo_366B8AC **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v86 = &items->obj.klass + size;
                    v53->fields._size = size + 1;
                    v86[4] = (Il2CppClass *)v80;
                    sub_1C2E0D0(v86 + 4);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v95,
                  (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v51[2].monitor;
              ++v75;
              if ( monitor )
                continue;
            }
          }
        }
      }
      goto LABEL_85;
    }
    Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
      Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v87 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 32LL);
    if ( !v87 )
    {
      if ( !*(_DWORD *)(Instance + 224) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      v88 = **(Il2CppObject ***)(Instance + 184);
      v87 = (System_Comparison_T__o *)sub_1C2E378(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
      System_Comparison_object____ctor(
        v87,
        v88,
        Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__,
        0LL);
      v89 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
      v89->__9__15_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v87;
      Instance = sub_1C2E0D0(&v89->__9__15_0);
    }
    if ( !v53 )
      goto LABEL_85;
    System_Collections_Generic_List_object___Sort_57070448(
      v53,
      v87,
      (const MethodInfo_366D370 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    eventUpValIcon = v92->fields.eventUpValIcon;
    Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                          v53,
                          (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    if ( !eventUpValIcon )
      goto LABEL_85;
    EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)Instance, -1, -1, -1, 0LL);
  }
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *saveKey; // x0
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x0
  Il2CppObject *key; // x20
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v12; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4BF8DEC & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v5);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v7);
    byte_4BF8DEC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  saveKey = this->fields.saveKey;
  if ( this->fields.isButtonOn )
  {
    UnityEngine_PlayerPrefs__SetInt(saveKey, this->fields.saveId, 0LL);
  }
  else if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0LL) )
  {
    UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.saveGroupEquipKeys, 0LL) )
  {
    saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
    if ( !saveGroupEquipKeys )
      sub_1C2E388(0LL, v9);
    System_Collections_Generic_Dictionary_object__int___GetEnumerator(
      &v12,
      (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
      (const MethodInfo_332D07C *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
              &v12,
              (const MethodInfo_342F848 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
    {
      key = v12.fields._current.fields.key;
      if ( this->fields.isButtonOn )
      {
        UnityEngine_PlayerPrefs__SetInt(
          (System_String_o *)v12.fields._current.fields.key,
          (int32_t)v12.fields._current.fields.value,
          0LL);
      }
      else if ( UnityEngine_PlayerPrefs__HasKey((System_String_o *)v12.fields._current.fields.key, 0LL) )
      {
        UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)key, 0LL);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__int___Dispose(
      &v12,
      (const MethodInfo_342F96C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  }
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4BF8DEE & 1) == 0 )
  {
    sub_1C2E12C(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_4BF8DEE = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v2;
  sub_1C2E0D0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___ctor(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__13_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C2E388(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C2E388(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_1(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C2E388(this, 0LL);
  return entity->fields.type == 1;
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_2(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C2E388(this, a);
  return b->fields.priority - a->fields.priority;
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0___ctor(
        ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0___SetItem_b__3(
        ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_o *this,
        EventBonusFilterEntity_o *filterEntity,
        const MethodInfo *method)
{
  struct EventBonusFilterGroupMemberEntity_o *groupMemberEquip; // x8

  groupMemberEquip = this->fields.groupMemberEquip;
  if ( !groupMemberEquip || !filterEntity )
    sub_1C2E388(this, filterEntity);
  return groupMemberEquip->fields.svtId == filterEntity->fields.value
      && !EventBonusFilterEntity__IsOpen(filterEntity, 0LL);
}