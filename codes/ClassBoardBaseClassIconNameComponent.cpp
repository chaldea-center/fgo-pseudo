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

  if ( (byte_4C5A757 & 1) == 0 )
  {
    sub_1C3E564(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_18632/*"dialog_icon_10004"*/);
    sub_1C3E564(&StringLiteral_18633/*"dialog_icon_10005"*/);
    sub_1C3E564(&StringLiteral_17548/*"btn_tab_{0}"*/);
    sub_1C3E564(&StringLiteral_18000/*"class2_{0}"*/);
    byte_4C5A757 = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TabBtnNameFormat = (struct System_String_o *)StringLiteral_17548/*"btn_tab_{0}"*/;
  sub_1C3E508(
    (CGThumbnailListItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17548/*"btn_tab_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_18000/*"class2_{0}"*/;
  static_fields = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  static_fields->TabGrandBtnNameFormat = (struct System_String_o *)StringLiteral_18000/*"class2_{0}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->TabGrandBtnNameFormat, v3, v5, v6);
  v7 = StringLiteral_18632/*"dialog_icon_10004"*/;
  v8 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v8->TabGrandEx1IconName = (struct System_String_o *)StringLiteral_18632/*"dialog_icon_10004"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v8->TabGrandEx1IconName, v7, v9, v10);
  v11 = StringLiteral_18633/*"dialog_icon_10005"*/;
  v12 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v12->TabGrandEx2IconName = (struct System_String_o *)StringLiteral_18633/*"dialog_icon_10005"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v12->TabGrandEx2IconName, v11, v13, v14);
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  ClassBoardBaseClassIconNameComponent_c *v12; // x0
  UISprite_o *icon; // x21
  AtlasManager_c *v14; // x8
  System_String_o *TabGrandEx2IconName; // x22
  ClassBoardBaseClassIconNameComponent_c *v16; // x0
  int32_t GrandEx2Id; // w25
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v18; // x8
  AtlasManager_c *v19; // x0
  System_String_o *TabGrandBtnNameFormat; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v24; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  UILabel_o *name; // x19
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v28; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C5A756 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&StringLiteral_6994/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/);
    byte_4C5A756 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  v28 = 0;
  entity = 0;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  static_fields = v10->static_fields;
  if ( static_fields->GrandEx1Id != classBaseId )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v16 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    GrandEx2Id = static_fields->GrandEx2Id;
    icon = this->fields.icon;
    if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
      v16 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    }
    v18 = v16->static_fields;
    if ( GrandEx2Id == classBaseId )
    {
      v19 = AtlasManager_TypeInfo;
      TabGrandEx2IconName = v18->TabGrandEx2IconName;
      if ( AtlasManager_TypeInfo->_2.cctor_finished )
        goto LABEL_20;
      goto LABEL_19;
    }
    TabGrandBtnNameFormat = v18->TabGrandBtnNameFormat;
    v27 = classBaseId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, method, v3, v4, v5, v6, v7);
    v22 = System_String__Format(TabGrandBtnNameFormat, v21, 0);
    v14 = AtlasManager_TypeInfo;
    TabGrandEx2IconName = v22;
    if ( AtlasManager_TypeInfo->_2.cctor_finished )
      goto LABEL_20;
LABEL_18:
    v19 = v14;
LABEL_19:
    j_il2cpp_runtime_class_init_0(v19);
    goto LABEL_20;
  }
  v12 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v12 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  v14 = AtlasManager_TypeInfo;
  TabGrandEx2IconName = v12->static_fields->TabGrandEx1IconName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    goto LABEL_18;
LABEL_20:
  AtlasManager__SetClassIconSprite(icon, TabGrandEx2IconName, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  v25 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v25,
          &v28,
          (int32_t)entity[4].monitor,
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  name = this->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6994/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/,
                                                                  0);
  if ( !v28
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)Master_object,
                                                                        (Il2CppObject *)v28[1].monitor,
                                                                        0),
        !name) )
  {
LABEL_32:
    sub_1C3E7C0(Master_object, v24);
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  ClassBoardBaseClassIconNameComponent_c *v10; // x0
  UISprite_o *icon; // x21
  System_String_o *TabBtnNameFormat; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C5A755 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C3E564(&int_TypeInfo);
    byte_4C5A755 = 1;
  }
  v10 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v10 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TabBtnNameFormat = v10->static_fields->TabBtnNameFormat;
  v17 = classBaseId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, method, v3, v4, v5, v6, v7);
  v14 = System_String__Format(TabBtnNameFormat, v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v14, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0 )
LABEL_15:
    sub_1C3E7C0(Master_object, v16);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0);
}


void ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}