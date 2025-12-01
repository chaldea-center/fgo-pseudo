void ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CCAE7A & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_18652/*"dialog_icon_10004"*/);
    sub_1C713B0(&StringLiteral_18653/*"dialog_icon_10005"*/);
    sub_1C713B0(&StringLiteral_17553/*"btn_tab_{0}"*/);
    sub_1C713B0(&StringLiteral_18009/*"class2_{0}"*/);
    byte_4CCAE7A = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TabBtnNameFormat = (struct System_String_o *)StringLiteral_17553/*"btn_tab_{0}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17553/*"btn_tab_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_18009/*"class2_{0}"*/;
  static_fields = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  static_fields->TabGrandBtnNameFormat = (struct System_String_o *)StringLiteral_18009/*"class2_{0}"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->TabGrandBtnNameFormat, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_18652/*"dialog_icon_10004"*/;
  v16 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v16->TabGrandEx1IconName = (struct System_String_o *)StringLiteral_18652/*"dialog_icon_10004"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->TabGrandEx1IconName, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_18653/*"dialog_icon_10005"*/;
  v24 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v24->TabGrandEx2IconName = (struct System_String_o *)StringLiteral_18653/*"dialog_icon_10005"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->TabGrandEx2IconName, v23, v25, v26, v27, v28, v29, v30);
}


void ClassBoardBaseClassIconNameComponent___ctor(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardBaseClassIconNameComponent__Awake(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardBaseClassIconNameComponent__GrandSetup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  BalanceConfig_c *v5; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ClassBoardBaseClassIconNameComponent_c *v7; // x0
  UISprite_o *icon; // x21
  AtlasManager_c *v9; // x8
  System_String_o *TabGrandEx2IconName; // x22
  ClassBoardBaseClassIconNameComponent_c *v11; // x0
  int32_t GrandEx2Id; // w25
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v13; // x8
  AtlasManager_c *v14; // x0
  System_String_o *TabGrandBtnNameFormat; // x22
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
  UILabel_o *name; // x19
  int32_t v22; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v23; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4CCAE79 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6990/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/);
    byte_4CCAE79 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  v23 = 0;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->GrandEx1Id != classBaseId )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v11 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    GrandEx2Id = static_fields->GrandEx2Id;
    icon = this->fields.icon;
    if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
      v11 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    }
    v13 = v11->static_fields;
    if ( GrandEx2Id == classBaseId )
    {
      v14 = AtlasManager_TypeInfo;
      TabGrandEx2IconName = v13->TabGrandEx2IconName;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
        goto LABEL_20;
      goto LABEL_19;
    }
    TabGrandBtnNameFormat = v13->TabGrandBtnNameFormat;
    v22 = classBaseId;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v17 = System_String__Format(TabGrandBtnNameFormat, v16, 0);
    v9 = AtlasManager_TypeInfo;
    TabGrandEx2IconName = v17;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
      goto LABEL_20;
LABEL_18:
    v14 = v9;
LABEL_19:
    j_il2cpp_runtime_class_init_0(v14);
    goto LABEL_20;
  }
  v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  v9 = AtlasManager_TypeInfo;
  TabGrandEx2IconName = v7->static_fields->TabGrandEx1IconName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    goto LABEL_18;
LABEL_20:
  AtlasManager__SetClassIconSprite(icon, TabGrandEx2IconName, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  v20 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v20,
          &v23,
          (int32_t)entity[4].monitor,
          (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  name = this->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6990/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/,
                                                                  0);
  if ( !v23
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)Master_object,
                                                                        (Il2CppObject *)v23[1].monitor,
                                                                        0),
        !name) )
  {
LABEL_32:
    sub_1C71608(Master_object, v19);
  }
  UILabel__set_text(name, (System_String_o *)Master_object, 0);
}


void ClassBoardBaseClassIconNameComponent__Setup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  ClassBoardBaseClassIconNameComponent_c *v5; // x0
  UISprite_o *icon; // x21
  System_String_o *TabBtnNameFormat; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CCAE78 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    byte_4CCAE78 = 1;
  }
  v5 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v5 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TabBtnNameFormat = v5->static_fields->TabBtnNameFormat;
  v12 = classBaseId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v9 = System_String__Format(TabBtnNameFormat, v8, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0 )
LABEL_15:
    sub_1C71608(Master_object, v11);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0);
}


void ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}