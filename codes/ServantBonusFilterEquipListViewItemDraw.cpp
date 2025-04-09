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

  if ( (byte_49B631F & 1) == 0 )
  {
    sub_1B4CF90(&Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__, method);
    byte_49B631F = 1;
  }
  v3 = Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__;
  if ( (*((_BYTE *)Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_ServantBonusFilterEquipListViewItemDraw_OnClickChangeDisplay__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
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

  if ( (byte_49B6321 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_UISprite___, method);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v3);
    sub_1B4CF90(&StringLiteral_11589/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/, v4);
    sub_1B4CF90(&StringLiteral_3677/*"COMMON_ON"*/, v5);
    sub_1B4CF90(&StringLiteral_3676/*"COMMON_OFF"*/, v6);
    sub_1B4CF90(&StringLiteral_11590/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/, v7);
    sub_1B4CF90(&StringLiteral_17171/*"btn_bg_off"*/, v8);
    sub_1B4CF90(&StringLiteral_17176/*"btn_bg_on"*/, v9);
    byte_49B6321 = 1;
  }
  changeDisplayButton = (UnityEngine_Component_o *)this->fields.changeDisplayButton;
  if ( !changeDisplayButton )
    goto LABEL_34;
  isButtonOn = this->fields.isButtonOn;
  changeDisplayButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     changeDisplayButton,
                                                     (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !changeDisplayButton )
    goto LABEL_34;
  if ( !isButtonOn )
  {
    UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17176/*"btn_bg_on"*/, 0LL);
    buttonLabel = this->fields.buttonLabel;
    isButtonLabelOnOff = this->fields.isButtonLabelOnOff;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = (System_String_o **)&StringLiteral_11589/*"SERVANT_SORT_INDIVIDUAL_DISPLAY"*/;
    if ( isButtonLabelOnOff )
      v23 = (System_String_o **)&StringLiteral_3677/*"COMMON_ON"*/;
    changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v23, 0LL);
    if ( buttonLabel )
    {
      UILabel__set_text(buttonLabel, (System_String_o *)changeDisplayButton, 0LL);
      v15 = this->fields.buttonLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( !byte_49B5B13 )
      {
        sub_1B4CF90(&LocalizationManager_TypeInfo, method);
        byte_49B5B13 = 1;
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
    sub_1B4D1EC(changeDisplayButton, method);
  }
  UISprite__set_spriteName((UISprite_o *)changeDisplayButton, (System_String_o *)StringLiteral_17171/*"btn_bg_off"*/, 0LL);
  v12 = this->fields.buttonLabel;
  v13 = this->fields.isButtonLabelOnOff;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( v13 )
    v14 = (System_String_o **)&StringLiteral_3676/*"COMMON_OFF"*/;
  else
    v14 = (System_String_o **)&StringLiteral_11590/*"SERVANT_SORT_INDIVIDUAL_NOT_DISPLAY"*/;
  changeDisplayButton = (UnityEngine_Component_o *)LocalizationManager__Get(*v14, 0LL);
  if ( !v12 )
    goto LABEL_34;
  UILabel__set_text(v12, (System_String_o *)changeDisplayButton, 0LL);
  v15 = this->fields.buttonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49B5B12 )
  {
    sub_1B4CF90(&LocalizationManager_TypeInfo, method);
    byte_49B5B12 = 1;
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
    sub_1B4D1EC(0LL, isEnable);
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
    if ( UnityEngine_PlayerPrefs__GetInt_68762168(this->fields.saveKey, 0LL) == this->fields.saveId )
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
  if ( (byte_49B631B & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3201/*"BonusFilterEquipId"*/, *(_QWORD *)&idx);
    byte_49B631B = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_61093468((System_String_o *)StringLiteral_3201/*"BonusFilterEquipId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_31415144(this, equipEntity, eventUpValInfos, skillInfos, v11, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_31415144(
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
  const MethodInfo *v35; // x3
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
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  System_Comparison_T__o *monitor; // x20
  Il2CppObject *klass; // x21
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  EventUpValIconComponent_o *eventUpValIcon; // x19
  ServantBonusFilterEquipListViewItemDraw_o *v69; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  v69 = this;
  if ( (byte_49B631C & 1) == 0 )
  {
    sub_1B4CF90(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, equipEntity);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v12);
    sub_1B4CF90(&EquipTargetInfo_TypeInfo, v13);
    sub_1B4CF90(&EventDropItemUpValInfo_TypeInfo, v14);
    sub_1B4CF90(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v18);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v21);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v23);
    sub_1B4CF90(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__, v24);
    sub_1B4CF90(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v25);
    this = (ServantBonusFilterEquipListViewItemDraw_o *)sub_1B4CF90(&StringLiteral_148/*" + "*/, v26);
    byte_49B631C = 1;
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
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v72, 0LL);
  v30 = (EquipTargetInfo_o *)sub_1B4D1DC(EquipTargetInfo_TypeInfo);
  EquipTargetInfo___ctor_39442500(v30, v29, 0, 1, 0, 0LL);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v69->fields.servantFaceIcon;
  if ( !this )
    goto LABEL_58;
  ServantFaceIconComponent__Set_38765644((ServantFaceIconComponent_o *)this, v30, 0LL, 0LL, 0LL);
  equipNameLabel = v69->fields.equipNameLabel;
  Name = ServantEntity__GetName(equipEntity, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47044416(
                                                        Name,
                                                        0LL);
  if ( !equipNameLabel )
    goto LABEL_58;
  UILabel__set_text(equipNameLabel, (System_String_o *)this, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(equipEntity->fields.id, 0LL);
  v69->fields.saveKey = saveKey;
  v69->fields.saveId = v33;
  sub_1B4CF34((CGThumbnailListItem_o *)&v69->fields.saveKey, (int32_t)saveKey, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
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
          v50 = System_String__Concat_61093468(
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
            sub_1B4D1F4(this, equipEntity);
          v51 = skillInfos->m_Items[v39];
          if ( !v51 )
            break;
          v50 = System_String__Concat_61131716(
                  skillTextLabel->fields.mText,
                  (System_String_o *)StringLiteral_148/*" + "*/,
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
          (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
        v71 = v70;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v71,
                  (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
        {
          current = v71.fields._current;
          v53 = (EventDropItemUpValInfo_o *)sub_1B4D1DC(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor(v53, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
          v54 = sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
          EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v54, v53, 0LL);
          if ( !current )
            sub_1B4D1EC(v55, v56);
          if ( !v54 )
            sub_1B4D1EC(v55, v56);
          *(_QWORD *)(v54 + 92) = current[2].monitor;
          if ( !v36 )
            sub_1B4D1EC(v55, v56);
          items = v36->fields._items;
          v60 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v36->fields._version;
          if ( !items )
            sub_1B4D1EC(v55, v56);
          size = v36->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v36,
              (Il2CppObject *)v54,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v62 = &items->obj.klass + size;
            v36->fields._size = size + 1;
            v62[4] = (Il2CppClass *)v54;
            sub_1B4CF34((CGThumbnailListItem_o *)(v62 + 4), v54, v57, v58);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v71,
          (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
        v38 = v69;
        v40 = 0;
      }
      max_length = skillInfos->max_length;
      if ( (int)++v39 >= max_length )
        goto LABEL_48;
    }
LABEL_58:
    sub_1B4D1EC(this, equipEntity);
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
    monitor = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
    System_Comparison_object____ctor(
      monitor,
      klass,
      Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__13_0__,
      0LL);
    static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)monitor;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)monitor, v66, v67);
  }
  if ( !v36 )
    goto LABEL_58;
  System_Collections_Generic_List_object___Sort_56106144(
    v36,
    monitor,
    (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
  this = (ServantBonusFilterEquipListViewItemDraw_o *)v69->fields.skillTextLabel;
  if ( !this )
    goto LABEL_58;
  WrapControlText__textAdjust(
    (UILabel_o *)this,
    (System_String_o *)this[3].fields.skillIcon,
    (int32_t)this[3].fields.skillTextLabel,
    0,
    0LL);
  eventUpValIcon = v69->fields.eventUpValIcon;
  this = (ServantBonusFilterEquipListViewItemDraw_o *)System_Collections_Generic_List_object___ToArray(
                                                        v36,
                                                        (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  if ( !eventUpValIcon )
    goto LABEL_58;
  EventUpValIconComponent__Set(eventUpValIcon, (EventMargeItemUpValInfo_array *)this, -1, -1, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_31416772(
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
  if ( (byte_49B631D & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_3203/*"BonusFilterGroupId"*/, *(_QWORD *)&idx);
    byte_49B631D = 1;
  }
  v10 = System_Int32__ToString((int32_t)&v13, 0LL);
  v11 = System_String__Concat_61093468((System_String_o *)StringLiteral_3203/*"BonusFilterGroupId"*/, v10, 0LL);
  ServantBonusFilterEquipListViewItemDraw__SetItem_31416924(this, eventIdList, filterGroupId, v11, equipIdx, v12);
}


void __fastcall ServantBonusFilterEquipListViewItemDraw__SetItem_31416924(
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
  void *Instance; // x0
  System_Int32_array *v49; // x1
  Il2CppObject *Entity; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x21
  Il2CppObject *MasterData_object; // x27
  System_Collections_Generic_List_object__o *v55; // x20
  System_Collections_Generic_Dictionary_object__int__o *v56; // x28
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  EventBonusFilterGroupMemberEntity_array *EntitiesByGroupId; // x26
  System_Collections_Generic_List_EventBonusFilterEntity__o *FilterList; // x0
  ServantBonusFilterEquipListViewItemDraw___c_c *v61; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x27
  System_Func_object__bool__o *_9__15_1; // x28
  Il2CppObject *v64; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Collections_Generic_List_object__o *v69; // x27
  System_Comparison_T__o *v70; // x28
  Il2CppObject *v71; // x29
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  unsigned __int64 v75; // x19
  __int64 v76; // x29
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  EventBonusFilterGroupMemberEntity_o *v79; // x1
  __int64 v80; // x24
  System_Func_object__bool__o *v81; // x23
  struct System_Collections_Generic_Dictionary_string__int__o *saveGroupEquipKeys; // x29
  System_String_o *v83; // x0
  EventUpValSetupInfo_o *v84; // x24
  int *monitor; // x8
  unsigned __int64 v86; // x27
  EventUpValInfo_o *v87; // x23
  _DWORD *v88; // x8
  Il2CppObject *current; // x25
  EventDropItemUpValInfo_o *v90; // x26
  __int64 v91; // x23
  __int64 v92; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  System_Comparison_T__o *v100; // x21
  Il2CppObject *v101; // x22
  struct ServantBonusFilterEquipListViewItemDraw___c_StaticFields *v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  EventUpValIconComponent_o *eventUpValIcon; // x19
  System_String_o *str0; // [xsp+8h] [xbp-C8h]
  ServantBonusFilterEquipListViewItemDraw_o *v107; // [xsp+10h] [xbp-C0h]
  SkillLvMaster_o *v108; // [xsp+20h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+28h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+40h] [xbp-90h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+60h] [xbp-70h] BYREF
  int32_t v112; // [xsp+6Ch] [xbp-64h] BYREF

  v112 = equipIdx;
  if ( (byte_49B631E & 1) == 0 )
  {
    sub_1B4CF90(&AutoOrganizationServantBonusFilterEquipComponent_TypeInfo, eventIdList);
    sub_1B4CF90(&Method_BasicHelper_Any_EventBonusFilterEntity___, v10);
    sub_1B4CF90(&System_Comparison_EventBonusFilterEntity__TypeInfo, v11);
    sub_1B4CF90(&System_Comparison_EventMargeItemUpValInfo__TypeInfo, v12);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMasterData_SkillLvMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventBonusFilterMaster___, v16);
    sub_1B4CF90(&DataManager_TypeInfo, v17);
    sub_1B4CF90(
      &Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__,
      v18);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__Add__, v19);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, v20);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v21);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___, v22);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v24);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v25);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v26);
    sub_1B4CF90(&EventDropItemUpValInfo_TypeInfo, v27);
    sub_1B4CF90(&EventMargeItemUpValInfo_TypeInfo, v28);
    sub_1B4CF90(&EventUpValInfo_TypeInfo, v29);
    sub_1B4CF90(&EventUpValSetupInfo_TypeInfo, v30);
    sub_1B4CF90(&System_Func_EventBonusFilterEntity__bool__TypeInfo, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v32);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__, v38);
    sub_1B4CF90(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v39);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40);
    sub_1B4CF90(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__, v41);
    sub_1B4CF90(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__, v42);
    sub_1B4CF90(&Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__, v43);
    sub_1B4CF90(&Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__, v44);
    sub_1B4CF90(&ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo, v45);
    sub_1B4CF90(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v46);
    sub_1B4CF90(&StringLiteral_3201/*"BonusFilterEquipId"*/, v47);
    byte_49B631E = 1;
  }
  eventUpVallInfo = 0LL;
  memset(&v110, 0, sizeof(v110));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventBonusFilterGroupInfoMaster___);
  if ( !Instance )
    goto LABEL_85;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             filterGroupId,
             (const MethodInfo_319D99C *)Method_DataMasterBase_EventBonusFilterGroupInfoMaster__EventBonusFilterGroupInfoEntity__int__GetEntity__);
  if ( Entity )
  {
    v53 = Entity;
    this->fields.saveKey = saveKey;
    this->fields.saveId = filterGroupId;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.saveKey, (int32_t)saveKey, v51, v52);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventBonusFilterGroupMemberMaster___);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_85;
    v108 = (SkillLvMaster_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    v55 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v56 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
    System_Collections_Generic_Dictionary_object__int____ctor(
      v56,
      (const MethodInfo_324E434 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    v107 = this;
    this->fields.saveGroupEquipKeys = (struct System_Collections_Generic_Dictionary_string__int__o *)v56;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.saveGroupEquipKeys, (int32_t)v56, v57, v58);
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
      Instance = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventBonusFilterMaster___);
      v49 = eventIdList;
      if ( !Instance )
        goto LABEL_85;
      FilterList = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0, 0LL);
      v61 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      v62 = (System_Collections_Generic_IEnumerable_TSource__o *)FilterList;
      if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
        v61 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      _9__15_1 = (System_Func_object__bool__o *)v61->static_fields->__9__15_1;
      if ( !_9__15_1 )
      {
        if ( !v61->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v61);
          v61 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v64 = (Il2CppObject *)v61->static_fields->__9;
        _9__15_1 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventBonusFilterEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__15_1,
          v64,
          Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_1__,
          0LL);
        static_fields = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
        static_fields->__9__15_1 = (struct System_Func_EventBonusFilterEntity__bool__o *)_9__15_1;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__15_1, (int32_t)_9__15_1, v66, v67);
      }
      v68 = System_Linq_Enumerable__Where_object_(
              v62,
              (System_Func_TSource__bool__o *)_9__15_1,
              (const MethodInfo_2F42638 *)Method_System_Linq_Enumerable_Where_EventBonusFilterEntity___);
      v69 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                           v68,
                                                           (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_EventBonusFilterEntity___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v69, 0LL) )
      {
        Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
          Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
        }
        v70 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 24LL);
        if ( !v70 )
        {
          if ( !*((_DWORD *)Instance + 56) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
          }
          v71 = (Il2CppObject *)**((_QWORD **)Instance + 23);
          v70 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventBonusFilterEntity__TypeInfo);
          System_Comparison_object____ctor(
            v70,
            v71,
            Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_2__,
            0LL);
          v72 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
          v72->__9__15_2 = (struct System_Comparison_EventBonusFilterEntity__o *)v70;
          sub_1B4CF34((CGThumbnailListItem_o *)&v72->__9__15_2, (int32_t)v70, v73, v74);
        }
        if ( !v69 )
          goto LABEL_85;
        System_Collections_Generic_List_object___Sort_56106144(
          v69,
          v70,
          (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
        Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
        str0 = (System_String_o *)StringLiteral_3201/*"BonusFilterEquipId"*/;
        if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
        if ( !saveKey )
          goto LABEL_85;
        Instance = (void *)System_String__Contains(
                             saveKey,
                             AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->static_fields->SAVE_KEY_AUTO_ORGANIZATION_BONUS_FILTER_GROUP_ID,
                             0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          if ( !AutoOrganizationServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AutoOrganizationServantBonusFilterEquipComponent_TypeInfo);
            Instance = AutoOrganizationServantBonusFilterEquipComponent_TypeInfo;
          }
          str0 = (System_String_o *)**((_QWORD **)Instance + 23);
        }
        if ( !EntitiesByGroupId )
          goto LABEL_85;
        if ( (int)EntitiesByGroupId->max_length >= 1 )
        {
          v75 = 0LL;
          while ( 1 )
          {
            v76 = sub_1B4D1DC(ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v76, 0LL);
            if ( v75 >= EntitiesByGroupId->max_length )
LABEL_86:
              sub_1B4D1F4(Instance, v49);
            if ( !v76 )
              break;
            v79 = EntitiesByGroupId->m_Items[v75];
            *(_QWORD *)(v76 + 16) = v79;
            v80 = v76 + 16;
            sub_1B4CF34((CGThumbnailListItem_o *)(v76 + 16), (int32_t)v79, v77, v78);
            v81 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_EventBonusFilterEntity__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v81,
              (Il2CppObject *)v76,
              Method_ServantBonusFilterEquipListViewItemDraw___c__DisplayClass15_0__SetItem_b__3__,
              0LL);
            if ( BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v69,
                   (System_Func_T__bool__o *)v81,
                   (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_EventBonusFilterEntity___) )
            {
              saveGroupEquipKeys = this->fields.saveGroupEquipKeys;
              v83 = System_Int32__ToString((int32_t)&v112, 0LL);
              Instance = System_String__Concat_61093468(str0, v83, 0LL);
              if ( !*(_QWORD *)v80 || !saveGroupEquipKeys )
                break;
              System_Collections_Generic_Dictionary_object__int___Add(
                (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
                (Il2CppObject *)Instance,
                *(_DWORD *)(*(_QWORD *)v80 + 20LL),
                (const MethodInfo_324EDE8 *)Method_System_Collections_Generic_Dictionary_string__int__Add__);
              ++v112;
            }
            if ( (__int64)++v75 >= (int)EntitiesByGroupId->max_length )
              goto LABEL_44;
          }
LABEL_85:
          sub_1B4D1EC(Instance, v49);
        }
      }
    }
