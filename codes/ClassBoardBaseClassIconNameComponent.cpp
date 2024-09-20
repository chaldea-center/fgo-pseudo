void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5E524 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_17547/*"btn_tab_{0}"*/);
    byte_4A5E524 = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17547/*"btn_tab_{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17547/*"btn_tab_{0}"*/,
    v1,
    v2);
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
  __int64 v4; // x4
  ClassBoardBaseClassIconNameComponent_c *v7; // x0
  UISprite_o *icon; // x21
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A5E523 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&ClassBoardBaseClassIconNameComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E523 = 1;
  }
  v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0LL;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v7 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v7->static_fields->TAB_BTN_NAME_FORMAT;
  v14 = classBaseId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, method, v3, v4);
  v11 = System_String__Format(TAB_BTN_NAME_FORMAT, v10, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v11, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0LL )
LABEL_15:
    sub_1B8880C(Master_object, v13);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}