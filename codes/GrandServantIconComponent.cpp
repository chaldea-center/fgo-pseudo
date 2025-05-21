void __fastcall GrandServantIconComponent___ctor(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.skillLevelTextScale = xmmword_BEB4B0;
  if ( !byte_4B3E80A )
  {
    sub_1BDB878(&UnityEngine_Vector2_TypeInfo, method);
    byte_4B3E80A = 1;
  }
  this->fields.cacheOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantIconComponent__ApplyOffset(
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
  LODWORD(v5) = (unsigned int)UnityEngine_Transform__get_localPosition(center, 0LL);
  this = (GrandServantIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
    goto LABEL_11;
  if ( v5 > COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL)) )
  {
    sideIconOffsetX = -v4->fields.sideIconOffsetX;
    goto LABEL_8;
  }
  LODWORD(v7) = (unsigned int)UnityEngine_Transform__get_localPosition(center, 0LL);
  this = (GrandServantIconComponent_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
LABEL_11:
    sub_1BDBAD4(this, center);
  if ( v7 >= COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL)) )
  {
    v4->fields.cacheOffset.fields.y = v4->fields.centerIconOffsetY;
    goto LABEL_10;
  }
  sideIconOffsetX = v4->fields.sideIconOffsetX;
LABEL_8:
  v4->fields.cacheOffset.fields.x = sideIconOffsetX;
LABEL_10:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  GameObjectExtensions__AddLocalPosition_35211872(gameObject, v4->fields.cacheOffset, 0LL);
}


void __fastcall GrandServantIconComponent__Awake(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantIconComponent__EndShowServantWithQuest(
        GrandServantIconComponent_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Master_object; // x0
  __int64 v12; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v14; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x22
  Il2CppObject *Entity; // x0
  struct System_Action_bool__int__UserServantEntity__o *onEndShowServantStatusAction; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-50h]

  if ( (byte_4B3F7A8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, isModify);
    sub_1BDB878(&DataManager_TypeInfo, v7);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B3F7A8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_13;
  v14 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v14;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v18 = v19;
  Master_object = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v18, 0LL);
  if ( !v15 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v15,
             (int64_t)Master_object,
             (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  onEndShowServantStatusAction = this->fields.onEndShowServantStatusAction;
  if ( onEndShowServantStatusAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD, Il2CppObject *, _QWORD))onEndShowServantStatusAction->fields.m_target)(
      onEndShowServantStatusAction->fields.original_method_info,
      isModify,
      (unsigned int)questId,
      Entity,
      *(_QWORD *)&onEndShowServantStatusAction->fields.extra_arg);
  Master_object = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Master_object )
LABEL_13:
    sub_1BDBAD4(Master_object, v12);
  CommonUI__CloseServantStatusDialog(Master_object, 0LL, 0LL);
}


