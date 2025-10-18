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

  if ( (byte_4C46960 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C37058(&StringLiteral_18614/*"dialog_icon_10004"*/);
    sub_1C37058(&StringLiteral_18615/*"dialog_icon_10005"*/);
    sub_1C37058(&StringLiteral_17531/*"btn_tab_{0}"*/);
    sub_1C37058(&StringLiteral_17983/*"class2_{0}"*/);
    byte_4C46960 = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TabBtnNameFormat = (struct System_String_o *)StringLiteral_17531/*"btn_tab_{0}"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17531/*"btn_tab_{0}"*/,
    v1,
    v2);
  v3 = StringLiteral_17983/*"class2_{0}"*/;
  static_fields = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  static_fields->TabGrandBtnNameFormat = (struct System_String_o *)StringLiteral_17983/*"class2_{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->TabGrandBtnNameFormat, v3, v5, v6);
  v7 = StringLiteral_18614/*"dialog_icon_10004"*/;
  v8 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v8->TabGrandEx1IconName = (struct System_String_o *)StringLiteral_18614/*"dialog_icon_10004"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->TabGrandEx1IconName, v7, v9, v10);
  v11 = StringLiteral_18615/*"dialog_icon_10005"*/;
  v12 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v12->TabGrandEx2IconName = (struct System_String_o *)StringLiteral_18615/*"dialog_icon_10005"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->TabGrandEx2IconName, v11, v13, v14);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  UILabel_o *name; // x19
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF
  Il2CppObject *v27; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C4695F & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_6994/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/);
    byte_4C4695F = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  v27 = 0;
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
    v26 = classBaseId;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, method, v3, v4, v5, v6, v7);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_32;
  v24 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_32;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v24,
          &v27,
          (int32_t)entity[4].monitor,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  name = this->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6994/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/,
                                                                  0);
  if ( !v27
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)Master_object,
                                                                        (Il2CppObject *)v27[1].monitor,
                                                                        0),
        !name) )
  {
LABEL_32:
    sub_1C372B4(Master_object);
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
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C4695E & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C37058(&int_TypeInfo);
    byte_4C4695E = 1;
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
  v16 = classBaseId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, method, v3, v4, v5, v6, v7);
  v14 = System_String__Format(TabBtnNameFormat, v13, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v14, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0 )
LABEL_15:
    sub_1C372B4(Master_object);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0);
}


void ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}