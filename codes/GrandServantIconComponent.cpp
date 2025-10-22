void GrandServantIconComponent___ctor(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.skillLevelTextScale = xmmword_C12980;
  if ( !byte_4C5059A )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
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
    sub_1C3E7C0(this, center);
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
  GameObjectExtensions__AddLocalPosition_36177060(gameObject, v4->fields.cacheOffset, 0);
}


void GrandServantIconComponent__Awake(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  ;
}


void GrandServantIconComponent__EndShowServantWithQuest(
        GrandServantIconComponent_o *this,
        bool isModify,
        int32_t questId,
        const MethodInfo *method)
{
  CommonUI_o *Master_object; // x0
  __int64 v8; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v10; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  Il2CppObject *Entity; // x0
  struct System_Action_bool__int__UserServantEntity__o *onEndShowServantStatusAction; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-50h]

  if ( (byte_4C519D5 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C519D5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (CommonUI_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserServantMaster___);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_13;
  v10 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v10;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v14 = v15;
  Master_object = (CommonUI_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v14, 0);
  if ( !v11 )
    goto LABEL_13;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v11,
             (int64_t)Master_object,
             (const MethodInfo_33B54B4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  onEndShowServantStatusAction = this->fields.onEndShowServantStatusAction;
  if ( onEndShowServantStatusAction )
    ((void (__fastcall *)(intptr_t, bool, _QWORD, Il2CppObject *, intptr_t))onEndShowServantStatusAction->fields.invoke_impl)(
      onEndShowServantStatusAction->fields.method_code,
      isModify,
      (unsigned int)questId,
      Entity,
      onEndShowServantStatusAction->fields.method);
  Master_object = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Master_object )
LABEL_13:
    sub_1C3E7C0(Master_object, v8);
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
  SkillListTreasureDeviceComponent_o *object; // x0
  __int64 v13; // x1
  bool CanSelectToGrand_k__BackingField; // w8
  System_Collections_Generic_IEnumerable_T__o *iconLabels; // x22
  System_Action_object__o *v16; // x23
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *gameObject; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x5
  __int64 v23; // x6
  __int64 v24; // x7
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  Il2CppObject *v32; // x22
  Il2CppObject *v33; // x0
  const MethodInfo *v34; // x1
  struct UILabel_o *maskLabel; // x20
  System_String_o *closedMessage; // x1
  struct GrandGraphDetailEntity_o *GrandGraphDetailEntity_k__BackingField; // x8
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t Index_k__BackingField; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4C519CF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_UIIconLabel__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ForEach_UIIconLabel___);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C3E564(&Method_UnityEngine_Resources_Load_UIFont___);
    sub_1C3E564(&Method_GrandServantIconComponent___c__DisplayClass35_0__Init_b__0__);
    sub_1C3E564(&GrandServantIconComponent___c__DisplayClass35_0_TypeInfo);
    sub_1C3E564(&StringLiteral_11538/*"SELECT_GRAND_HAS_GRAND_CLASS_MASK_TEXT"*/);
    sub_1C3E564(&StringLiteral_25094/*"{0:D5}:{1}"*/);
    sub_1C3E564(&StringLiteral_6807/*"Fonts/TextAtlas3"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C519CF = 1;
  }
  v11 = sub_1C3E7B0(GrandServantIconComponent___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  this->fields.onClickIconAction = onClickIcon;
  sub_1C3E508(&this->fields.onClickIconAction, onClickIcon);
  this->fields.onEndShowServantStatusAction = onEndShowServantStatus;
  object = (SkillListTreasureDeviceComponent_o *)sub_1C3E508(
                                                   &this->fields.onEndShowServantStatusAction,
                                                   onEndShowServantStatus);
  if ( !servantInfo )
    goto LABEL_25;
  CanSelectToGrand_k__BackingField = servantInfo->fields._CanSelectToGrand_k__BackingField;
  this->fields._Index_k__BackingField = index;
  this->fields._CanSelectGrand_k__BackingField = CanSelectToGrand_k__BackingField;
  object = (SkillListTreasureDeviceComponent_o *)UnityEngine_Resources__Load_object_(
                                                   (System_String_o *)StringLiteral_6807/*"Fonts/TextAtlas3"*/,
                                                   (const MethodInfo_3196164 *)Method_UnityEngine_Resources_Load_UIFont___);
  if ( !v11 )
    goto LABEL_25;
  *(_QWORD *)(v11 + 16) = object;
  sub_1C3E508(v11 + 16, object);
  iconLabels = (System_Collections_Generic_IEnumerable_T__o *)this->fields.iconLabels;
  v16 = (System_Action_object__o *)sub_1C3E7B0(System_Action_UIIconLabel__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_GrandServantIconComponent___c__DisplayClass35_0__Init_b__0__,
    0);
  BasicHelper__ForEach_object_(
    iconLabels,
    (System_Action_T__o *)v16,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_UIIconLabel___);
  object = this->fields.skillListTreasureDevice;
  if ( !object )
    goto LABEL_25;
  SkillListTreasureDeviceComponent__SetBitmapFont(object, *(UIFont_o **)(v11 + 16), 0);
  GrandServantIconComponent__SetServant(this, servantInfo->fields._UserServantEntity_k__BackingField, v17);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Index_k__BackingField = this->fields._Index_k__BackingField;
  object = (SkillListTreasureDeviceComponent_o *)j_il2cpp_value_box_0(
                                                   int_TypeInfo,
                                                   &Index_k__BackingField,
                                                   v19,
                                                   v20,
                                                   v21,
                                                   v22,
                                                   v23,
                                                   v24);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_25;
  v32 = (Il2CppObject *)object;
  svtId = UserServantEntity_k__BackingField->fields.svtId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(
                          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                          &svtId,
                          v25,
                          v26,
                          v27,
                          v28,
                          v29,
                          v30);
  object = (SkillListTreasureDeviceComponent_o *)System_String__Format_63677760(
                                                   (System_String_o *)StringLiteral_25094/*"{0:D5}:{1}"*/,
                                                   v32,
                                                   v33,
                                                   0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)object, 0);
  object = (SkillListTreasureDeviceComponent_o *)this->fields.nameLabel;
  if ( !object )
    goto LABEL_25;
  UILabel__set_effectStyle((UILabel_o *)object, 3, 0);
  object = (SkillListTreasureDeviceComponent_o *)this->fields.mask;
  if ( !object )
    goto LABEL_25;
  if ( !this->fields._CanSelectGrand_k__BackingField )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)object, 1, 0);
    if ( servantInfo->fields._IsSameClass_k__BackingField )
    {
      maskLabel = this->fields.maskLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      object = (SkillListTreasureDeviceComponent_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11538/*"SELECT_GRAND_HAS_GRAND_CLASS_MASK_TEXT"*/, 0);
      if ( maskLabel )
      {
        closedMessage = (System_String_o *)object;
        object = (SkillListTreasureDeviceComponent_o *)maskLabel;
LABEL_23:
        UILabel__set_text((UILabel_o *)object, closedMessage, 0);
        goto LABEL_24;
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
          goto LABEL_23;
        }
      }
      else if ( object )
      {
        closedMessage = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_23;
      }
    }
