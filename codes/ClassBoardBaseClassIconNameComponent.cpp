void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4352B94 & 1) == 0 )
  {
    sub_B70694(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_B70694(&StringLiteral_17283/*"btn_tab_{0}"*/);
    byte_4352B94 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_17283/*"btn_tab_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17283/*"btn_tab_{0}"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
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


void __fastcall ClassBoardBaseClassIconNameComponent__Setup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  UISprite_o *icon; // x21
  ClassBoardBaseClassIconNameComponent_c *v6; // x0
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v8; // x0
  System_String_o *v9; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4352B93 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_B70694(&int_TypeInfo);
    byte_4352B93 = 1;
  }
  entity = 0LL;
  icon = this->fields.icon;
  v6 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  if ( (BYTE3(ClassBoardBaseClassIconNameComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v6 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v6->static_fields->TAB_BTN_NAME_FORMAT;
  v12 = classBaseId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, method);
  v9 = System_String__Format(TAB_BTN_NAME_FORMAT, v8, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v9, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    &entity,
                                                                                    classBaseId,
                                                                                    (const MethodInfo_21C049C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.name) == 0LL )
  {
LABEL_18:
    sub_B7076C(Master_WarQuestSelectionMaster, v11);
  }
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, entity->fields.age, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}