void GrandServantIconComponent___ctor(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  int v3; // w8

  v3 = (unsigned __int8)byte_5931820;
  *(_OWORD *)&this->fields.skillLevelTextScale = xmmword_E93570;
  if ( !v3 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  this->fields.cacheOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void GrandServantIconComponent__ApplyOffset(
        GrandServantIconComponent_o *this,
        UnityEngine_Transform_o *center,
        const MethodInfo *method)
{
  GrandServantIconComponent_o *v4; // x19
  float v5; // s8
  float sideIconOffsetX; // s0
  float v7; // s8
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !center )
    goto LABEL_11;
  v4 = this;
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localPosition(center, 0);
  this = (GrandServantIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_11;
  if ( v5 > COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) )
  {
    sideIconOffsetX = -v4->fields.sideIconOffsetX;
    goto LABEL_8;
  }
  LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition(center, 0);
  this = (GrandServantIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0);
  if ( !this )
LABEL_11:
    sub_21FFECC(this, center);
  if ( v7 >= COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) )
  {
    v4->fields.cacheOffset.fields.y = v4->fields.centerIconOffsetY;
    goto LABEL_10;
  }
  sideIconOffsetX = v4->fields.sideIconOffsetX;
LABEL_8:
  v4->fields.cacheOffset.fields.x = sideIconOffsetX;
LABEL_10:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  GameObjectExtensions__AddLocalPosition_42876888(gameObject, v4->fields.cacheOffset, 0);
}


void GrandServantIconComponent__Awake(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void GrandServantIconComponent__EndShowServantWithQuest(
        GrandServantIconComponent_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int128 v12; // q1
  Il2CppObject *Entity; // x0
  struct System_Action_bool__int__UserServantEntity__o *onEndShowServantStatusAction; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]

  if ( (byte_59330E1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59330E1 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, isModify, *(_QWORD *)&questId);
  Master_object = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_13;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v12 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v16.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v16.fields.fakeValue = v12;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
  v15 = v16;
  Master_object = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v15, 0);
  if ( !v11 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             (int64_t)Master_object,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  onEndShowServantStatusAction = this->fields.onEndShowServantStatusAction;
  if ( onEndShowServantStatusAction )
    ((void (__fastcall *)(intptr_t, bool, _QWORD, Il2CppObject *, intptr_t))onEndShowServantStatusAction->fields.invoke_impl)(
      onEndShowServantStatusAction->fields.method_code,
      isModify,
      (unsigned int)questId,
      Entity,
      onEndShowServantStatusAction->fields.method);
  Master_object = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Master_object )
LABEL_13:
    sub_21FFECC(Master_object, v8);
  CommonUI__CloseServantStatusDialog(Master_object, 0, 0);
}


