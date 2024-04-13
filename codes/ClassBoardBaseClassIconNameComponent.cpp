void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E9BCD & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardBaseClassIconNameComponent_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_17236/*"btn_tab_{0}"*/, v8, v9, v10);
    byte_42E9BCD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_17236/*"btn_tab_{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17236/*"btn_tab_{0}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UISprite_o *icon; // x21
  ClassBoardBaseClassIconNameComponent_c *v22; // x0
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v27; // x1
  int32_t v28; // [xsp+4h] [xbp-2Ch] BYREF
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9BCC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, classBaseId, (_DWORD)method, v3);
    sub_B5D5C4(&ClassBoardBaseClassIconNameComponent_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&int_TypeInfo, v18, v19, v20);
    byte_42E9BCC = 1;
  }
  entity = 0LL;
  icon = this->fields.icon;
  v22 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  if ( (BYTE3(ClassBoardBaseClassIconNameComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v22 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v22->static_fields->TAB_BTN_NAME_FORMAT;
  v28 = classBaseId;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v25 = System_String__Format(TAB_BTN_NAME_FORMAT, v24, 0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v25, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    &entity,
                                                                                    classBaseId,
                                                                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return;
  if ( !entity
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.name) == 0LL )
  {
LABEL_18:
    sub_B5D69C(Master_WarQuestSelectionMaster, v27);
  }
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, entity->fields.age, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}