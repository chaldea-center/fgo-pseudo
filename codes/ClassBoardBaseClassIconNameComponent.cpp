void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_49FF668 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardBaseClassIconNameComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_17477/*"btn_tab_{0}"*/, v4);
    byte_49FF668 = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17477/*"btn_tab_{0}"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17477/*"btn_tab_{0}"*/,
    v2,
    v3);
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
  ClassBoardBaseClassIconNameComponent_c *v10; // x0
  UISprite_o *icon; // x21
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int32_t v16; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49FF667 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&classBaseId);
    sub_1B640C8(&ClassBoardBaseClassIconNameComponent_TypeInfo, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    byte_49FF667 = 1;
  }
  v10 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0LL;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v10 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v10->static_fields->TAB_BTN_NAME_FORMAT;
  v16 = classBaseId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14 = System_String__Format(TAB_BTN_NAME_FORMAT, v13, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0LL )
LABEL_15:
    sub_1B64324(Master_object);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}