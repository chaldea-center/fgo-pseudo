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

  if ( (byte_48E6352 & 1) == 0 )
  {
    sub_1B00CCC(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__, method);
    byte_48E6352 = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B00CE4(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
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

  if ( (byte_48E6353 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_11616/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_1B00CCC(&StringLiteral_3733/*"COMMON_ON"*/, v5);
    sub_1B00CCC(&StringLiteral_3732/*"COMMON_OFF"*/, v6);
    sub_1B00CCC(&StringLiteral_11617/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_1B00CCC(&StringLiteral_17248/*"btn_bg_off"*/, v8);
    sub_1B00CCC(&StringLiteral_17253/*"btn_bg_on"*/, v9);
    byte_48E6353 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17253/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = (System_String_o **)&StringLiteral_11616/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v23 = (System_String_o **)&StringLiteral_3733/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v23, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v15 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_48DE047 )
      {
        sub_1B00CCC(&LocalizationManager_TypeInfo, method);
        byte_48DE047 = 1;
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
    sub_1B00F28(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17248/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  v13 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v13 )
    v14 = (System_String_o **)&StringLiteral_3732/*"COMMON_OFF"*/;
  else
    v14 = (System_String_o **)&StringLiteral_11617/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v14, 0LL);
  if ( !v12 )
    goto LABEL_34;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v15 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_48DE046 )
  {
    sub_1B00CCC(&LocalizationManager_TypeInfo, method);
    byte_48DE046 = 1;
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
    sub_1B00F28(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_68035364(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_48E634E & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3270/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_48E634E = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_60325748((System_String_o *)StringLiteral_3270/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_44146628(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_44146628(
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
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_object__o *v36; // x22
  signed int max_length; // w8
  ServantBonusFilterEquipListViewItemDraw_o *v38; // x13
  il2cpp_array_size_t v39; // w27
  char v40; // w9
  Il2CppClass **v41; // x24
  Il2CppClass *v42; // x11
  char *v43; // x24
  Il2CppClass *v44; // t1
  Il2CppClass **v45; // x25
  Il2CppClass *v46; // x8
  char *v47; // x25
  Il2CppClass *v48; // t1
  UILabel_o *skillTextLabel; // x23
  System_String_o *v50; // x0
  SkillInfo_o *v51; // x8
  Il2CppObject *current; // x24
  EventDropItemUpValInfo_o *v53; // x25
  __int64 v54; // x23
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v69; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v69 = this;
  if ( (byte_48E634F & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, equipEntity);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v12);
    sub_1B00CCC(&EquipTargetInfo_TypeInfo, v13);
    sub_1B00CCC(&EventDropItemUpValInfo_TypeInfo, v14);
    sub_1B00CCC(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v21);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B00CCC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_1B00CCC(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__, v24);
    sub_1B00CCC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v25);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_155/*" + "*/, v26);
    byte_48E634F = 1;
  }
  memset(&v71, 0, sizeof(v71));
  if ( !equipEntity )
    goto LABEL_58;
  v28 = *(_QWORD *)&equipEntity->fields.id.fields.currentCryptoKey;
  v27 = *(_QWORD *)&equipEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v72.fields.currentCryptoKey = v28;
  *(_QWORD *)&v72.fields.fakeValue = v27;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(v72, 0LL);
  v30 = (EquipTargetInfo_o *)sub_1B00F18(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_37657184(v30, v29, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v69->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_37013412((ServantFaceIconComponent_o *)this, v30, 0LL, 0LL, 0LL);
  equipNameLabel = v69->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_45348888(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45313044(equipEntity->fields.id, 0LL);
  v69->fields.saveKey = saveKey;
  v69->fields.saveId = v33;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v69->fields.saveKey, (int32_t)saveKey, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  if ( !skillInfos )
    goto LABEL_58;
  max_length = skillInfos->max_length;
  v38 = v69;
  if ( max_length >= 1 )
  {
    v39 = 0;
    v40 = 1;
    while ( eventUpValInfos )
    {
      if ( v39 >= eventUpValInfos->max_length )
        goto LABEL_59;
      v41 = &eventUpValInfos->obj.klass + (int)v39;
      v44 = v41[4];
      v43 = (char *)(v41 + 4);
      v42 = v44;
      if ( !v44 )
        break;
      if ( LODWORD(v42->_1.namespaze) == v38->fields.saveId )
      {
        if ( (v40 & 1) != 0 )
        {
          if ( v39 >= max_length )
            goto LABEL_59;
          v45 = &skillInfos->obj.klass + (int)v39;
          this = (ServantBonusFilterEquipListViewItemDraw_o *)v38->fields.skillIcon;
          v48 = v45[4];
          v47 = (char *)(v45 + 4);
          v46 = v48;
          if ( !v48 )
            break;
          if ( !this )
            break;
          SkillIconComponent__Set((SkillIconComponent_o *)this, (int32_t)v46->_1.name, 0LL);
          skillTextLabel = v69->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v39 >= skillInfos->max_length )
            goto LABEL_59;
          if ( !*(_QWORD *)v47 )
            break;
          v50 = System_String__Concat_60325748(
                  skillTextLabel->fields.mText,
                  *(System_String_o **)(*(_QWORD *)v47 + 32LL),
                  0LL);
        }
        else
        {
          skillTextLabel = v38->fields.skillTextLabel;
          if ( !skillTextLabel )
            break;
          if ( v39 >= max_length )
LABEL_59:
            sub_1B00F30(this, equipEntity);
          v51 = skillInfos->m_Items[v39];
          if ( !v51 )
            break;
          v50 = System_String__Concat_60337008(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_155/*" + "*/,
                  v51->fields.title,
                  0LL);
        }
        UILabel__set_text(skillTextLabel, v50, 0LL);
        if ( v39 >= eventUpValInfos->max_length )
          goto LABEL_59;
        if ( !*(_QWORD *)v43 )
          break;
        this = *(ServantBonusFilterEquipListViewItemDraw_o **)(*(_QWORD *)v43 + 48LL);
        if ( !this )
          break;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v70,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v71 = v70;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v71,
                  (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v71.fields._current;
          v53 = (EventDropItemUpValInfo_o *)sub_1B00F18(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v53, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v54 = sub_1B00F18(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v54, v53, 0LL);
          if ( !current )
            sub_1B00F28(v55, v56);
          if ( !v54 )
            sub_1B00F28(v55, v56);
          *(_QWORD *)(v54 + 92) = current[2].monitor;
          if ( !v36 )
            sub_1B00F28(v55, v56);
          items = v36->fields._items;
          v60 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v36->fields._version;
          if ( !items )
            sub_1B00F28(v55, v56);
          size = v36->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v36,
              (Il2CppObject *)v54,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &items->obj.klass + size;
            v36->fields._size = size + 1;
            v62[4] = (Il2CppClass *)v54;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v62 + 4), v54, v57, v58);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v71,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v38 = v69;
        v40 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1B00F28(this, equipEntity);
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
    monitor = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__12_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)monitor, v66, v67);
  }
  if ( !v36 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_54277268(
    v36,
    monitor,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v69->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.buttonLabel,
    *(_DWORD *)&this[3].fields.isButtonOn,
    0,
    0,
    0LL);
  eventUpValIcon = v69->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v36,
                                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_44148256(
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
  if ( (byte_48E6350 & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_3272/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_48E6350 = 1;
  }
  v8 = System_Int32__ToString((int32_t)&v11, 0LL);
  v9 = System_String__Concat_60325748((System_String_o *)StringLiteral_3272/*"BonusFilterGroupId"*/, v8, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_44148400(this, eventIdList, filterGroupId, v9, v10);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_44148400(
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
  void *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *Entity; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *v35; // x21
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v37; // x20
  int *monitor; // x8
  unsigned __int64 v39; // x28
  EventUpValInfo_o *v40; // x24
  _DWORD *v41; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v43; // x26
  __int64 v44; // x24
  __int64 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  System_Comparison_T__o *v53; // x21
  Il2CppObject *v54; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  EventUpValIconComponent_o *eventUpValIcon; // x19
  EventUpValSetupInfo_o *setupInfo; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+30h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_48E6351 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, eventIdList);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v10);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v11);
    sub_1B00CCC(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v15);
    sub_1B00CCC(&EventDropItemUpValInfo_TypeInfo, v16);
    sub_1B00CCC(&EventMargeItemUpValInfo_TypeInfo, v17);
    sub_1B00CCC(&EventUpValInfo_TypeInfo, v18);
    sub_1B00CCC(&EventUpValSetupInfo_TypeInfo, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v25);
    sub_1B00CCC(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v26);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1B00CCC(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__, v28);
    sub_1B00CCC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v29);
    byte_48E6351 = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v61, 0, sizeof(v61));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_49;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( !Entity )
    return;
  v35 = Entity;
  this->fields.saveKey = saveKey;
  this->fields.saveId = filterGroupId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.saveKey, (int32_t)saveKey, v33, v34);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_49;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  v37 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = this->fields.servantFaceIcon;
  if ( !Instance )
    goto LABEL_49;
  ServantFaceIconComponent__SetEventBonus(
    (ServantFaceIconComponent_o *)Instance,
    (int32_t)v35[2].klass,
    HIDWORD(v35[2].klass),
    0LL);
  Instance = this->fields.equipNameLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v35[1].monitor, 0LL);
  Instance = this->fields.skillIcon;
  if ( !Instance )
    goto LABEL_49;
  SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v35[3].monitor, 0LL);
  Instance = this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v35[3].klass, 0LL);
  Instance = this->fields.skillTextLabel;
  if ( !Instance )
    goto LABEL_49;
  WrapControlText__textAdjust(
    (UILabel_o *)Instance,
    *((System_String_o **)Instance + 52),
    *((_DWORD *)Instance + 106),
    0,
    0,
    0LL);
  setupInfo = (EventUpValSetupInfo_o *)sub_1B00F18(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_37684336(setupInfo, eventIdList, 0, 0, 0, 0LL);
  monitor = (int *)v35[2].monitor;
  if ( !monitor )
    goto LABEL_49;
  v39 = 0LL;
  while ( (__int64)v39 < monitor[6] )
  {
    v40 = (EventUpValInfo_o *)sub_1B00F18(EventUpValInfo_TypeInfo);
    EventUpValInfo___ctor(v40, setupInfo, 0, 1, 1, 0, 0LL);
    eventUpVallInfo = v40;
    v41 = v35[2].monitor;
    if ( v41 )
    {
      if ( v39 >= (unsigned int)v41[6] )
        sub_1B00F30(Instance, v31);
      if ( MasterData_object )
      {
        Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)MasterData_object, v41[v39 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_38598824(
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
            Instance = eventUpVallInfo->fields.dropList;
            if ( Instance )
            {
              if ( *((_DWORD *)Instance + 6) )
              {
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v60,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v61 = v60;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v61,
                          (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v61.fields._current;
                  v43 = (EventDropItemUpValInfo_o *)sub_1B00F18(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v43, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v44 = sub_1B00F18(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v44, v43, 0LL);
                  if ( !current )
                    sub_1B00F28(v45, v46);
                  if ( !v44 )
                    sub_1B00F28(v45, v46);
                  *(_QWORD *)(v44 + 92) = current[2].monitor;
                  if ( !v37 )
                    sub_1B00F28(v45, v46);
                  items = v37->fields._items;
                  v50 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v37->fields._version;
                  if ( !items )
                    sub_1B00F28(v45, v46);
                  size = v37->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v37,
                      (Il2CppObject *)v44,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v52 = &items->obj.klass + size;
                    v37->fields._size = size + 1;
                    v52[4] = (Il2CppClass *)v44;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v52 + 4), v44, v47, v48);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v61,
                  (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v35[2].monitor;
              ++v39;
              if ( monitor )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_49;
  }
  Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
    Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
  }
  v53 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 16LL);
  if ( !v53 )
  {
    if ( !*((_DWORD *)Instance + 56) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v54 = (Il2CppObject *)**((_QWORD **)Instance + 23);
    v53 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      v53,
      v54,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__14_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v53;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__14_0, (int32_t)v53, v56, v57);
  }
  if ( !v37
    || (System_Collections_Generic_List_object___Sort_54277268(
          v37,
          v53,
          (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__),
        eventUpValIcon = this->fields.eventUpValIcon,
        Instance = System_Collections_Generic_List_object___ToArray(
                     v37,
                     (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__),
        !eventUpValIcon) )
  {
LABEL_49:
    sub_1B00F28(Instance, v31);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E6354 & 1) == 0 )
  {
    sub_1B00CCC(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_48E6354 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B00F28(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__14_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B00F28(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}