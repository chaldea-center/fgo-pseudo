void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40FAF90 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardBaseClassIconNameComponent_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16961, v8);
    byte_40FAF90 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16961;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16961;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
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
void __fastcall ClassBoardBaseClassIconNameComponent__Setup(
        ClassBoardBaseClassIconNameComponent_o *this,
        int32_t classBaseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UISprite_o *icon; // x21
  ClassBoardBaseClassIconNameComponent_c *v11; // x0
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  UILabel_o *name; // x0
  int32_t v17; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAF8F & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&classBaseId);
    sub_B16FFC(&ClassBoardBaseClassIconNameComponent_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    byte_40FAF8F = 1;
  }
  entity = 0LL;
  icon = this->fields.icon;
  v11 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  if ( (BYTE3(ClassBoardBaseClassIconNameComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v11 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v11->static_fields->TAB_BTN_NAME_FORMAT;
  v17 = classBaseId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v14 = System_String__Format(TAB_BTN_NAME_FORMAT, v13, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v14, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          classBaseId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return;
  if ( !entity || (name = this->fields.name) == 0LL )
LABEL_18:
    sub_B170D4();
  UILabel__set_text(name, entity->fields.age, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}