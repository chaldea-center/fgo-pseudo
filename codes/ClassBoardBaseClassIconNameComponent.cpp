void __fastcall ClassBoardBaseClassIconNameComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A7323D & 1) == 0 )
  {
    sub_1B90010(&ClassBoardBaseClassIconNameComponent_TypeInfo, v1);
    sub_1B90010(&StringLiteral_17572/*"btn_tab_{0}"*/, v4);
    byte_4A7323D = 1;
  }
  ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17572/*"btn_tab_{0}"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ClassBoardBaseClassIconNameComponent_TypeInfo->static_fields,
    StringLiteral_17572/*"btn_tab_{0}"*/,
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ClassBoardBaseClassIconNameComponent_c *v12; // x0
  UISprite_o *icon; // x21
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v18; // x1
  int32_t v19; // [xsp+Ch] [xbp-44h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A7323C & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, *(_QWORD *)&classBaseId);
    sub_1B90010(&ClassBoardBaseClassIconNameComponent_TypeInfo, v7);
    sub_1B90010(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v8);
    sub_1B90010(&DataManager_TypeInfo, v9);
    sub_1B90010(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v10);
    sub_1B90010(&int_TypeInfo, v11);
    byte_4A7323C = 1;
  }
  v12 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  entity = 0LL;
  icon = this->fields.icon;
  if ( !ClassBoardBaseClassIconNameComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseClassIconNameComponent_TypeInfo);
    v12 = ClassBoardBaseClassIconNameComponent_TypeInfo;
  }
  TAB_BTN_NAME_FORMAT = v12->static_fields->TAB_BTN_NAME_FORMAT;
  v19 = classBaseId;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, method, v3, v4);
  v16 = System_String__Format(TAB_BTN_NAME_FORMAT, v15, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(icon, v16, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  classBaseId,
                                                                  (const MethodInfo_312C5FC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.name) == 0LL )
LABEL_15:
    sub_1B9026C(Master_object, v18);
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)entity[1].monitor, 0LL);
}


void __fastcall ClassBoardBaseClassIconNameComponent__Validation(
        ClassBoardBaseClassIconNameComponent_o *this,
        const MethodInfo *method)
{
  ;
}