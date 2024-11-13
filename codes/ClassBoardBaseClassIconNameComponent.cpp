void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B19652 & 1) == 0 )
  {
    sub_1BCA7E0(&ClassBoardBaseClassIconNameComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_17724/*"btn_tab_{0}"*/, v8, v9);
    byte_4B19652 = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17724/*"btn_tab_{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17724/*"btn_tab_{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ClassBoardBaseClassIconNameComponent_c *v15; // x0
  UISprite_o *icon; // x21
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x22
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B19651 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&classBaseId, method);
    sub_1BCA7E0(&ClassBoardBaseClassIconNameComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    byte_4B19651 = 1;
  }
  v15 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0LL;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo, *(_QWORD *)&classBaseId);
    v15 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v15->static_fields->TAB_BTN_NAME_FORMAT;
  v24 = classBaseId;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v20 = System_String__Format(TAB_BTN_NAME_FORMAT, v18, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
  AtlasManager__SetClassIconSprite(icon, v20, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0LL )
LABEL_15:
    sub_1BCAA3C(Master_object, v23);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}