void EventInfoSkillDialog___ctor(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5972642 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5972642 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoSkillDialog__Awake(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoSkillDialog__OnClose(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *closeBtn; // x20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_Action_o *v6; // x20

  if ( (byte_5972641 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillDialog_OnClose__);
    sub_2213A60(&Method_EventInfoSkillDialog__OnClose_b__15_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972641 = 1;
  }
  if ( this->fields.canTap )
  {
    closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
      AndroidBackKeyManager__RemoveBackBtn(this->fields.closeBtn, 0);
    v4 = Method_EventInfoSkillDialog_OnClose__;
    this->fields.canTap = 0;
    if ( (v4[83] & 2) != 0 )
      v4 = (_BYTE *)sub_2213A78(v4);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, *((_QWORD *)v4 + 4));
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  UnityEngine_Object_o *closeBtn; // x22
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_597263F & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillDialog__Open_b__13_0__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597263F = 1;
  }
  this->fields.onClosed = inOnClosed;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClosed,
    (int32_t)inOnClosed,
    (System_String_o *)atlasList,
    (System_String_o *)inOnClosed,
    (int32_t)method,
    v5,
    v6,
    v7);
  closeBtn = (UnityEngine_Object_o *)this->fields.closeBtn;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(closeBtn, 0, 0) )
    AndroidBackKeyManager__AddBackBtn(this->fields.closeBtn, 0);
  this->fields.canTap = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EventInfoSkillDialog__Open_b__13_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0, 0);
  EventInfoSkillDialog__SetupSkillInfo(this, imagePartsGroupId, atlasList, v15);
}