void __fastcall GrandServantIconComponent__Init(
        GrandServantIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t index,
        System_Action_int__o *onClickIcon,
        System_Action_bool__int__UserServantEntity__o *onEndShowServantStatus,
        const MethodInfo *method)
{
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
  __int64 v21; // x24
  SkillListTreasureDeviceComponent_o *object; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_T__o *iconLabels; // x22
  System_Action_object__o *v25; // x23
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  Il2CppObject *v35; // x21
  Il2CppObject *v36; // x0
  UISprite_o *classSprite; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x21
  const MethodInfo *v43; // x1
  int32_t SvtClassId; // [xsp+Ch] [xbp-74h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+10h] [xbp-70h] BYREF
  int32_t Index_k__BackingField; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4B3F7A2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_UIIconLabel__TypeInfo, userServantEntity);
    sub_1BDB878(&AtlasManager_TypeInfo, v11);
    sub_1BDB878(&Method_BasicHelper_ForEach_UIIconLabel___, v12);
    sub_1BDB878(&int_TypeInfo, v13);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_UIFont___, v15);
    sub_1BDB878(&Method_GrandServantIconComponent___c__DisplayClass29_0__Init_b__0__, v16);
    sub_1BDB878(&GrandServantIconComponent___c__DisplayClass29_0_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_25148/*"{0:D5}:{1}"*/, v18);
    sub_1BDB878(&StringLiteral_6816/*"Fonts/TextAtlas3"*/, v19);
    sub_1BDB878(&StringLiteral_20166/*"icon_class_grand_servant_select_{0:D3}"*/, v20);
    byte_4B3F7A2 = 1;
  }
  v21 = sub_1BDBAC4(GrandServantIconComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  this->fields.onClickIconAction = onClickIcon;
  sub_1BDB81C(&this->fields.onClickIconAction);
  this->fields.onEndShowServantStatusAction = onEndShowServantStatus;
  sub_1BDB81C(&this->fields.onEndShowServantStatusAction);
  this->fields._Index_k__BackingField = index;
  object = (SkillListTreasureDeviceComponent_o *)UnityEngine_Resources__Load_object_(
                                                   (System_String_o *)StringLiteral_6816/*"Fonts/TextAtlas3"*/,
                                                   (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_UIFont___);
  if ( !v21 )
    goto LABEL_12;
  *(_QWORD *)(v21 + 16) = object;
  sub_1BDB81C(v21 + 16);
  iconLabels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconLabels;
  v25 = (System_Action_object__o *)sub_1BDBAC4(System_Action_UIIconLabel__TypeInfo);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_GrandServantIconComponent___c__DisplayClass29_0__Init_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    iconLabels,
    (System_Action_T__o *)v25,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_UIIconLabel___);
  object = this->fields.skillListTreasureDevice;
  if ( !object )
    goto LABEL_12;
  SkillListTreasureDeviceComponent__SetBitmapFont(object, *(UIFont_o **)(v21 + 16), 0LL);
  GrandServantIconComponent__SetServant(this, userServantEntity, v26);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Index_k__BackingField = this->fields._Index_k__BackingField;
  object = (SkillListTreasureDeviceComponent_o *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &Index_k__BackingField,
                                                   v28,
                                                   v29,
                                                   v30);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_12;
  v35 = (Il2CppObject *)object;
  svtId = UserServantEntity_k__BackingField->fields.svtId;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          &svtId,
                          v31,
                          v32,
                          v33);
  object = (SkillListTreasureDeviceComponent_o *)System_String__Format_62613552(
                                                   (System_String_o *)StringLiteral_25148/*"{0:D5}:{1}"*/,
                                                   v35,
                                                   v36,
                                                   0LL);
  if ( !gameObject
    || (UnityEngine_Object__set_name(gameObject, (System_String_o *)object, 0LL),
        (object = (SkillListTreasureDeviceComponent_o *)this->fields.nameLabel) == 0LL)
    || (UILabel__set_effectStyle((UILabel_o *)object, 3, 0LL),
        (object = (SkillListTreasureDeviceComponent_o *)this->fields._UserServantEntity_k__BackingField) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(object, v23);
  }
  classSprite = this->fields.classSprite;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)object, 0, 0, 0LL);
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtClassId, v38, v39, v40);
  v42 = System_String__Format((System_String_o *)StringLiteral_20166/*"icon_class_grand_servant_select_{0:D3}"*/, v41, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(classSprite, v42, 0LL);
  GrandServantIconComponent__OnUnselected(this, v43);
}


void __fastcall GrandServantIconComponent__OnClickIcon(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B3F7A6 & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_int___, method);
    byte_4B3F7A6 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onClickIconAction,
    this->fields._Index_k__BackingField,
    (const MethodInfo_2F82F2C *)Method_ActionExtensions_Call_int___);
}


