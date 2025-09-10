void ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2AC30 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_18604/*"dialog_icon_10004"*/);
    sub_1C2D490(&StringLiteral_18605/*"dialog_icon_10005"*/);
    sub_1C2D490(&StringLiteral_17525/*"btn_tab_{0}"*/);
    sub_1C2D490(&StringLiteral_17977/*"class2_{0}"*/);
    byte_4C2AC30 = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TabBtnNameFormat = (struct System_String_o *)StringLiteral_17525/*"btn_tab_{0}"*/;
  sub_1C2D434(
    (CGThumbnailListItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17525/*"btn_tab_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_17977/*"class2_{0}"*/;
  static_fields = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  static_fields->TabGrandBtnNameFormat = (struct System_String_o *)StringLiteral_17977/*"class2_{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->TabGrandBtnNameFormat, v3, v5, v6);
  v7 = StringLiteral_18604/*"dialog_icon_10004"*/;
  v8 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v8->TabGrandEx1IconName = (struct System_String_o *)StringLiteral_18604/*"dialog_icon_10004"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v8->TabGrandEx1IconName, v7, v9, v10);
  v11 = StringLiteral_18605/*"dialog_icon_10005"*/;
  v12 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v12->TabGrandEx2IconName = (struct System_String_o *)StringLiteral_18605/*"dialog_icon_10005"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->TabGrandEx2IconName, v11, v13, v14);
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
  __int64 v3; // x3
  __int64 v4; // x4
  BalanceConfig_c *v7; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ClassBoardBaseClassIconNameComponent_c *v9; // x0
  UISprite_o *icon; // x21
  AtlasManager_c *v11; // x8
  System_String_o *TabGrandEx2IconName; // x22
  ClassBoardBaseClassIconNameComponent_c *v13; // x0
  int32_t GrandEx2Id; // w25
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v15; // x8
  AtlasManager_c *v16; // x0
  System_String_o *TabGrandBtnNameFormat; // x22
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  UILabel_o *name; // x19
  int32_t v24; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v25; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C2AC2F & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6988/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/);
    byte_4C2AC2F = 1;
  }
  v7 = BalanceConfig_TypeInfo;
  v25 = 0;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  if ( static_fields->GrandEx1Id != classBaseId )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v13 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    GrandEx2Id = static_fields->GrandEx2Id;
    icon = this->fields.icon;
    if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
      v13 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    }
    v15 = v13->static_fields;
    if ( GrandEx2Id == classBaseId )
    {
      v16 = AtlasManager_TypeInfo;
      TabGrandEx2IconName = v15->TabGrandEx2IconName;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
        goto LABEL_20;
      goto LABEL_19;
    }
    TabGrandBtnNameFormat = v15->TabGrandBtnNameFormat;
    v24 = classBaseId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, method, v3, v4);
    v19 = System_String__Format(TabGrandBtnNameFormat, v18, 0);
    v11 = AtlasManager_TypeInfo;
    TabGrandEx2IconName = v19;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
      goto LABEL_20;
LABEL_18:
    v16 = v11;
LABEL_19:
    j_il2cpp_runtime_class_init_0(v16);
    goto LABEL_20;
  }
  v9 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v9 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  v11 = AtlasManager_TypeInfo;
  TabGrandEx2IconName = v9->static_fields->TabGrandEx1IconName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    goto LABEL_18;
LABEL_20:
  AtlasManager__SetClassIconSprite(icon, TabGrandEx2IconName, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  v22 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v22,
          &v25,
          (int32_t)entity[4].monitor,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  name = this->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6988/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/,
                                                                  0);
  if ( !v25
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)Master_object,
                                                                        (Il2CppObject *)v25[1].monitor,
                                                                        0),
        !name) )
  {
LABEL_32:
    sub_1C2D6EC(Master_object, v21);
  }
  UILabel__set_text(name, (System_String_o *)Master_object, 0);
}


void ClassBoardBaseClassIconNameComponent__Setup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ClassBoardBaseClassIconNameComponent_c *v7; // x0
  UISprite_o *icon; // x21
  System_String_o *TabBtnNameFormat; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C2AC2E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C2D490(&int_TypeInfo);
    byte_4C2AC2E = 1;
  }
  v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TabBtnNameFormat = v7->static_fields->TabBtnNameFormat;
  v14 = classBaseId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4);
  v11 = System_String__Format(TabBtnNameFormat, v10, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v11, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0 )
LABEL_15:
    sub_1C2D6EC(Master_object, v13);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0);
}


void ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}