void EventInfoSkillDialog__SetupSkillInfo(
        EventInfoSkillDialog_o *this,
        int32_t imagePartsGroupId,
        System_Collections_Generic_List_UIAtlas__o *atlasList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  ImagePartsGroupMaster_o *Master_object; // x0
  __int64 v9; // x1
  ImagePartsGroupEntity_array *OpenEntities; // x0
  __int64 v11; // x1
  EventInfoSkillDialog___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x21
  struct EventInfoSkillDialog___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__14_0; // x22
  Il2CppObject *v16; // x23
  struct EventInfoSkillDialog___c_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  ImagePartsGroupMaster_o *v25; // x21
  struct System_String_o *MasterName_k__BackingField; // x8
  UnityEngine_GameObject_o *noSkillObject; // x0
  _BOOL8 v28; // x0
  struct System_String_o *v29; // x8
  float v30; // s8
  unsigned __int64 v31; // x25
  ImagePartsGroupEntity_o *v32; // x22
  __int64 v33; // x1
  Il2CppObject *v34; // x23
  const MethodInfo *v35; // x4
  const MethodInfo *v36; // x1
  UnityEngine_Object_o *noScrollSkillParent; // x20
  float v38; // s8
  UnityEngine_Object_o *skillScrollView; // x20
  struct UIScrollView_o *v40; // x8
  UnityEngine_Object_o *verticalScrollBar; // x20
  struct UIScrollView_o *v42; // x8

  if ( (byte_5972640 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ImagePartsGroupMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
    sub_2213A60(&System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    sub_2213A60(&Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_EventInfoSkillDialog___c__SetupSkillInfo_b__14_0__);
    sub_2213A60(&EventInfoSkillDialog___c_TypeInfo);
    byte_5972640 = 1;
  }
  TransformHelper__DestroyChildren(this->fields.skillParent, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (ImagePartsGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ImagePartsGroupMaster___);
  if ( !Master_object )
    goto LABEL_45;
  OpenEntities = ImagePartsGroupMaster__GetOpenEntities(Master_object, imagePartsGroupId, 0);
  v12 = EventInfoSkillDialog___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)OpenEntities;
  if ( !*(&EventInfoSkillDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventInfoSkillDialog___c_TypeInfo, v11);
    v12 = EventInfoSkillDialog___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__14_0 = (System_Func_object__bool__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      static_fields = EventInfoSkillDialog___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_ImagePartsGroupEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__14_0, v16, Method_EventInfoSkillDialog___c__SetupSkillInfo_b__14_0__, 0);
    v17 = EventInfoSkillDialog___c_TypeInfo->static_fields;
    v17->__9__14_0 = (struct System_Func_ImagePartsGroupEntity__bool__o *)_9__14_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->__9__14_0, (int32_t)_9__14_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)_9__14_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_ImagePartsGroupEntity___);
  Master_object = (ImagePartsGroupMaster_o *)System_Linq_Enumerable__ToArray_object_(
                                               v24,
                                               (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_ImagePartsGroupEntity___);
  if ( !Master_object )
    goto LABEL_45;
  v25 = Master_object;
  MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField;
  noSkillObject = this->fields.noSkillObject;
  if ( !MasterName_k__BackingField )
  {
    GameObjectHelper__SetActiveSafely(noSkillObject, 1, 0);
    return;
  }
  GameObjectHelper__SetActiveSafely(noSkillObject, 0, 0);
  v29 = v25->fields._MasterName_k__BackingField;
  if ( (int)v29 < 1 )
  {
    v30 = 0.0;
  }
  else
  {
    v30 = 0.0;
    v31 = 0;
    do
    {
      if ( v31 >= (unsigned int)v29 )
        sub_2213CE4(v28);
      v32 = (ImagePartsGroupEntity_o *)*((_QWORD *)&v25->fields.revision + v31);
      v34 = GameObjectHelper__Instantiate_object_(
              this->fields.skillPrefab,
              this->fields.skillParent,
              0,
              (const MethodInfo_38B88AC *)Method_GameObjectHelper_Instantiate_EventInfoSkillDetailComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
      v28 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0, 0);
      if ( !v28 )
      {
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v34, 1, 0);
        if ( !v34 )
          goto LABEL_45;
        EventInfoSkillDetailComponent__Setup(
          (EventInfoSkillDetailComponent_o *)v34,
          v32,
          atlasList,
          v31 != LODWORD(v25->fields._MasterName_k__BackingField) - 1,
          v35);
        ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)v34, -v30, 0);
        v30 = v30 + EventInfoSkillDetailComponent__GetHeight((EventInfoSkillDetailComponent_o *)v34, v36);
      }
      LODWORD(v29) = v25->fields._MasterName_k__BackingField;
      ++v31;
    }
    while ( (__int64)v31 < (int)v29 );
  }
  if ( this->fields.skillPivotType == 1 )
  {
    noScrollSkillParent = (UnityEngine_Object_o *)this->fields.noScrollSkillParent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(noScrollSkillParent, 0, 0) && v30 < this->fields.skillScrollViewHeight )
    {
      Master_object = (ImagePartsGroupMaster_o *)this->fields.skillParent;
      if ( !Master_object )
        goto LABEL_45;
      v38 = (float)(v30 * 0.5) + this->fields.noScrollSkillOffset;
      UnityEngine_Transform__SetParent_83492444(
        (UnityEngine_Transform_o *)Master_object,
        this->fields.noScrollSkillParent,
        0,
        0);
      TransformHelper__SetLocalPositionY(this->fields.noScrollSkillParent, v38, 0);
    }
  }
  skillScrollView = (UnityEngine_Object_o *)this->fields.skillScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(skillScrollView, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v40 = this->fields.skillScrollView;
    if ( !v40 )
      goto LABEL_45;
    verticalScrollBar = (UnityEngine_Object_o *)v40->fields.verticalScrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    Master_object = (ImagePartsGroupMaster_o *)UnityEngine_Object__op_Inequality(verticalScrollBar, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v42 = this->fields.skillScrollView;
      if ( v42 )
      {
        Master_object = (ImagePartsGroupMaster_o *)v42->fields.verticalScrollBar;
        if ( Master_object )
        {
          UIProgressBar__set_value((UIProgressBar_o *)Master_object, 0.0, 0);
          return;
        }
      }
LABEL_45:
      sub_2213CDC(Master_object, v9);
    }
  }
}


void EventInfoSkillDialog___OnClose_b__15_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5972643 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972643 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
  ActionExtensions__Call(this->fields.onClosed, 0);
  this->fields.onClosed = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClosed, 0, v5, v6, v7, v8, v9, v10);
}


void EventInfoSkillDialog___Open_b__13_0(EventInfoSkillDialog_o *this, const MethodInfo *method)
{
  this->fields.canTap = 1;
}


void EventInfoSkillDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5972644 & 1) == 0 )
  {
    sub_2213A60(&EventInfoSkillDialog___c_TypeInfo);
    byte_5972644 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(EventInfoSkillDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoSkillDialog___c_TypeInfo->static_fields->__9 = (struct EventInfoSkillDialog___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventInfoSkillDialog___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return ImagePartsGroupEntity__ExistsSkill(v, 0);
}