void __fastcall GrandServantIconComponent__OnLongPressIcon(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v12; // q1
  CommonUI_o *v13; // x20
  int64_t v14; // x21
  ServantStatusDialog_FormationEndDelegate_o *v15; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-50h]

  if ( (byte_4B3F7A7 & 1) == 0 )
  {
    sub_1BDB878(&ServantStatusDialog_FormationEndDelegate_TypeInfo, method);
    sub_1BDB878(&Method_GrandServantIconComponent_EndShowServantWithQuest__, v3);
    sub_1BDB878(&Method_GrandServantIconComponent_OnLongPressIcon__, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B3F7A7 = 1;
  }
  v7 = Method_GrandServantIconComponent_OnLongPressIcon__;
  if ( (*((_BYTE *)Method_GrandServantIconComponent_OnLongPressIcon__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BDB890(Method_GrandServantIconComponent_OnLongPressIcon__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v12 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v13 = (CommonUI_o *)Instance;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v17.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v16 = v17;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v16, 0LL);
  v15 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_FormationEndDelegate_TypeInfo);
  ServantStatusDialog_FormationEndDelegate___ctor(
    v15,
    (Il2CppObject *)this,
    Method_GrandServantIconComponent_EndShowServantWithQuest__,
    0LL);
  if ( !v13 )
LABEL_10:
    sub_1BDBAD4(Instance, v10);
  CommonUI__OpenServantStatusDialog_30843228(v13, 1, v14, v15, 0LL, 0LL);
}


void __fastcall GrandServantIconComponent__OnSelected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *UserServantEntity_k__BackingField; // x0
  UILabel_o *nameLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *peripheralObjectRootList; // x20
  System_Action_object__o *v10; // x21
  Il2CppObject *v11; // x22
  struct GrandServantIconComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B3F7A5 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GameObject__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BDB878(&Method_GrandServantIconComponent___c__OnSelected_b__32_0__, v4);
    sub_1BDB878(&GrandServantIconComponent___c_TypeInfo, v5);
    byte_4B3F7A5 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_15;
  nameLabel = this->fields.nameLabel;
  UserServantEntity_k__BackingField = UserServantEntity__GetSvtName(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
                                        0LL);
  if ( !nameLabel )
    goto LABEL_15;
  UILabel__set_text(nameLabel, (System_String_o *)UserServantEntity_k__BackingField, 0LL);
  UserServantEntity_k__BackingField = this->fields.nameLabel;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_15;
  UILabel__UpdateCondensedScaleComponent((UILabel_o *)UserServantEntity_k__BackingField, 0LL);
  UserServantEntity_k__BackingField = this->fields.faceIcon;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UserServantEntity_k__BackingField, 0LL);
  GameObjectExtensions__SetLocalScale_35213112(gameObject, this->fields.onSelectedIconScale, 0LL);
  UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
  peripheralObjectRootList = this->fields.peripheralObjectRootList;
  if ( !GrandServantIconComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantIconComponent___c_TypeInfo);
    UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
  }
  v10 = *(System_Action_object__o **)(*((_QWORD *)UserServantEntity_k__BackingField + 23) + 16LL);
  if ( !v10 )
  {
    if ( !*((_DWORD *)UserServantEntity_k__BackingField + 56) )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_k__BackingField);
      UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)**((_QWORD **)UserServantEntity_k__BackingField + 23);
    v10 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v10, v11, Method_GrandServantIconComponent___c__OnSelected_b__32_0__, 0LL);
    static_fields = GrandServantIconComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Action_GameObject__o *)v10;
    UserServantEntity_k__BackingField = (void *)sub_1BDB81C(&static_fields->__9__32_0);
  }
  if ( !peripheralObjectRootList )
LABEL_15:
    sub_1BDBAD4(UserServantEntity_k__BackingField, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)peripheralObjectRootList,
    (System_Action_T__o *)v10,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.classSprite, 1, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.reflectionFaceSprite, 0, 0LL);
  this->fields._IsSelected_k__BackingField = 1;
}


void __fastcall GrandServantIconComponent__OnUnselected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *faceIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *peripheralObjectRootList; // x20
  System_Action_object__o *v9; // x21
  Il2CppObject *v10; // x22
  struct GrandServantIconComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4B3F7A4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_GameObject__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_GameObject__ForEach__, v3);
    sub_1BDB878(&Method_GrandServantIconComponent___c__OnUnselected_b__31_0__, v4);
    sub_1BDB878(&GrandServantIconComponent___c_TypeInfo, v5);
    byte_4B3F7A4 = 1;
  }
  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceIcon, 0LL);
  GameObjectExtensions__SetLocalScale_35213112(gameObject, this->fields.onUnselectedIconScale, 0LL);
  faceIcon = GrandServantIconComponent___c_TypeInfo;
  peripheralObjectRootList = this->fields.peripheralObjectRootList;
  if ( !GrandServantIconComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantIconComponent___c_TypeInfo);
    faceIcon = GrandServantIconComponent___c_TypeInfo;
  }
  v9 = *(System_Action_object__o **)(*((_QWORD *)faceIcon + 23) + 8LL);
  if ( !v9 )
  {
    if ( !*((_DWORD *)faceIcon + 56) )
    {
      j_il2cpp_runtime_class_init_0(faceIcon);
      faceIcon = GrandServantIconComponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)**((_QWORD **)faceIcon + 23);
    v9 = (System_Action_object__o *)sub_1BDBAC4(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v9, v10, Method_GrandServantIconComponent___c__OnUnselected_b__31_0__, 0LL);
    static_fields = GrandServantIconComponent___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Action_GameObject__o *)v9;
    faceIcon = (void *)sub_1BDB81C(&static_fields->__9__31_0);
  }
  if ( !peripheralObjectRootList )
