void ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59745FA & 1) == 0 )
  {
    sub_2213A60(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_2213A60(&StringLiteral_19454/*"dialog_icon_10004"*/);
    sub_2213A60(&StringLiteral_19455/*"dialog_icon_10005"*/);
    sub_2213A60(&StringLiteral_18299/*"btn_tab_{0}"*/);
    sub_2213A60(&StringLiteral_18776/*"class2_{0}"*/);
    byte_59745FA = 1;
  }
  v7 = StringLiteral_18299/*"btn_tab_{0}"*/;
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TabBtnNameFormat = (struct System_String_o *)StringLiteral_18299/*"btn_tab_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18776/*"class2_{0}"*/;
  static_fields = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  static_fields->TabGrandBtnNameFormat = (struct System_String_o *)StringLiteral_18776/*"class2_{0}"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->TabGrandBtnNameFormat,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_19454/*"dialog_icon_10004"*/;
  v17 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v17->TabGrandEx1IconName = (struct System_String_o *)StringLiteral_19454/*"dialog_icon_10004"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->TabGrandEx1IconName, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_19455/*"dialog_icon_10005"*/;
  v25 = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v25->TabGrandEx2IconName = (struct System_String_o *)StringLiteral_19455/*"dialog_icon_10005"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->TabGrandEx2IconName, v24, v26, v27, v28, v29, v30, v31);
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


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *TabGrandEx1IconName; // x22
  __int64 v11; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x1
  UILabel_o *name; // x19
  ClassBoardBaseClassIconNameComponent_c *v17; // x0
  int32_t GrandEx2Id; // w9
  int v19; // w8
  struct ClassBoardBaseClassIconNameComponent_StaticFields *v20; // x8
  System_String_o *TabGrandBtnNameFormat; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x0
  int32_t v24; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *v25; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59745F9 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_7289/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/);
    byte_59745F9 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  entity = 0;
  v25 = 0;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&classBaseId);
    v5 = BalanceConfig_TypeInfo;
  }
  static_fields = v5->static_fields;
  if ( static_fields->GrandEx1Id == classBaseId )
  {
    v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    icon = this->fields.icon;
    if ( !*(&ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo, *(_QWORD *)&classBaseId);
      v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    }
    v9 = AtlasManager_TypeInfo;
    TabGrandEx1IconName = v7->static_fields->TabGrandEx1IconName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
LABEL_9:
      j_il2cpp_runtime_class_init_0(v9, *(_QWORD *)&classBaseId);
  }
  else
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&classBaseId);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    v17 = ClassBoardBaseClassIconNameComponent_TypeInfo;
    GrandEx2Id = static_fields->GrandEx2Id;
    icon = this->fields.icon;
    v19 = *(&ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished + 1);
    if ( GrandEx2Id == classBaseId )
    {
      if ( !v19 )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo, *(_QWORD *)&classBaseId);
        v17 = ClassBoardBaseClassIconNameComponent_TypeInfo;
      }
      v9 = AtlasManager_TypeInfo;
      TabGrandEx1IconName = v17->static_fields->TabGrandEx2IconName;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_9;
    }
    else
    {
      if ( !v19 )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo, *(_QWORD *)&classBaseId);
        v17 = ClassBoardBaseClassIconNameComponent_TypeInfo;
      }
      v20 = v17->static_fields;
      v24 = classBaseId;
      TabGrandBtnNameFormat = v20->TabGrandBtnNameFormat;
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v24);
      v23 = System_String__Format(TabGrandBtnNameFormat, v22, 0);
      v9 = AtlasManager_TypeInfo;
      TabGrandEx1IconName = v23;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        goto LABEL_9;
    }
  }
  AtlasManager__SetClassIconSprite(icon, TabGrandEx1IconName, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  v14 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_33;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v14,
          &v25,
          (int32_t)entity[4].monitor,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  name = this->fields.name;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_7289/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/,
                                                                  0);
  if ( !v25
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)Master_object,
                                                                        (Il2CppObject *)v25[1].monitor,
                                                                        0),
        !name) )
  {
LABEL_33:
    sub_2213CDC(Master_object, v13);
  }
  UILabel__set_text(name, (System_String_o *)Master_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardBaseClassIconNameComponent__Setup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  ClassBoardBaseClassIconNameComponent_c *v5; // x0
  int v6; // w8
  UISprite_o *icon; // x21
  System_String_o *TabBtnNameFormat; // x22
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x22
  __int64 v12; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_59745F8 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_59745F8 = 1;
  }
  v5 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  v6 = *(&ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished + 1);
  icon = this->fields.icon;
  entity = 0;
  if ( !v6 )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo, *(_QWORD *)&classBaseId);
    v5 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TabBtnNameFormat = v5->static_fields->TabBtnNameFormat;
  v15 = classBaseId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15);
  v11 = System_String__Format(TabBtnNameFormat, v9, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__SetClassIconSprite(icon, v11, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0 )
LABEL_15:
    sub_2213CDC(Master_object, v14);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0);
}


void ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}