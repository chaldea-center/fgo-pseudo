void __fastcall EventInfoAssistComponent___ctor(EventInfoAssistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoAssistComponent__Awake(EventInfoAssistComponent_o *this, const MethodInfo *method)
{
  ;
}


float __fastcall EventInfoAssistComponent__GetHeight(EventInfoAssistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *skillDetailLabel; // x20
  __int64 v4; // x1
  float result; // s0
  struct UILabel_o *v6; // x0
  float v7; // s1

  if ( (byte_4B025A8 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B025A8 = 1;
  }
  skillDetailLabel = (UnityEngine_Object_o *)this->fields.skillDetailLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(skillDetailLabel, 0LL, 0LL) )
    return this->fields.minHeight;
  v6 = this->fields.skillDetailLabel;
  if ( !v6 )
    sub_1BC3264(0LL, v4);
  ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v6->klass->vtable._22_get_localSize.method)(
    v6,
    v6->klass->vtable._23_get_drawingDimensions.methodPtr);
  result = v7 + this->fields.offsetHeight;
  if ( this->fields.minHeight > result )
    return this->fields.minHeight;
  return result;
}


void __fastcall EventInfoAssistComponent__Setup(
        EventInfoAssistComponent_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  bool IsOpen; // w0
  UnityEngine_Object_o *skillIconSprite; // x22
  bool v18; // w21
  UISprite_o *v19; // x22
  int32_t skillId; // w23
  Il2CppObject *Master_object; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  EventInfoAssistComponent___c_c *v24; // x8
  System_Collections_Generic_List_T__o *v25; // x22
  System_Func_object__bool__o *_9__10_0; // x23
  Il2CppObject *v27; // x24
  struct EventInfoAssistComponent___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w26
  UILabel_o *nameLabel; // x22
  System_String_o *v33; // x23
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  struct System_String_o *name; // x25
  Il2CppObject *v37; // x24
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  const MethodInfo *v41; // x3
  Il2CppObject *v42; // x25
  UILabel_o *skillDetailLabel; // x22
  System_String_o *Detail; // x0
  UnityEngine_GameObject_o *stateUpIcon; // x22
  bool IsStateUpIconDisp; // w0
  UILabel_o *statusLabel; // x22
  System_String_o *RenoDetailDialogText; // x0
  bool v49; // w21
  UILabel_o *releaseConditionMessageLabel; // x22
  System_String_o *ReleaseConditionMessage; // x0
  __int64 v52; // x0
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B025A7 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, entity);
    sub_1BC3008(&Method_BasicHelper_Any_AssistEntity___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_AssistMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v8);
    sub_1BC3008(&int_TypeInfo, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&object___TypeInfo, v11);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v12);
    sub_1BC3008(&Method_EventInfoAssistComponent___c__Setup_b__10_0__, v13);
    sub_1BC3008(&EventInfoAssistComponent___c_TypeInfo, v14);
    sub_1BC3008(&StringLiteral_5566/*"EVENT_INFO_ASSIST_NAME"*/, v15);
    byte_4B025A7 = 1;
  }
  if ( entity )
  {
    IsOpen = AssistEntity__IsOpen(entity, 0LL);
    skillIconSprite = (UnityEngine_Object_o *)this->fields.skillIconSprite;
    v18 = IsOpen;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillIconSprite, 0LL, 0LL) )
    {
      v19 = this->fields.skillIconSprite;
      skillId = entity->fields.skillId;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetSkillIcon(v19, skillId, 0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AssistMaster___);
    if ( !Master_object )
      goto LABEL_36;
    EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(
                               (AssistMaster_o *)Master_object,
                               entity->fields.id,
                               0LL);
    v24 = EventInfoAssistComponent___c_TypeInfo;
    v25 = (System_Collections_Generic_List_T__o *)EntityListFromAssistId;
    if ( !EventInfoAssistComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoAssistComponent___c_TypeInfo);
      v24 = EventInfoAssistComponent___c_TypeInfo;
    }
    _9__10_0 = (System_Func_object__bool__o *)v24->static_fields->__9__10_0;
    if ( !_9__10_0 )
    {
      if ( !v24->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v24);
        v24 = EventInfoAssistComponent___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v24->static_fields->__9;
      _9__10_0 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__10_0, v27, Method_EventInfoAssistComponent___c__Setup_b__10_0__, 0LL);
      static_fields = EventInfoAssistComponent___c_TypeInfo->static_fields;
      static_fields->__9__10_0 = (struct System_Func_AssistEntity__bool__o *)_9__10_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v29, v30);
    }
    if ( !BasicHelper__Any_object_(
            v25,
            (System_Func_T__bool__o *)_9__10_0,
            (const MethodInfo_2FEB2DC *)Method_BasicHelper_Any_AssistEntity___) )
    {
      UILabelHelper__SetTextSafely(this->fields.nameLabel, entity->fields.name, 0LL);
LABEL_34:
      skillDetailLabel = this->fields.skillDetailLabel;
      Detail = AssistEntity__GetDetail(entity, 0, 0LL);
      UILabelHelper__SetTextSafely(skillDetailLabel, Detail, 0LL);
      stateUpIcon = this->fields.stateUpIcon;
      IsStateUpIconDisp = AssistEntity__IsStateUpIconDisp(entity, 0LL);
      GameObjectHelper__SetActiveSafely(stateUpIcon, IsStateUpIconDisp, 0LL);
      statusLabel = this->fields.statusLabel;
      RenoDetailDialogText = AssistEntity__GetRenoDetailDialogText(entity, 0LL);
      UILabelHelper__SetTextSafely(statusLabel, RenoDetailDialogText, 0LL);
      v49 = !v18;
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.releaseConditionMessageLabel, v49, 0LL);
      releaseConditionMessageLabel = this->fields.releaseConditionMessageLabel;
      ReleaseConditionMessage = AssistEntity__GetReleaseConditionMessage(entity, 0LL);
      UILabelHelper__SetTextSafely(releaseConditionMessageLabel, ReleaseConditionMessage, 0LL);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.lockedSprite, v49, 0LL);
      return;
    }
    v31 = v18 ? entity->fields.lv : 0;
    nameLabel = this->fields.nameLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5566/*"EVENT_INFO_ASSIST_NAME"*/, 0LL);
    Master_object = (Il2CppObject *)sub_1BC30B0(object___TypeInfo, 2LL);
    if ( !Master_object )