void GrandServantIconComponent__Init(
        GrandServantIconComponent_o *this,
        SelectGrandServantInfo_o *servantInfo,
        int32_t index,
        System_Action_int__o *onClickIcon,
        System_Action_bool__int__UserServantEntity__o *onEndShowServantStatus,
        const MethodInfo *method)
{
  __int64 v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  SkillListTreasureDeviceComponent_o *object; // x0
  __int64 v25; // x1
  bool CanSelectToGrand_k__BackingField; // w10
  System_String_o *v27; // x0
  const MethodInfo_3945260 *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_T__o *iconLabels; // x22
  System_Action_object__o *v36; // x23
  const MethodInfo *v37; // x2
  UnityEngine_Object_o *gameObject; // x21
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  Il2CppObject *v40; // x22
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x2
  struct UILabel_o *maskLabel; // x20
  System_String_o *closedMessage; // x1
  struct GrandGraphDetailEntity_o *GrandGraphDetailEntity_k__BackingField; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t Index_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_59330DB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UIIconLabel__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_UIIconLabel___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_UIFont___);
    sub_21FFC50(&Method_GrandServantIconComponent___c__DisplayClass35_0__Init_b__0__);
    sub_21FFC50(&GrandServantIconComponent___c__DisplayClass35_0_TypeInfo);
    sub_21FFC50(&StringLiteral_12021/*"SELECT_GRAND_HAS_GRAND_CLASS_MASK_TEXT"*/);
    sub_21FFC50(&StringLiteral_26404/*"{0:D5}:{1}"*/);
    sub_21FFC50(&StringLiteral_7080/*"Fonts/TextAtlas3"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59330DB = 1;
  }
  v11 = sub_21FFEBC(GrandServantIconComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  this->fields.onClickIconAction = onClickIcon;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickIconAction,
    (int32_t)onClickIcon,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.onEndShowServantStatusAction = onEndShowServantStatus;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onEndShowServantStatusAction,
    (int32_t)onEndShowServantStatus,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( !servantInfo )
    goto LABEL_26;
  CanSelectToGrand_k__BackingField = servantInfo->fields._CanSelectToGrand_k__BackingField;
  this->fields._Index_k__BackingField = index;
  v27 = (System_String_o *)StringLiteral_7080/*"Fonts/TextAtlas3"*/;
  v28 = (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_UIFont___;
  this->fields._CanSelectGrand_k__BackingField = CanSelectToGrand_k__BackingField;
  object = (SkillListTreasureDeviceComponent_o *)UnityEngine_Resources__Load_object_(v27, v28);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 16) = object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)object, v29, v30, v31, v32, v33, v34);
  iconLabels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconLabels;
  v36 = (System_Action_object__o *)sub_21FFEBC(System_Action_UIIconLabel__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v11,
    Method_GrandServantIconComponent___c__DisplayClass35_0__Init_b__0__,
    0);
  BasicHelper__ForEach_object_(
    iconLabels,
    (System_Action_T__o *)v36,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_UIIconLabel___);
  object = this->fields.skillListTreasureDevice;
  if ( !object )
    goto LABEL_26;
  SkillListTreasureDeviceComponent__SetBitmapFont(object, *(UIFont_o **)(v11 + 16), 0);
  GrandServantIconComponent__SetServant(this, servantInfo->fields._UserServantEntity_k__BackingField, v37);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Index_k__BackingField = this->fields._Index_k__BackingField;
  object = (SkillListTreasureDeviceComponent_o *)j_il2cpp_value_box_0(qword_594C070, &Index_k__BackingField);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_26;
  v40 = (Il2CppObject *)object;
  svtId = UserServantEntity_k__BackingField->fields.svtId;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, &svtId);
  object = (SkillListTreasureDeviceComponent_o *)System_String__Format_75484576(
                                                   (System_String_o *)StringLiteral_26404/*"{0:D5}:{1}"*/,
                                                   v40,
                                                   v41,
                                                   0);
  if ( !gameObject )
    goto LABEL_26;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)object, 0);
  object = (SkillListTreasureDeviceComponent_o *)this->fields.nameLabel;
  if ( !object )
    goto LABEL_26;
  UILabel__set_effectStyle((UILabel_o *)object, 3, 0);
  object = (SkillListTreasureDeviceComponent_o *)this->fields.mask;
  if ( !this->fields._CanSelectGrand_k__BackingField )
  {
    if ( object )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)object, 1, 0);
      if ( servantInfo->fields._IsSameClass_k__BackingField )
      {
        maskLabel = this->fields.maskLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v43);
        object = (SkillListTreasureDeviceComponent_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_12021/*"SELECT_GRAND_HAS_GRAND_CLASS_MASK_TEXT"*/,
                                                         0);
        if ( maskLabel )
        {
          closedMessage = (System_String_o *)object;
          object = (SkillListTreasureDeviceComponent_o *)maskLabel;
LABEL_24:
          UILabel__set_text((UILabel_o *)object, closedMessage, 0);
          goto LABEL_25;
        }
      }
      else
      {
        object = (SkillListTreasureDeviceComponent_o *)this->fields.maskLabel;
        if ( servantInfo->fields._IsClose_k__BackingField )
        {
          GrandGraphDetailEntity_k__BackingField = servantInfo->fields._GrandGraphDetailEntity_k__BackingField;
          if ( GrandGraphDetailEntity_k__BackingField && object )
          {
            closedMessage = GrandGraphDetailEntity_k__BackingField->fields.closedMessage;
            goto LABEL_24;
          }
        }
        else if ( object )
        {
          closedMessage = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_24;
        }
      }
    }