LABEL_12:
    sub_1BDBAD4(faceIcon, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)peripheralObjectRootList,
    (System_Action_T__o *)v9,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.classSprite, 0, 0LL);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.reflectionFaceSprite, 1, 0LL);
  this->fields._IsSelected_k__BackingField = 0;
}


void __fastcall GrandServantIconComponent__ResetOffset(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Vector2_o v5; // 0:s0.4,4:s1.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5.fields.x = -this->fields.cacheOffset.fields.x;
  v5.fields.y = -this->fields.cacheOffset.fields.y;
  GameObjectExtensions__AddLocalPosition_35211872(gameObject, v5, 0LL);
  if ( !byte_4B3E80A )
  {
    sub_1BDB878(&UnityEngine_Vector2_TypeInfo, v4);
    byte_4B3E80A = 1;
  }
  this->fields.cacheOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}


void __fastcall GrandServantIconComponent__SetServant(
        GrandServantIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  __int64 v7; // x1
  ServantFaceIconComponent_o *faceIcon; // x0
  __int64 v9; // x2
  struct UIIconLabel_array *iconLabels; // x8
  UIIconLabel_o *v11; // x21
  int32_t displayEquipIndex; // w22
  struct UIIconLabel_array *v13; // x8
  UIIconLabel_o *v14; // x21
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x20
  SkillInfo_array *v16; // x21
  SkillListTreasureDeviceComponent_o *v17; // x20
  BalanceConfig_c *v18; // x8
  int v19; // w21
  float skillLevelTextScale; // s0
  UILabel_o *nameLabel; // x19
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4B3F7A3 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, userServantEntity);
    sub_1BDB878(&LocalizationManager_TypeInfo, v5);
    byte_4B3F7A3 = 1;
  }
  skillInfoList = 0LL;
  tdInfo = 0LL;
  this->fields._UserServantEntity_k__BackingField = userServantEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_1BDB81C(&this->fields._UserServantEntity_k__BackingField);
  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    goto LABEL_30;
  ServantFaceIconComponent__Set_40018236(faceIcon, this->fields._UserServantEntity_k__BackingField, 0LL, 0LL, 0LL);
  iconLabels = this->fields.iconLabels;
  if ( !iconLabels )
    goto LABEL_30;
  if ( !iconLabels->max_length )
    goto LABEL_31;
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_30;
  v11 = iconLabels->m_Items[0];
  displayEquipIndex = faceIcon->fields.displayEquipIndex;
  faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)faceIcon, 0LL);
  if ( !v11 )
    goto LABEL_30;
  UIIconLabel__Set_40036752(v11, 2, displayEquipIndex, (int32_t)faceIcon, 0, 0LL, 0, 0, 0, 0, 0LL);
  v13 = this->fields.iconLabels;
  if ( !v13 )
    goto LABEL_30;
  if ( v13->max_length <= 1 )