LABEL_25:
    sub_1C3E7C0(object, v13);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)object, 0, 0);
LABEL_24:
  GrandServantIconComponent__OnUnselected(this, v34);
}


void GrandServantIconComponent__OnClickIcon(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C519D3 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_int___);
    byte_4C519D3 = 1;
  }
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.onClickIconAction,
    this->fields._Index_k__BackingField,
    (const MethodInfo_30462C0 *)Method_ActionExtensions_Call_int___);
}


void GrandServantIconComponent__OnLongPressIcon(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v8; // q1
  CommonUI_o *v9; // x20
  int64_t v10; // x21
  ServantStatusDialog_FormationEndDelegate_o *v11; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-50h]

  if ( (byte_4C519D4 & 1) == 0 )
  {
    sub_1C3E564(&ServantStatusDialog_FormationEndDelegate_TypeInfo);
    sub_1C3E564(&Method_GrandServantIconComponent_EndShowServantWithQuest__);
    sub_1C3E564(&Method_GrandServantIconComponent_OnLongPressIcon__);
    sub_1C3E564(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C519D4 = 1;
  }
  v3 = Method_GrandServantIconComponent_OnLongPressIcon__;
  if ( (*((_BYTE *)Method_GrandServantIconComponent_OnLongPressIcon__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C3E57C(Method_GrandServantIconComponent_OnLongPressIcon__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3E548(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_10;
  v8 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  v9 = (CommonUI_o *)Instance;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v12 = v13;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49007660(&v12, 0);
  v11 = (ServantStatusDialog_FormationEndDelegate_o *)sub_1C3E7B0(ServantStatusDialog_FormationEndDelegate_TypeInfo);
  ServantStatusDialog_FormationEndDelegate___ctor(
    v11,
    (Il2CppObject *)this,
    Method_GrandServantIconComponent_EndShowServantWithQuest__,
    0);
  if ( !v9 )
LABEL_10:
    sub_1C3E7C0(Instance, v6);
  CommonUI__OpenServantStatusDialog_31247888(v9, 1, v10, v11, 0, 0);
}


void GrandServantIconComponent__OnSelected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  void *UserServantEntity_k__BackingField; // x0
  UILabel_o *nameLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *peripheralObjectRootList; // x20
  System_Action_object__o *v7; // x21
  Il2CppObject *v8; // x22
  struct GrandServantIconComponent___c_StaticFields *static_fields; // x0
  UISprite_o *classSprite; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  int32_t SvtClassId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C519D2 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_GameObject__TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C3E564(&Method_GrandServantIconComponent___c__OnSelected_b__38_0__);
    sub_1C3E564(&GrandServantIconComponent___c_TypeInfo);
    sub_1C3E564(&StringLiteral_20166/*"icon_class_grand_servant_select_{0:D3}"*/);
    byte_4C519D2 = 1;
  }
  UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_18;
  nameLabel = this->fields.nameLabel;
  UserServantEntity_k__BackingField = UserServantEntity__GetSvtName(
                                        (UserServantEntity_o *)UserServantEntity_k__BackingField,
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
  GameObjectExtensions__SetLocalScale_36178300(gameObject, this->fields.onSelectedIconScale, 0);
  UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
  peripheralObjectRootList = this->fields.peripheralObjectRootList;
  if ( !GrandServantIconComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantIconComponent___c_TypeInfo);
    UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
  }
  v7 = *(System_Action_object__o **)(*((_QWORD *)UserServantEntity_k__BackingField + 23) + 16LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)UserServantEntity_k__BackingField + 56) )
    {
      j_il2cpp_runtime_class_init_0(UserServantEntity_k__BackingField);
      UserServantEntity_k__BackingField = GrandServantIconComponent___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)UserServantEntity_k__BackingField + 23);
    v7 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_GrandServantIconComponent___c__OnSelected_b__38_0__, 0);
    static_fields = GrandServantIconComponent___c_TypeInfo->static_fields;
    static_fields->__9__38_0 = (struct System_Action_GameObject__o *)v7;
    UserServantEntity_k__BackingField = (void *)sub_1C3E508(&static_fields->__9__38_0, v7);
  }
  if ( !peripheralObjectRootList
    || (System_Collections_Generic_List_object___ForEach(
          (System_Collections_Generic_List_object__o *)peripheralObjectRootList,
          (System_Action_T__o *)v7,
          (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_GameObject__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.classSprite, 1, 0),
        (UserServantEntity_k__BackingField = this->fields._UserServantEntity_k__BackingField) == 0) )
  {
LABEL_18:
    sub_1C3E7C0(UserServantEntity_k__BackingField, method);
  }
  classSprite = this->fields.classSprite;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)UserServantEntity_k__BackingField, 0, 0, 0);
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtClassId, v11, v12, v13, v14, v15, v16);
  v18 = System_String__Format((System_String_o *)StringLiteral_20166/*"icon_class_grand_servant_select_{0:D3}"*/, v17, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(classSprite, v18, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.reflectionFaceSprite, 0, 0);
  this->fields._IsSelected_k__BackingField = 1;
}