LABEL_26:
    sub_21FFECC(object, v25);
  }
  if ( !object )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)object, 0, 0);
LABEL_25:
  GrandServantIconComponent__OnUnselected(this, v42);
}


void GrandServantIconComponent__OnClickIcon(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_59330DF & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_int___);
    byte_59330DF = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onClickIconAction,
    this->fields._Index_k__BackingField,
    (const MethodInfo_36CDE6C *)Method_ActionExtensions_Call_int___);
}


void GrandServantIconComponent__OnLongPressIcon(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  CommonUI_o *v9; // x20
  __int128 v10; // q0
  __int128 v11; // q1
  int v12; // w8
  int64_t v13; // x21
  ServantStatusDialog_FormationEndDelegate_o *v14; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-50h]

  if ( (byte_59330E0 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandServantIconComponent_EndShowServantWithQuest__);
    sub_21FFC50(&Method_GrandServantIconComponent_OnLongPressIcon__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59330E0 = 1;
  }
  v3 = Method_GrandServantIconComponent_OnLongPressIcon__;
  if ( (*((_BYTE *)Method_GrandServantIconComponent_OnLongPressIcon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_GrandServantIconComponent_OnLongPressIcon__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v9 = (CommonUI_o *)Instance;
  v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  v11 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v16.fields.currentCryptoKey = v10;
  *(_OWORD *)&v16.fields.fakeValue = v11;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6, v7);
  v15 = v16;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v15, 0);
  v14 = (ServantStatusDialog_FormationEndDelegate_o *)sub_21FFEBC(ServantStatusDialog_FormationEndDelegate_TypeInfo);
  ServantStatusDialog_FormationEndDelegate___ctor(
    v14,
    (Il2CppObject *)this,
    Method_GrandServantIconComponent_EndShowServantWithQuest__,
    0);
  if ( !v9 )
LABEL_10:
    sub_21FFECC(Instance, v6);
  CommonUI__OpenServantStatusDialog_37301708(v9, 1, v13, v14, 0, 0);
}


void GrandServantIconComponent__OnSelected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  void *UserServantEntity_k__BackingField; // x0
  UILabel_o *nameLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x2
  struct System_Collections_Generic_List_GameObject__o *peripheralObjectRootList; // x20
  struct GrandServantIconComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__38_0; // x21
  Il2CppObject *v10; // x22
  struct GrandServantIconComponent___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UISprite_o *classSprite; // x20
  Il2CppObject *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_o *v22; // x21
  int32_t SvtClassId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59330DE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_GrandServantIconComponent___c__OnSelected_b__38_0__);
    sub_21FFC50(&GrandServantIconComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_21078/*"icon_class_grand_servant_select_{0:D3}"*/);
    byte_59330DE = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_18;
  nameLabel = this->fields.nameLabel;
  UserServantEntity_k__BackingField = UserServantEntity__GetSvtName(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                        1,
                                        0);
  if ( !nameLabel )
    goto LABEL_18;
  UILabel__set_text(nameLabel, (System_String_o *)UserServantEntity_k__BackingField, 0);
  UserServantEntity_k__BackingField = this->fields.nameLabel;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_18;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)UserServantEntity_k__BackingField, 0);
  UserServantEntity_k__BackingField = this->fields.faceIcon;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UserServantEntity_k__BackingField, 0);
  GameObjectExtensions__SetLocalScale_42878128(gameObject, this->fields.onSelectedIconScale, 0);
  UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
  peripheralObjectRootList = this->fields.peripheralObjectRootList;
  if ( !*(&GrandServantIconComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantIconComponent___c_TypeInfo, method, v6);
    UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
  }
  static_fields = (struct GrandServantIconComponent___c_StaticFields *)*((_QWORD *)UserServantEntity_k__BackingField + 23);
  _9__38_0 = (System_Action_object__o *)static_fields->__9__38_0;
  if ( !_9__38_0 )
  {
    if ( !*((_DWORD *)UserServantEntity_k__BackingField + 57) )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_k__BackingField, method, v6);
      static_fields = GrandServantIconComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__38_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__38_0, v10, Method_GrandServantIconComponent___c__OnSelected_b__38_0__, 0);
    v11 = GrandServantIconComponent___c_TypeInfo->static_fields;
    v11->__9__38_0 = (struct System_Action_GameObject__o *)_9__38_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__38_0, (int32_t)_9__38_0, v12, v13, v14, v15, v16, v17);
  }
  if ( !peripheralObjectRootList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)peripheralObjectRootList,
          (System_Action_T__o *)_9__38_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.classSprite, 1, 0),
        (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0) )
  {
LABEL_18:
    sub_21FFECC(UserServantEntity_k__BackingField, method);
  }
  classSprite = this->fields.classSprite;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)UserServantEntity_k__BackingField, 0, 0, 0);
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SvtClassId);
  v22 = System_String__Format((System_String_o *)StringLiteral_21078/*"icon_class_grand_servant_select_{0:D3}"*/, v19, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20, v21);
  AtlasManager__SetGrandServantListImage(classSprite, v22, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.reflectionFaceSprite, 0, 0);
  this->fields._IsSelected_k__BackingField = 1;
}