LABEL_44:
    Instance = this->fields.servantFaceIcon;
    if ( !Instance )
      goto LABEL_85;
    ServantFaceIconComponent__SetEventBonus(
      (ServantFaceIconComponent_o *)Instance,
      (int32_t)v53[2].klass,
      HIDWORD(v53[2].klass),
      0LL);
    Instance = this->fields.equipNameLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v53[1].monitor, 0LL);
    Instance = this->fields.skillIcon;
    if ( !Instance )
      goto LABEL_85;
    SkillIconComponent__SetSpecifyIconId((SkillIconComponent_o *)Instance, (int32_t)v53[3].monitor, 0LL);
    Instance = this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v53[3].klass, 0LL);
    Instance = this->fields.skillTextLabel;
    if ( !Instance )
      goto LABEL_85;
    WrapControlText__textAdjust(
      (UILabel_o *)Instance,
      *((System_String_o **)Instance + 52),
      *((_DWORD *)Instance + 106),
      0,
      0LL);
    v84 = (EventUpValSetupInfo_o *)sub_1B4D1DC(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_39469900(v84, eventIdList, 0, 0, 0, 0LL);
    monitor = (int *)v53[2].monitor;
    if ( !monitor )
      goto LABEL_85;
    v86 = 0LL;
    while ( (__int64)v86 < monitor[6] )
    {
      v87 = (EventUpValInfo_o *)sub_1B4D1DC(EventUpValInfo_TypeInfo);
      EventUpValInfo___ctor(v87, v84, 0, 1, 1, 0, 0LL);
      eventUpVallInfo = v87;
      v88 = v53[2].monitor;
      if ( !v88 )
        goto LABEL_85;
      if ( v86 >= (unsigned int)v88[6] )
        goto LABEL_86;
      Instance = v108;
      if ( v108 )
      {
        Instance = SkillLvMaster__GetEntity(v108, v88[v86 + 8], 1, 0LL);
        if ( Instance )
        {
          Instance = (void *)SkillLvEntity__getEventUpVal_40542824(
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
                  (System_Collections_Generic_List_Enumerator_T__o *)&v109,
                  (System_Collections_Generic_List_object__o *)Instance,
                  (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
                v110 = v109;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v110,
                          (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__) )
                {
                  current = v110.fields._current;
                  v90 = (EventDropItemUpValInfo_o *)sub_1B4D1DC(EventDropItemUpValInfo_TypeInfo);
                  EventDropItemUpValInfo___ctor(v90, 1, (EventDropUpValInfo_o *)current, 0, 0LL);
                  v91 = sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                  EventMargeItemUpValInfo___ctor((EventMargeItemUpValInfo_o *)v91, v90, 0LL);
                  if ( !current )
                    sub_1B4D1EC(v92, v93);
                  if ( !v91 )
                    sub_1B4D1EC(v92, v93);
                  *(_QWORD *)(v91 + 92) = current[2].monitor;
                  if ( !v55 )
                    sub_1B4D1EC(v92, v93);
                  items = v55->fields._items;
                  v97 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                  ++v55->fields._version;
                  if ( !items )
                    sub_1B4D1EC(v92, v93);
                  size = v55->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v55,
                      (Il2CppObject *)v91,
                      *(const MethodInfo_35801DC **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v99 = &items->obj.klass + size;
                    v55->fields._size = size + 1;
                    v99[4] = (Il2CppClass *)v91;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v99 + 4), v91, v94, v95);
                  }
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v110,
                  (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
              }
              monitor = (int *)v53[2].monitor;
              ++v86;
              if ( monitor )
                continue;
            }
          }
        }
      }
      goto LABEL_85;
    }
    Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    if ( !ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
      Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
    }
    v100 = *(System_Comparison_T__o **)(*((_QWORD *)Instance + 23) + 32LL);
    if ( !v100 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo;
      }
      v101 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v100 = (System_Comparison_T__o *)sub_1B4D1DC(System_Comparison_EventMargeItemUpValInfo__TypeInfo);
      System_Comparison_object____ctor(
        v100,
        v101,
        Method_ServantBonusFilterEquipListViewItemDraw___c__SetItem_b__15_0__,
        0LL);
      v102 = ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields;
      v102->__9__15_0 = (struct System_Comparison_EventMargeItemUpValInfo__o *)v100;
      sub_1B4CF34((CGThumbnailListItem_o *)&v102->__9__15_0, (int32_t)v100, v103, v104);
    }
    if ( !v55 )
      goto LABEL_85;
    System_Collections_Generic_List_object___Sort_56106144(
      v55,
      v100,
      (const MethodInfo_3581CA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Sort__);
    eventUpValIcon = v107->fields.eventUpValIcon;
    Instance = System_Collections_Generic_List_object___ToArray(
                 v55,
                 (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
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

  if ( (byte_49B6320 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_string__int__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v7);
    byte_49B6320 = 1;
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
      sub_1B4D1EC(0LL, v9);
    System_Collections_Generic_Dictionary_object__int___GetEnumerator(
      &v12,
      (System_Collections_Generic_Dictionary_object__int__o *)saveGroupEquipKeys,
      (const MethodInfo_324F1D8 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_Enumerator_object__int___MoveNext(
              &v12,
              (const MethodInfo_3350D10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__MoveNext__) )
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
      (const MethodInfo_3350E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__int__Dispose__);
  }
}


void __fastcall ServantBonusFilterEquipListViewItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B6322 & 1) == 0 )
  {
    sub_1B4CF90(&ServantBonusFilterEquipListViewItemDraw___c_TypeInfo, v1);
    byte_49B6322 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(ServantBonusFilterEquipListViewItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipListViewItemDraw___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)ServantBonusFilterEquipListViewItemDraw___c_TypeInfo->static_fields,
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


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__13_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B4D1EC(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_0(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventMargeItemUpValInfo_o *a,
        EventMargeItemUpValInfo_o *b,
        const MethodInfo *method)
{
  if ( !a )
    sub_1B4D1EC(this, 0LL);
  return EventMargeItemUpValInfo__CompPersonalPriority(a, b, 0LL);
}


bool __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_1(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.type == 1;
}


int32_t __fastcall ServantBonusFilterEquipListViewItemDraw___c___SetItem_b__15_2(
        ServantBonusFilterEquipListViewItemDraw___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B4D1EC(this, a);
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
    sub_1B4D1EC(this, filterEntity);
  return groupMemberEquip->fields.svtId == filterEntity->fields.value
      && !EventBonusFilterEntity__IsOpen(filterEntity, 0LL);
}