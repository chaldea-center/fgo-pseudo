void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct ClassBoardBaseClassIconNameComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B057FC & 1) == 0 )
  {
    sub_1BC3008(&ClassBoardBaseClassIconNameComponent_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_17375/*"btn_tab_{0}"*/, v4);
    sub_1BC3008(&StringLiteral_17820/*"class2_{0}"*/, v5);
    byte_4B057FC = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TabBtnNameFormat = (struct System_String_o *)StringLiteral_17375/*"btn_tab_{0}"*/;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17375/*"btn_tab_{0}"*/,
    v2,
    v3);
  v6 = StringLiteral_17820/*"class2_{0}"*/;
  static_fields = ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  static_fields->TabGrandBtnNameFormat = (struct System_String_o *)StringLiteral_17820/*"class2_{0}"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->TabGrandBtnNameFormat, v6, v8, v9);
}


void __fastcall ClassBoardBaseClassIconNameComponent___ctor(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Awake(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBaseClassIconNameComponent__GrandSetup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ClassBoardBaseClassIconNameComponent_c *v14; // x0
  UISprite_o *icon; // x21
  System_String_o *TabGrandBtnNameFormat; // x22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v20; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x21
  UILabel_o *name; // x19
  int32_t v23; // [xsp+4h] [xbp-4Ch] BYREF
  Il2CppObject *v24; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B057FB & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&classBaseId);
    sub_1BC3008(&ClassBoardBaseClassIconNameComponent_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_6934/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/, v13);
    byte_4B057FB = 1;
  }
  v14 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0LL;
  v24 = 0LL;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v14 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TabGrandBtnNameFormat = v14->static_fields->TabGrandBtnNameFormat;
  v23 = classBaseId;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, method, v3, v4);
  v18 = System_String__Format(TabGrandBtnNameFormat, v17, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v18, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_19;
  v21 = Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v21,
          &v24,
          (int32_t)entity[4].monitor,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  name = this->fields.name;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_6934/*"GRAND_CLASS_BOARD_RELEASE_DIALOG_CLASS_TEXT"*/,
                                                                  0LL);
  if ( !v24
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                        (System_String_o *)Master_object,
                                                                        (Il2CppObject *)v24[1].monitor,
                                                                        0LL),
        !name) )
  {
LABEL_19:
    sub_1BC3264(Master_object, v20);
  }
  UILabel__set_text(name, (System_String_o *)Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBaseClassIconNameComponent__Setup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ClassBoardBaseClassIconNameComponent_c *v12; // x0
  UISprite_o *icon; // x21
  System_String_o *TabBtnNameFormat; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B057FA & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, *(_QWORD *)&classBaseId);
    sub_1BC3008(&ClassBoardBaseClassIconNameComponent_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v8);
    sub_1BC3008(&DataManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    byte_4B057FA = 1;
  }
  v12 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0LL;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v12 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TabBtnNameFormat = v12->static_fields->TabBtnNameFormat;
  v19 = classBaseId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, method, v3, v4);
  v16 = System_String__Format(TabBtnNameFormat, v15, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v16, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0LL )
LABEL_15:
    sub_1BC3264(Master_object, v18);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}