void GrandServantIconComponent__OnUnselected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  void *faceIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x2
  struct System_Collections_Generic_List_GameObject__o *peripheralObjectRootList; // x20
  struct GrandServantIconComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__37_0; // x21
  Il2CppObject *v9; // x22
  struct GrandServantIconComponent___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59330DD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GameObject__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_21FFC50(&Method_GrandServantIconComponent___c__OnUnselected_b__37_0__);
    sub_21FFC50(&GrandServantIconComponent___c_TypeInfo);
    byte_59330DD = 1;
  }
  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceIcon, 0);
  GameObjectExtensions__SetLocalScale_42878128(gameObject, this->fields.onUnselectedIconScale, 0);
  faceIcon = GrandServantIconComponent___c_TypeInfo;
  peripheralObjectRootList = this->fields.peripheralObjectRootList;
  if ( !*(&GrandServantIconComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(GrandServantIconComponent___c_TypeInfo, method, v5);
    faceIcon = GrandServantIconComponent___c_TypeInfo;
  }
  static_fields = (struct GrandServantIconComponent___c_StaticFields *)*((_QWORD *)faceIcon + 23);
  _9__37_0 = (System_Action_object__o *)static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !*((_DWORD *)faceIcon + 57) )
    {
      j_il2cpp_runtime_class_init_0(faceIcon, method, v5);
      static_fields = GrandServantIconComponent___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__37_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(_9__37_0, v9, Method_GrandServantIconComponent___c__OnUnselected_b__37_0__, 0);
    v10 = GrandServantIconComponent___c_TypeInfo->static_fields;
    v10->__9__37_0 = (struct System_Action_GameObject__o *)_9__37_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__37_0, (int32_t)_9__37_0, v11, v12, v13, v14, v15, v16);
  }
  if ( !peripheralObjectRootList )