LABEL_36:
      sub_1BC3264(Master_object, v22);
    name = entity->fields.name;
    v37 = Master_object;
    if ( !name
      || (Master_object = (Il2CppObject *)sub_1BC3144(entity->fields.name, Master_object->klass->_1.element_class)) != 0LL )
    {
      if ( !LODWORD(v37[1].monitor) )
        goto LABEL_37;
      v37[2].klass = (Il2CppClass *)name;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v37[2], (int32_t)name, v34, v35);
      v53 = v31;
      Master_object = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v38, v39, v40);
      v42 = Master_object;
      if ( !Master_object
        || (Master_object = (Il2CppObject *)sub_1BC3144(Master_object, v37->klass->_1.element_class)) != 0LL )
      {
        if ( LODWORD(v37[1].monitor) > 1 )
        {
          v37[2].monitor = v42;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v37[2].monitor, (int32_t)v42, v34, v41);
          UILabelHelper__SetTextSafely_43121888(nameLabel, v33, (System_Object_array *)v37, 0LL);
          goto LABEL_34;
        }
LABEL_37:
        sub_1BC326C(Master_object, v22, v34);
      }
    }
    v52 = sub_1BC3288(Master_object);
    sub_1BC3130(v52, 0LL);
  }
}


void __fastcall EventInfoAssistComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B025A9 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoAssistComponent___c_TypeInfo, v1);
    byte_4B025A9 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventInfoAssistComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoAssistComponent___c_TypeInfo->static_fields->__9 = (struct EventInfoAssistComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventInfoAssistComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventInfoAssistComponent___c___ctor(EventInfoAssistComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventInfoAssistComponent___c___Setup_b__10_0(
        EventInfoAssistComponent___c_o *this,
        AssistEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1BC3264(this, 0LL);
  return AssistEntity__IsStateUpIconDisp(v, 0LL);
}