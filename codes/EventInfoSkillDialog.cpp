void EventInfoSkillDialog___ctor(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D32802 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D32802 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillDialog__Awake(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillDialog__OnClose(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_4D32801 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoSkillDialog_OnClose__);
    sub_1C93AD4(&Method_EventInfoSkillDialog__OnClose_b__15_0__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32801 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    this->fields.canTap = 0;
    v4 = Method_EventInfoSkillDialog_OnClose__;
    if ( (*((_BYTE *)Method_EventInfoSkillDialog_OnClose__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C93AEC(Method_EventInfoSkillDialog_OnClose__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoSkillDialog__OnClose_b__15_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  }
}


void EventInfoSkillDialog__Open(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        System_Action_o *inOnClosed,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_Object_o *closeBtn; // x22
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x3

  if ( (byte_4D327FF & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_EventInfoSkillDialog__Open_b__13_0__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D327FF = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.onClosed,
    (int32_t)inOnClosed,
    (int32_t)atlasList,
    (int32_t)inOnClosed,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EventInfoSkillDialog__Open_b__13_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
  EventInfoSkillDialog__SetupSkillInfo(this, imagePartsGroupId, atlasList, v14);
}


void EventInfoSkillDialog__SetupSkillInfo(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        const MethodInfo *method)
{
  ImagePartsGroupMaster_o *Master_object; // x0
  __int64 v8; // x1
  ImagePartsGroupEntity_array *OpenEntities; // x0
  EventInfoSkillDialog___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  System_Func_object__bool__o *_9__14_0; // x22
  Il2CppObject *v13; // x23
  struct EventInfoSkillDialog___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  ImagePartsGroupMaster_o *v22; // x21
  struct System_String_o *MasterName_k__BackingField; // x8
  UnityEngine_GameObject_o *noSkillObject; // x0
  _BOOL8 v25; // x0
  struct System_String_o *v26; // x8
  unsigned __int64 v27; // x25
  float v28; // s8
  ImagePartsGroupEntity_o *v29; // x22
  Il2CppObject *v30; // x23
  const MethodInfo *v31; // x4
  const MethodInfo *v32; // x1
  UnityEngine_Object_o *noScrollSkillParent; // x20
  float v34; // s8
  UnityEngine_Object_o *skillScrollView; // x20
  struct UIScrollView_o *v36; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v38; // x8

  if ( (byte_4D32800 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_1C93AD4(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_EventInfoSkillDialog___c__SetupSkillInfo_b__14_0__);
    sub_1C93AD4(&EventInfoSkillDialog___c_TypeInfo);
    byte_4D32800 = 1;
  }
  TransformHelper__DestroyChildren(this->fields.skillParent, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_45;
  OpenEntities = ImagePartsGroupMaster__GetOpenEntities(Master_object, imagePartsGroupId, 0);
  v10 = EventInfoSkillDialog___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenEntities;
  if ( !EventInfoSkillDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventInfoSkillDialog___c_TypeInfo);
    v10 = EventInfoSkillDialog___c_TypeInfo;
  }
  _9__14_0 = (System_Func_object__bool__o *)v10->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = EventInfoSkillDialog___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__14_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__14_0, v13, Method_EventInfoSkillDialog___c__SetupSkillInfo_b__14_0__, 0);
    static_fields = EventInfoSkillDialog___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__14_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
      (int32_t)_9__14_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)_9__14_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  Master_object = (ImagePartsGroupMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                               v21,
                                               (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
  if ( !Master_object )
    goto LABEL_45;
  v22 = Master_object;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  noSkillObject = this->fields.noSkillObject;
  if ( !MasterName_k__BackingField )
  {
    GameObjectHelper__SetActiveSafely(noSkillObject, 1, 0);
    return;
  }
  GameObjectHelper__SetActiveSafely(noSkillObject, 0, 0);
  v26 = v22->fields._MasterName_k__BackingField;
  if ( (int)v26 < 1 )
  {
    v28 = 0.0;
  }
  else
  {
    v27 = 0;
    v28 = 0.0;
    do
    {
      if ( v27 >= (unsigned int)v26 )
        sub_1C93D34(v25);
      v29 = (ImagePartsGroupEntity_o *)*((_QWORD *)&v22->fields.revision + v27);
      v30 = GameObjectHelper__Instantiate_object_(
              this->fields.skillPrefab,
              this->fields.skillParent,
              0,
              (const MethodInfo_31FDCA8 *)Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v25 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, 0, 0);
      if ( !v25 )
      {
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v30, 1, 0);
        if ( !v30 )
          goto LABEL_45;
        EventInfoSkillDetailComponent__Setup(
          (EventInfoSkillDetailComponent_o *)v30,
          v29,
          atlasList,
          v27 != LODWORD(v22->fields._MasterName_k__BackingField) - 1,
          v31);
        ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v30, -v28, 0);
        v28 = v28 + EventInfoSkillDetailComponent__GetHeight((EventInfoSkillDetailComponent_o *)v30, v32);
      }
      LODWORD(v26) = v22->fields._MasterName_k__BackingField;
      ++v27;
    }
    while ( (__int64)v27 < (int)v26 );
  }
  if ( this->fields.skillPivotType == 1 )
  {
    noScrollSkillParent = (UnityEngine_Object_o *)this->fields.noScrollSkillParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noScrollSkillParent, 0, 0) && v28 < this->fields.skillScrollViewHeight )
    {
      Master_object = (ImagePartsGroupMaster_o *)this->fields.skillParent;
      if ( !Master_object )
        goto LABEL_45;
      v34 = (float)(v28 * 0.5) + this->fields.noScrollSkillOffset;
      UnityEngine_Transform__SetParent_72143348(
        (UnityEngine_Transform_o *)Master_object,
        this->fields.noScrollSkillParent,
        0,
        0);
      TransformHelper__SetLocalPositionY(this->fields.noScrollSkillParent, v34, 0);
    }
  }
  skillScrollView = (UnityEngine_Object_o *)this->fields.skillScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(skillScrollView, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v36 = this->fields.skillScrollView;
    if ( !v36 )
      goto LABEL_45;
    verticalScrollBar = (UnityEngine_Object_o *)v36->fields.verticalScrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v38 = this->fields.skillScrollView;
      if ( v38 )
      {
        Master_object = (ImagePartsGroupMaster_o *)v38->fields.verticalScrollBar;
        if ( Master_object )
        {
          UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
          return;
        }
      }
LABEL_45:
      sub_1C93D2C(Master_object, v8);
    }
  }
}


void EventInfoSkillDialog___OnClose_b__15_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x20
  GrandQuestFolderBoardItem_o *p_onClosed; // x19
  System_Action_o *onClosed; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D32803 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D32803 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
  onClosed = this->fields.onClosed;
  p_onClosed = (GrandQuestFolderBoardItem_o *)&this->fields.onClosed;
  ActionExtensions__Call(onClosed, 0);
  p_onClosed->klass = 0;
  sub_1C93A78(p_onClosed, 0, v6, v7, v8, v9, v10, v11);
}


void EventInfoSkillDialog___Open_b__13_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}


void EventInfoSkillDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D32804 & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoSkillDialog___c_TypeInfo);
    byte_4D32804 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventInfoSkillDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSkillDialog___c_TypeInfo->static_fields->__9 = (struct EventInfoSkillDialog___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoSkillDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoSkillDialog___c___ctor(EventInfoSkillDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventInfoSkillDialog___c___SetupSkillInfo_b__14_0(
        EventInfoSkillDialog___c_o *this,
        ImagePartsGroupEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C93D2C(this, 0);
  return ImagePartsGroupEntity__ExistsSkill(v, 0);
}