LABEL_12:
    sub_21FFECC(faceIcon, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)peripheralObjectRootList,
    (System_Action_T__o *)_9__37_0,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.classSprite, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.reflectionFaceSprite, 1, 0);
  this->fields._IsSelected_k__BackingField = 0;
}


void GrandServantIconComponent__ResetOffset(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector2_o v4; // 0:s0.4,4:s1.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v4.fields.x = -this->fields.cacheOffset.fields.x;
  v4.fields.y = -this->fields.cacheOffset.fields.y;
  GameObjectExtensions__AddLocalPosition_42876888(gameObject, v4, 0);
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  this->fields.cacheOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}


void GrandServantIconComponent__SetServant(
        GrandServantIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  __int64 v11; // x1
  void *faceIcon; // x0
  struct UIIconLabel_array *iconLabels; // x8
  UIIconLabel_o *v14; // x21
  int32_t v15; // w22
  struct UIIconLabel_array *v16; // x8
  UIIconLabel_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x20
  SkillInfo_array *v21; // x21
  SkillListTreasureDeviceComponent_o *v22; // x20
  __int64 v23; // x2
  BalanceConfig_c *v24; // x8
  int v25; // w21
  float skillLevelTextScale; // s0
  UILabel_o *nameLabel; // x20
  UISprite_o *classSprite; // x19
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x20
  int32_t SvtClassId; // [xsp+24h] [xbp-3Ch] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_59330DC & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21078/*"icon_class_grand_servant_select_{0:D3}"*/);
    byte_59330DC = 1;
  }
  skillInfoList = 0;
  this->fields._UserServantEntity_k__BackingField = userServantEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  tdInfo = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)userServantEntity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    goto LABEL_33;
  ServantFaceIconComponent__Set_48018228(
    (ServantFaceIconComponent_o *)faceIcon,
    this->fields._UserServantEntity_k__BackingField,
    0,
    0,
    1,
    0);
  iconLabels = this->fields.iconLabels;
  if ( !iconLabels )
    goto LABEL_33;
  if ( !LODWORD(iconLabels->max_length) )
    goto LABEL_34;
  faceIcon = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  v14 = iconLabels->m_Items[0];
  v15 = *((_DWORD *)faceIcon + 100);
  faceIcon = (void *)UserServantEntity__getLevelMax((UserServantEntity_o *)faceIcon, 0);
  if ( !v14 )
    goto LABEL_33;
  UIIconLabel__Set_48040364(v14, 2, v15, (int32_t)faceIcon, 0, 0, 0, 0, 0, 0, 0);
  v16 = this->fields.iconLabels;
  if ( !v16 )
    goto LABEL_33;
  if ( (v16->max_length & 0xFFFFFFFE) == 0 )