void GrandServantIconComponent__OnUnselected(GrandServantIconComponent_o *this, const MethodInfo *method)
{
  void *faceIcon; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_GameObject__o *peripheralObjectRootList; // x20
  System_Action_object__o *v6; // x21
  Il2CppObject *v7; // x22
  struct GrandServantIconComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4C519D1 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_GameObject__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_GameObject__ForEach__);
    sub_1C3E564(&Method_GrandServantIconComponent___c__OnUnselected_b__37_0__);
    sub_1C3E564(&GrandServantIconComponent___c_TypeInfo);
    byte_4C519D1 = 1;
  }
  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)faceIcon, 0);
  GameObjectExtensions__SetLocalScale_36178300(gameObject, this->fields.onUnselectedIconScale, 0);
  faceIcon = GrandServantIconComponent___c_TypeInfo;
  peripheralObjectRootList = this->fields.peripheralObjectRootList;
  if ( !GrandServantIconComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantIconComponent___c_TypeInfo);
    faceIcon = GrandServantIconComponent___c_TypeInfo;
  }
  v6 = *(System_Action_object__o **)(*((_QWORD *)faceIcon + 23) + 8LL);
  if ( !v6 )
  {
    if ( !*((_DWORD *)faceIcon + 56) )
    {
      j_il2cpp_runtime_class_init_0(faceIcon);
      faceIcon = GrandServantIconComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)**((_QWORD **)faceIcon + 23);
    v6 = (System_Action_object__o *)sub_1C3E7B0(System_Action_GameObject__TypeInfo);
    System_Action_object____ctor(v6, v7, Method_GrandServantIconComponent___c__OnUnselected_b__37_0__, 0);
    static_fields = GrandServantIconComponent___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = (struct System_Action_GameObject__o *)v6;
    faceIcon = (void *)sub_1C3E508(&static_fields->__9__37_0, v6);
  }
  if ( !peripheralObjectRootList )