LABEL_31:
    sub_1BDBADC(faceIcon, v7, v9);
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_30;
  v14 = v13->m_Items[1];
  faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)faceIcon, 0LL);
  if ( !v14 )
    goto LABEL_30;
  UIIconLabel__Set_40036752(v14, 32, (int32_t)faceIcon, 0, 0, 0LL, 0, 0, 0, 0, 0LL);
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_30;
  UserServantEntity__getSkillInfo((UserServantEntity_o *)faceIcon, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_30;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)faceIcon, &tdInfo, -1, -1, 0, 0LL);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v16 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  faceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetLevelList_40284868(v16, 0LL);
  if ( !tdInfo )
    goto LABEL_30;
  if ( !skillListTreasureDevice )
    goto LABEL_30;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)faceIcon,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0LL);
  faceIcon = (ServantFaceIconComponent_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !faceIcon )
    goto LABEL_30;
  v17 = this->fields.skillListTreasureDevice;
  faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__GetSkillMaxCount((UserServantEntity_o *)faceIcon, 0LL);
  v18 = BalanceConfig_TypeInfo;
  v19 = (int)faceIcon;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v18 = BalanceConfig_TypeInfo;
  }
  skillLevelTextScale = 1.0;
  if ( v19 == v18->static_fields->SvtSkillListMax )
    skillLevelTextScale = this->fields.skillLevelTextScale;
  if ( !v17 )
    goto LABEL_30;
  SkillListTreasureDeviceComponent__SetLabelSkillLevelLabelScaleX(v17, skillLevelTextScale, 0LL);
  faceIcon = (ServantFaceIconComponent_o *)this->fields.skillListTreasureDevice;
  if ( !faceIcon )
    goto LABEL_30;
  SkillListTreasureDeviceComponent__SetTreasureDeviceIconPosition(
    (SkillListTreasureDeviceComponent_o *)faceIcon,
    this->fields.treasureDeviceIconPosition,
    0LL);
  if ( !this->fields._IsSelected_k__BackingField )
    return;
  faceIcon = (ServantFaceIconComponent_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !faceIcon
    || (nameLabel = this->fields.nameLabel,
        faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__GetSvtName((UserServantEntity_o *)faceIcon, 0LL),
        !nameLabel) )
  {
LABEL_30:
    sub_1BDBAD4(faceIcon, v7);
  }
  UILabel__set_text(nameLabel, (System_String_o *)faceIcon, 0LL);
}


int32_t __fastcall GrandServantIconComponent__get_Index(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._Index_k__BackingField;
}


bool __fastcall GrandServantIconComponent__get_IsSelected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._IsSelected_k__BackingField;
}


UserServantEntity_o *__fastcall GrandServantIconComponent__get_UserServantEntity(
        GrandServantIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._UserServantEntity_k__BackingField;
}


void __fastcall GrandServantIconComponent__set_Index(
        GrandServantIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Index_k__BackingField = value;
}


void __fastcall GrandServantIconComponent__set_IsSelected(
        GrandServantIconComponent_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSelected_k__BackingField = value;
}


void __fastcall GrandServantIconComponent__set_UserServantEntity(
        GrandServantIconComponent_o *this,
        UserServantEntity_o *value,
        const MethodInfo *method)
{
  this->fields._UserServantEntity_k__BackingField = value;
  sub_1BDB81C(&this->fields._UserServantEntity_k__BackingField);
}


void __fastcall GrandServantIconComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F7A9 & 1) == 0 )
  {
    sub_1BDB878(&GrandServantIconComponent___c_TypeInfo, v1);
    byte_4B3F7A9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(GrandServantIconComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandServantIconComponent___c_TypeInfo->static_fields->__9 = (struct GrandServantIconComponent___c_o *)v2;
  sub_1BDB81C(GrandServantIconComponent___c_TypeInfo->static_fields);
}


void __fastcall GrandServantIconComponent___c___ctor(GrandServantIconComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantIconComponent___c___OnSelected_b__32_0(
        GrandServantIconComponent___c_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  if ( !root )
    sub_1BDBAD4(this, 0LL);
  UnityEngine_GameObject__SetActive(root, 1, 0LL);
}


void __fastcall GrandServantIconComponent___c___OnUnselected_b__31_0(
        GrandServantIconComponent___c_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  if ( !root )
    sub_1BDBAD4(this, 0LL);
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
}


void __fastcall GrandServantIconComponent___c__DisplayClass29_0___ctor(
        GrandServantIconComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantIconComponent___c__DisplayClass29_0___Init_b__0(
        GrandServantIconComponent___c__DisplayClass29_0_o *this,
        UIIconLabel_o *iconLabel,
        const MethodInfo *method)
{
  if ( !iconLabel )
    sub_1BDBAD4(this, 0LL);
  UIIconLabel__SetTextLabelBitmapFont(iconLabel, this->fields.fontObject, 0LL);
}