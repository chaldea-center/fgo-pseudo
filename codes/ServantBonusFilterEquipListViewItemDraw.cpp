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

  if ( (byte_49F7725 & 1) == 0 )
  {
    sub_1B640C8(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__, method);
    byte_49F7725 = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B640E0();
  v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  __int64 v15; // x1
  UILabel_o *v16; // x19
  float *v17; // x11
  float *v18; // x8
  float *v19; // x9
  float *v20; // x10
  float *v21; // x11
  UILabel_o *buttonLabel; // x20
  _BOOL4 isButtonLabelOnOff; // w22
  System_String_o **v24; // x8
  __int64 v25; // x1
  float *v26; // x11
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F7726 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B640C8(&LocalizationManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_11751/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_1B640C8(&StringLiteral_3752/*"COMMON_ON"*/, v5);
    sub_1B640C8(&StringLiteral_3751/*"COMMON_OFF"*/, v6);
    sub_1B640C8(&StringLiteral_11752/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_1B640C8(&StringLiteral_17419/*"btn_bg_off"*/, v8);
    sub_1B640C8(&StringLiteral_17424/*"btn_bg_on"*/, v9);
    byte_49F7726 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17424/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v24 = (System_String_o **)&StringLiteral_11751/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v24 = (System_String_o **)&StringLiteral_3752/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v24, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v16 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_49F779C )
      {
        sub_1B640C8(&LocalizationManager_TypeInfo, v25);
        byte_49F779C = 1;
      }
      changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
      }
      if ( v16 )
      {
        v26 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
        v18 = v26 + 27;
        v19 = v26 + 26;
        v20 = v26 + 25;
        v21 = v26 + 24;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1B64324(changeDisplayButton);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17419/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  v13 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v13 )
    v14 = (System_String_o **)&StringLiteral_3751/*"COMMON_OFF"*/;
  else
    v14 = (System_String_o **)&StringLiteral_11752/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v14, 0LL);
  if ( !v12 )
    goto LABEL_34;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v16 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    byte_49F779B = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager_TypeInfo;
  }
  if ( !v16 )
    goto LABEL_34;
  v17 = *(float **)&changeDisplayButton[7].fields.m_CachedPtr;
  v18 = v17 + 23;
  v19 = v17 + 22;
  v20 = v17 + 21;
  v21 = v17 + 20;