LABEL_34:
    sub_21FFED4(faceIcon);
  faceIcon = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  v17 = v16->m_Items[1];
  faceIcon = (void *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)faceIcon, 0);
  if ( !v17 )
    goto LABEL_33;
  UIIconLabel__Set_48040364(v17, 32, (int32_t)faceIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  faceIcon = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  UserServantEntity__getSkillInfo((UserServantEntity_o *)faceIcon, &skillInfoList, -1, -1, 1, 0, -1, 0);
  faceIcon = *p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)faceIcon, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v21 = skillInfoList;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18, v19);
  faceIcon = LocalizationManager__GetLevelList_48215212(v21, 0);
  if ( !tdInfo )
    goto LABEL_33;
  if ( !skillListTreasureDevice )
    goto LABEL_33;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)faceIcon,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0,
    0);
  faceIcon = this->fields._UserServantEntity_k__BackingField;
  if ( !faceIcon )
    goto LABEL_33;
  v22 = this->fields.skillListTreasureDevice;
  faceIcon = (void *)UserServantEntity__GetSkillMaxCount((UserServantEntity_o *)faceIcon, 0);
  v24 = BalanceConfig_TypeInfo;
  v25 = (int)faceIcon;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v11, v23);
    v24 = BalanceConfig_TypeInfo;
  }
  skillLevelTextScale = 1.0;
  if ( v25 == v24->static_fields->SvtSkillListMax )
    skillLevelTextScale = this->fields.skillLevelTextScale;
  if ( !v22 )
    goto LABEL_33;
  SkillListTreasureDeviceComponent__SetLabelSkillLevelLabelScaleX(v22, skillLevelTextScale, 0);
  faceIcon = this->fields.skillListTreasureDevice;
  if ( !faceIcon )
    goto LABEL_33;
  SkillListTreasureDeviceComponent__SetTreasureDeviceIconPosition(
    (SkillListTreasureDeviceComponent_o *)faceIcon,
    this->fields.treasureDeviceIconPosition,
    0);
  if ( !this->fields._IsSelected_k__BackingField )
    return;
  faceIcon = this->fields._UserServantEntity_k__BackingField;
  if ( !faceIcon
    || (nameLabel = this->fields.nameLabel,
        faceIcon = UserServantEntity__GetSvtName((UserServantEntity_o *)faceIcon, 1, 0),
        !nameLabel)
    || (UILabel__set_text(nameLabel, (System_String_o *)faceIcon, 0),
        (faceIcon = this->fields._UserServantEntity_k__BackingField) == 0) )
  {
LABEL_33:
    sub_21FFECC(faceIcon, v11);
  }
  classSprite = this->fields.classSprite;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)faceIcon, 0, 0, 0);
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &SvtClassId);
  v32 = System_String__Format((System_String_o *)StringLiteral_21078/*"icon_class_grand_servant_select_{0:D3}"*/, v29, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30, v31);
  AtlasManager__SetGrandServantListImage(classSprite, v32, 0);
}


bool GrandServantIconComponent__get_CanSelectGrand(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._CanSelectGrand_k__BackingField;
}


int32_t GrandServantIconComponent__get_Index(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._Index_k__BackingField;
}


bool GrandServantIconComponent__get_IsSelected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


UserServantEntity_o *GrandServantIconComponent__get_UserServantEntity(
        GrandServantIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void GrandServantIconComponent__set_CanSelectGrand(
        GrandServantIconComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._CanSelectGrand_k__BackingField = value;
}


void GrandServantIconComponent__set_Index(GrandServantIconComponent_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._Index_k__BackingField = value;
}


void GrandServantIconComponent__set_IsSelected(GrandServantIconComponent_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}


void GrandServantIconComponent__set_UserServantEntity(
        GrandServantIconComponent_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._UserServantEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._UserServantEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantIconComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59330E2 & 1) == 0 )
  {
    sub_21FFC50(&GrandServantIconComponent___c_TypeInfo);
    byte_59330E2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(GrandServantIconComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantIconComponent___c_TypeInfo->static_fields->__9 = (struct GrandServantIconComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)GrandServantIconComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandServantIconComponent___c___ctor(GrandServantIconComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantIconComponent___c___OnSelected_b__38_0(
        GrandServantIconComponent___c_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  if ( !root )
    sub_21FFECC(this, 0);
  UnityEngine_GameObject__SetActive(root, 1, 0);
}


void GrandServantIconComponent___c___OnUnselected_b__37_0(
        GrandServantIconComponent___c_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  if ( !root )
    sub_21FFECC(this, 0);
  UnityEngine_GameObject__SetActive(root, 0, 0);
}


void GrandServantIconComponent___c__DisplayClass35_0___ctor(
        GrandServantIconComponent___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantIconComponent___c__DisplayClass35_0___Init_b__0(
        GrandServantIconComponent___c__DisplayClass35_0_o *this,
        UIIconLabel_o *iconLabel,
        const MethodInfo *method)
{
  if ( !iconLabel )
    sub_21FFECC(this, 0);
  UIIconLabel__SetTextLabelBitmapFont(iconLabel, this->fields.fontObject, 0);
}