LABEL_12:
    sub_1C3E7C0(faceIcon, method);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)peripheralObjectRootList,
    (System_Action_T__o *)v6,
    (const MethodInfo_37B5EA0 *)Method_System_Collections_Generic_List_GameObject__ForEach__);
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
  GameObjectExtensions__AddLocalPosition_36177060(gameObject, v4, 0);
  if ( !byte_4C5059A )
  {
    sub_1C3E564(&UnityEngine_Vector2_TypeInfo);
    byte_4C5059A = 1;
  }
  this->fields.cacheOffset = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
}


void GrandServantIconComponent__SetServant(
        GrandServantIconComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_UserServantEntity_k__BackingField; // x20
  __int64 v6; // x1
  ServantFaceIconComponent_o *faceIcon; // x0
  struct UIIconLabel_array *iconLabels; // x8
  UIIconLabel_o *v9; // x21
  int32_t displayEquipIndex; // w22
  struct UIIconLabel_array *v11; // x8
  UIIconLabel_o *v12; // x21
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x20
  SkillInfo_array *v14; // x21
  SkillListTreasureDeviceComponent_o *v15; // x20
  BalanceConfig_c *v16; // x8
  int v17; // w21
  float skillLevelTextScale; // s0
  UILabel_o *nameLabel; // x20
  UISprite_o *classSprite; // x19
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  System_String_o *v28; // x20
  int32_t SvtClassId; // [xsp+24h] [xbp-3Ch] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+28h] [xbp-38h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+38h] [xbp-28h] BYREF

  if ( (byte_4C519D0 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_20166/*"icon_class_grand_servant_select_{0:D3}"*/);
    byte_4C519D0 = 1;
  }
  skillInfoList = 0;
  tdInfo = 0;
  this->fields._UserServantEntity_k__BackingField = userServantEntity;
  p_UserServantEntity_k__BackingField = &this->fields._UserServantEntity_k__BackingField;
  sub_1C3E508(&this->fields._UserServantEntity_k__BackingField, userServantEntity);
  faceIcon = this->fields.faceIcon;
  if ( !faceIcon )
    goto LABEL_33;
  ServantFaceIconComponent__Set_41053768(faceIcon, this->fields._UserServantEntity_k__BackingField, 0, 0, 0);
  iconLabels = this->fields.iconLabels;
  if ( !iconLabels )
    goto LABEL_33;
  if ( !LODWORD(iconLabels->max_length) )
    goto LABEL_34;
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  v9 = iconLabels->m_Items[0];
  displayEquipIndex = faceIcon->fields.displayEquipIndex;
  faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getLevelMax((UserServantEntity_o *)faceIcon, 0);
  if ( !v9 )
    goto LABEL_33;
  UIIconLabel__Set_41158744(v9, 2, displayEquipIndex, (int32_t)faceIcon, 0, 0, 0, 0, 0, 0, 0);
  v11 = this->fields.iconLabels;
  if ( !v11 )
    goto LABEL_33;
  if ( LODWORD(v11->max_length) <= 1 )
LABEL_34:
    sub_1C3E7C8(faceIcon, v6);
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  v12 = v11->m_Items[1];
  faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__getFriendshipRank((UserServantEntity_o *)faceIcon, 0);
  if ( !v12 )
    goto LABEL_33;
  UIIconLabel__Set_41158744(v12, 32, (int32_t)faceIcon, 0, 0, 0, 0, 0, 0, 0, 0);
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  UserServantEntity__getSkillInfo((UserServantEntity_o *)faceIcon, &skillInfoList, -1, -1, 1, 0, -1, 0);
  faceIcon = (ServantFaceIconComponent_o *)*p_UserServantEntity_k__BackingField;
  if ( !*p_UserServantEntity_k__BackingField )
    goto LABEL_33;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)faceIcon, &tdInfo, -1, -1, 0, 0);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v14 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  faceIcon = (ServantFaceIconComponent_o *)LocalizationManager__GetLevelList_41326684(v14, 0);
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
    0);
  faceIcon = (ServantFaceIconComponent_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !faceIcon )
    goto LABEL_33;
  v15 = this->fields.skillListTreasureDevice;
  faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__GetSkillMaxCount((UserServantEntity_o *)faceIcon, 0);
  v16 = BalanceConfig_TypeInfo;
  v17 = (int)faceIcon;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v16 = BalanceConfig_TypeInfo;
  }
  skillLevelTextScale = 1.0;
  if ( v17 == v16->static_fields->SvtSkillListMax )
    skillLevelTextScale = this->fields.skillLevelTextScale;
  if ( !v15 )
    goto LABEL_33;
  SkillListTreasureDeviceComponent__SetLabelSkillLevelLabelScaleX(v15, skillLevelTextScale, 0);
  faceIcon = (ServantFaceIconComponent_o *)this->fields.skillListTreasureDevice;
  if ( !faceIcon )
    goto LABEL_33;
  SkillListTreasureDeviceComponent__SetTreasureDeviceIconPosition(
    (SkillListTreasureDeviceComponent_o *)faceIcon,
    this->fields.treasureDeviceIconPosition,
    0);
  if ( !this->fields._IsSelected_k__BackingField )
    return;
  faceIcon = (ServantFaceIconComponent_o *)this->fields._UserServantEntity_k__BackingField;
  if ( !faceIcon
    || (nameLabel = this->fields.nameLabel,
        faceIcon = (ServantFaceIconComponent_o *)UserServantEntity__GetSvtName((UserServantEntity_o *)faceIcon, 0),
        !nameLabel)
    || (UILabel__set_text(nameLabel, (System_String_o *)faceIcon, 0),
        (faceIcon = (ServantFaceIconComponent_o *)this->fields._UserServantEntity_k__BackingField) == 0) )
  {
LABEL_33:
    sub_1C3E7C0(faceIcon, v6);
  }
  classSprite = this->fields.classSprite;
  SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)faceIcon, 0, 0, 0);
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &SvtClassId, v21, v22, v23, v24, v25, v26);
  v28 = System_String__Format((System_String_o *)StringLiteral_20166/*"icon_class_grand_servant_select_{0:D3}"*/, v27, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(classSprite, v28, 0);
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
  this->fields._UserServantEntity_k__BackingField = value;
  sub_1C3E508(&this->fields._UserServantEntity_k__BackingField, value);
}


void GrandServantIconComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C519D6 & 1) == 0 )
  {
    sub_1C3E564(&GrandServantIconComponent___c_TypeInfo);
    byte_4C519D6 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(GrandServantIconComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandServantIconComponent___c_TypeInfo->static_fields->__9 = (struct GrandServantIconComponent___c_o *)v1;
  sub_1C3E508(GrandServantIconComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C3E7C0(this, 0);
  UnityEngine_GameObject__SetActive(root, 1, 0);
}


void GrandServantIconComponent___c___OnUnselected_b__37_0(
        GrandServantIconComponent___c_o *this,
        UnityEngine_GameObject_o *root,
        const MethodInfo *method)
{
  if ( !root )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  UIIconLabel__SetTextLabelBitmapFont(iconLabel, this->fields.fontObject, 0);
}