LABEL_33:
  v27.fields.a = *v18;
  v27.fields.b = *v19;
  v27.fields.g = *v20;
  v27.fields.r = *v21;
  UILabel__set_effectColor(v16, v27, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetButtonEnable(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *changeDisplayButton; // x0

  changeDisplayButton = (UnityEngine_Behaviour_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    sub_1B64324(0LL);
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
    if ( UnityEngine_PlayerPrefs__GetInt_69085444(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_49F7721 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3288/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_49F7721 = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_61375396((System_String_o *)StringLiteral_3288/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_30504428(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_30504428(
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
  __int64 v30; // x1
  __int64 v31; // x2
  EquipTargetInfo_o *v32; // x24
  UILabel_o *equipNameLabel; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x25
  int32_t v35; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_List_object__o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  signed int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v43; // x13
  il2cpp_array_size_t v44; // w27
  char v45; // w9
  Il2CppClass **v46; // x24
  Il2CppClass *v47; // x11
  char *v48; // x24
  Il2CppClass *v49; // t1
  Il2CppClass **v50; // x25
  Il2CppClass *v51; // x8
  char *v52; // x25
  Il2CppClass *v53; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v55; // x0
  SkillInfo_o *v56; // x8
  __int64 v57; // x1
  __int64 v58; // x2
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v60; // x25
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x23
  __int64 v64; // x0
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v73; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v73 = this;
  if ( (byte_49F7722 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, equipEntity);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v12);
    sub_1B640C8(&EquipTargetInfo_TypeInfo, v13);
    sub_1B640C8(&EventDropItemUpValInfo_TypeInfo, v14);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v21);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_1B640C8(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v24);
    sub_1B640C8(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v25);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1B640C8(&StringLiteral_157/*" + "*/, v26);
    byte_49F7722 = 1;
  }
  memset(&v75, 0, sizeof(v75));
  if ( !equipEntity )
    goto LABEL_58;
  v28 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v76.fields.currentCryptoKey = v28;
  *(_QWORD *)&v76.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v76, 0LL);
  v32 = (EquipTargetInfo_o *)sub_1B64314(EquipTargetInfo_TypeInfo, v30, v31);
  EquipTargetInfo___ctor_38565608(v32, v29, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v73->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_37910572((ServantFaceIconComponent_o *)this, v32, 0LL, 0LL, 0LL);
  equipNameLabel = v73->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46207452(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(equipEntity->fields.id, 0LL);
  v73->fields.saveKey = saveKey;
  v73->fields.saveId = v35;
  sub_1B6406C(&v73->fields.saveKey);
  v38 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v43 = v73;
  if ( max_length >= 1 )
  {
    v44 = 0;
    v45 = 1;
    while ( eventUpValInfos )
    {
      if ( v44 >= eventUpValInfos->max_length )
        goto LABEL_59;
      v46 = &eventUpValInfos->obj.klass + (int)v44;
      v49 = v46[4];
      v48 = (char *)(v46 + 4);
      v47 = v49;
      if ( !v49 )
        break;
      if ( LODWORD(v47->_1.namespaze) == v43->fields.saveId )
      {
        if ( (v45 & 1) != 0 )
        {
          if ( v44 >= max_length )
            goto LABEL_59;
          v50 = &skillInfos->obj.klass + (int)v44;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v43->fields.skillIcon;
          v53 = v50[4];
          v52 = (char *)(v50 + 4);
          v51 = v53;
          if ( !v53 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v51->_1.name, 0LL);
          skillTextLabel = v73->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v44 >= skillInfos->max_length )
            goto LABEL_59;
          if ( !*(_QWORD *)v52 )
            break;
          v55 = System_String__Concat_61375396(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v52 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v43->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v44 >= max_length )
LABEL_59:
            sub_1B6432C(this, v39, v40, v41);
          v56 = skillInfos->m_Items[v44];
          if ( !v56 )
            break;
          v55 = System_String__Concat_61386656(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_157/*" + "*/,
                  v56->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v55, 0LL);
        if ( v44 >= eventUpValInfos->max_length )
          goto LABEL_59;
        if ( !*(_QWORD *)v48 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v48 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v74,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v75 = v74;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v75,
                  (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v75.fields._current;
          v60 = (EventDropItemUpValInfo_o *)sub_1B64314(EventDropItemUpValInfo_TypeInfo, v57, v58);
          EventDropItemUpValInfo___ctor(v60, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v63 = sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v61, v62);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v63, v60, 0LL);
          if ( !current )
            sub_1B64324(v64);
          if ( !v63 )
            sub_1B64324(v64);
          *(_QWORD *)(v63 + 92) = current[2].monitor;
          if ( !v38 )
            sub_1B64324(v64);
          items = v38->fields._items;
          v66 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v38->fields._version;
          if ( !items )
            sub_1B64324(v64);
          size = v38->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v63,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
          }
          else
          {
            v68 = &items->obj.klass + size;
            v38->fields._size = size + 1;
            v68[4] = (Il2CppClass *)v63;
            sub_1B6406C(v68 + 4);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v75,
          (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v43 = v73;
        v45 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v44 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1B64324(this);
  }
LABEL_48:
  this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  monitor = (System_Comparison_T__o *)this[1].fields.changeDisplayButton->monitor;
  if ( !monitor )
  {
    if ( !LODWORD(this[2].klass) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantBonusFilterEquipListViewItemDraw_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.changeDisplayButton->klass;
    monitor = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMargeItemUpValInfo__TypeInfo, v39, v40);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1B6406C(&static_fields->__9__12_0);
  }
  if ( !v38 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_55243320(
    v38,
    monitor,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v73->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.buttonLabel,
    *(_DWORD *)&this[3].fields.isButtonOn,
    0,
    0,
    0LL);
  eventUpValIcon = v73->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v38,
                                                        (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_30506056(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        int32_t idx,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        const MethodInfo *method)
{
  System_String_o *v8; // x0
  System_String_o *v9; // x0
  const MethodInfo *v10; // x4
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  v11 = idx;
  if ( (byte_49F7723 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3290/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_49F7723 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_61375396((System_String_o *)StringLiteral_3290/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_30506200(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_30506200(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        System_Int32_array *eventIdList,
        int32_t filterGroupId,
        System_String_o *saveKey,
        const MethodInfo *method)
{
  __int64 v9; // x1
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
  __int64 Instance; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *v32; // x21
  Il2CppObject *MasterData_object; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  System_Collections_Generic_List_object__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  int *monitor; // x8
  unsigned __int64 v42; // x28
  EventUpValInfo_o *v43; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  _DWORD *v47; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v51; // x26
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x24
  __int64 v55; // x0
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  Il2CppClass **v59; // x0
  System_Comparison_T__o *v60; // x21
  Il2CppObject *v61; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+30h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_49F7724 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, eventIdList);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B640C8(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v15);
    sub_1B640C8(&EventDropItemUpValInfo_TypeInfo, v16);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v17);
    sub_1B640C8(&EventUpValInfo_TypeInfo, v18);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v25);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B640C8(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v28);
    sub_1B640C8(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v29);
    byte_49F7724 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v66, 0, sizeof(v66));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_49;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v32 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_1B6406C(&this->fields.saveKey);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                       v34,
                                                       v35);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v32[2].klass,
    HIDWORD(v32[2].klass),
    0LL);
  Instance = (__int64)this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v32[1].monitor, 0LL);
  Instance = (__int64)this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_49;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v32[3].monitor, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v32[3].klass, 0LL);
  Instance = (__int64)this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *(System_String_o **)(Instance + 416),
    *(_DWORD *)(Instance + 424),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, v37, v38);
  EventUpValSetupInfo___ctor_38592760(setupInfo, eventIdList, 0, 0, 0, 0LL);
  monitor = (int *)v32[2].monitor;
  if ( !monitor )
    goto LABEL_49;
  v42 = 0LL;
  while ( (__int64)v42 < monitor[6] )
  {
    v43 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v39, v40);
    EventUpValInfo___ctor(v43, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v43;
    v47 = v32[2].monitor;
    if ( v47 )
    {
      if ( v42 >= (unsigned int)v47[6] )
        sub_1B6432C(Instance, v44, v45, v46);
      if ( MasterData_object )
      {
        Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v47[v42 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = SkillLvEntity__getEventUpVal_39537972(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)&v65,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v66 = v65;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v66,
                          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v66.fields._current;
                  v51 = (EventDropItemUpValInfo_o *)sub_1B64314(EventDropItemUpValInfo_TypeInfo, v48, v49);
                  EventDropItemUpValInfo___ctor(v51, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v54 = sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v52, v53);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v54, v51, 0LL);
                  if ( !current )
                    sub_1B64324(v55);
                  if ( !v54 )
                    sub_1B64324(v55);
                  *(_QWORD *)(v54 + 92) = current[2].monitor;
                  if ( !v36 )
                    sub_1B64324(v55);
                  items = v36->fields._items;
                  v57 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v36->fields._version;
                  if ( !items )
                    sub_1B64324(v55);
                  size = v36->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v36,
                      (Il2CppObject *)v54,
                      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v59 = &items->obj.klass + size;
                    v36->fields._size = size + 1;
                    v59[4] = (Il2CppClass *)v54;
                    sub_1B6406C(v59 + 4);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v66,
                  (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v32[2].monitor;
              ++v42;
              if ( monitor )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  v60 = *(System_Comparison_T__o **)(*(_QWORD *)(Instance + 184) + 16LL);
  if ( !v60 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v61 = **(Il2CppObject ***)(Instance + 184);
    v60 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventMargeItemUpValInfo__TypeInfo, v39, v40);
    System_Comparison_object____ctor(
      v60,
      v61,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v60;
    Instance = sub_1B6406C(&static_fields->__9__14_0);
  }
  if ( !v36
    || (System_Collections_Generic_List_object___Sort_55243320(
          v36,
          v60,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = this->fields.eventUpValIcon,
        Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                              v36,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_49:
    sub_1B64324(Instance);
  }
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)Instance, -1, -1, -1, 0LL);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__UpdateFilterSave(
        ServantBonusFilterEquipListViewItemDraw_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w8
  System_String_o *saveKey; // x0

  isButtonOn = this->fields.isButtonOn;
  saveKey = this->fields.saveKey;
  if ( isButtonOn )
  {
    UnityEngine_PlayerPrefs__SetInt(saveKey, this->fields.saveId, 0LL);
  }
  else if ( UnityEngine_PlayerPrefs__HasKey(saveKey, 0LL) )
  {
    UnityEngine_PlayerPrefs__DeleteKey(this->fields.saveKey, 0LL);
  }
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7727 & 1) == 0 )
  {
    sub_1B640C8(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_49F7727 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v3;
  sub_1B6406C(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___ctor(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__12_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B64324(this);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B64324(this);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}