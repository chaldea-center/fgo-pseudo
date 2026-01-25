void SwitchParameterDisplayManager___ctor(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CED910 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_SwitchParameterDisplayComponent__TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager___ctor__);
    byte_4CED910 = 1;
  }
  this->fields.state = 1;
  *(_QWORD *)&this->fields.FADE_TIME = 0x400000003F000000LL;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_SwitchParameterDisplayComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent___ctor__);
  this->fields.componentList = (struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.componentList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager___ctor__);
}


void SwitchParameterDisplayManager__AddComponent(
        SwitchParameterDisplayManager_o *this,
        SwitchParameterDisplayComponent_o *component,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *componentList; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4CED90D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__IndexOf__);
    byte_4CED90D = 1;
  }
  componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
  if ( !componentList )
    goto LABEL_10;
  if ( (System_Collections_Generic_List_object___IndexOf(
          componentList,
          (Il2CppObject *)component,
          (const MethodInfo_383FA9C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__IndexOf__)
      & 0x80000000) == 0 )
    return;
  componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
  if ( !componentList
    || (items = componentList->fields._items,
        v13 = Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Add__,
        ++componentList->fields._version,
        !items) )
  {
LABEL_10:
    sub_1C7BD40(componentList, component);
  }
  size = componentList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      componentList,
      (Il2CppObject *)component,
      *(const MethodInfo_383EDFC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    componentList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)component;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)component, v6, v7, v8, v9, v10, v11);
  }
}


void SwitchParameterDisplayManager__Initialize(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  ;
}


void SwitchParameterDisplayManager__Reboot(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  SwitchParameterDisplayManager_o *v2; // x19
  struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *componentList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_4CED90C & 1) == 0 )
  {
    this = (SwitchParameterDisplayManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Clear__);
    byte_4CED90C = 1;
  }
  componentList = v2->fields.componentList;
  if ( !componentList )
    sub_1C7BD40(this, method);
  size = componentList->fields._size;
  v5 = componentList->fields._version + 1;
  componentList->fields._size = 0;
  componentList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)componentList->fields._items, 0, size, 0);
  v2->fields.count = 0;
  *(_QWORD *)&v2->fields.state = 1;
}


void SwitchParameterDisplayManager__RemoveComponent(
        SwitchParameterDisplayManager_o *this,
        SwitchParameterDisplayComponent_o *component,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *componentList; // x0

  if ( (byte_4CED90E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Remove__);
    byte_4CED90E = 1;
  }
  componentList = this->fields.componentList;
  if ( !componentList )
    sub_1C7BD40(0, component);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)componentList,
    (Il2CppObject *)component,
    (const MethodInfo_3840324 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Remove__);
}


void SwitchParameterDisplayManager__Reset(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  this->fields.count = 0;
  *(_QWORD *)&this->fields.state = 1;
}


void SwitchParameterDisplayManager__Update(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  float dispTime; // s8
  __int64 v4; // x1
  float deltaTime; // s0
  int32_t state; // w8
  float v7; // s0
  float FADE_TIME; // s1
  float v9; // s0
  float v10; // s1
  System_Collections_Generic_List_object__o *componentList; // x0
  int32_t v12; // w20
  Il2CppObject *Item; // x21
  int32_t count; // w8
  int32_t v15; // w20
  Il2CppObject *v16; // x21
  int32_t v17; // w20
  Il2CppObject *v18; // x21

  if ( (byte_4CED90F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED90F = 1;
  }
  dispTime = this->fields.dispTime;
  this->fields.alpha = 1.0;
  deltaTime = RealTime__get_deltaTime(0);
  state = this->fields.state;
  v7 = dispTime + deltaTime;
  this->fields.dispTime = v7;
  if ( state != 2 )
  {
    if ( state != 1 )
    {
      if ( state )
        goto LABEL_42;
      FADE_TIME = this->fields.FADE_TIME;
      if ( v7 < FADE_TIME )
      {
        v9 = v7 / FADE_TIME;
LABEL_10:
        this->fields.alpha = v9;
        goto LABEL_42;
      }
      *(_QWORD *)&this->fields.state = 1;
      goto LABEL_42;
    }
    if ( v7 >= this->fields.DISP_TIME )
      *(_QWORD *)&this->fields.state = 2;
    if ( dispTime != 0.0 || this->fields.count )
      goto LABEL_42;
    componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
    if ( !componentList )
      goto LABEL_54;
    v12 = componentList->fields._size - 1;
    if ( v12 < 0 )
      goto LABEL_42;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               componentList,
               v12,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
      {
        componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
        if ( !componentList )
          break;
        componentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       componentList,
                                                                       v12,
                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
        if ( !componentList )
          break;
        if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, _QWORD, const MethodInfo *))componentList->klass->vtable._4_unknown.methodPtr)(
                componentList,
                (unsigned int)this->fields.count,
                componentList->klass->vtable._4_unknown.method)
            & 1) == 0 )
        {
          componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
          if ( !componentList )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            componentList,
            v12,
            (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
        }
      }
      if ( --v12 < 0 )
        goto LABEL_42;
      componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
    }
    while ( componentList );
LABEL_54:
    sub_1C7BD40(componentList, v4);
  }
  v10 = this->fields.FADE_TIME;
  if ( v7 < v10 )
  {
    v9 = 1.0 - (float)(v7 / v10);
    goto LABEL_10;
  }
  count = this->fields.count;
  componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
  *(_QWORD *)&this->fields.state = 0;
  *(_QWORD *)&this->fields.count = (unsigned int)(count + 1);
  if ( !componentList )
    goto LABEL_54;
  v15 = componentList->fields._size - 1;
  if ( v15 >= 0 )
  {
    do
    {
      v16 = System_Collections_Generic_List_object___get_Item(
              componentList,
              v15,
              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0) )
      {
        componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
        if ( !componentList )
          goto LABEL_54;
        componentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       componentList,
                                                                       v15,
                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
        if ( !componentList )
          goto LABEL_54;
        if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, _QWORD, const MethodInfo *))componentList->klass->vtable._4_unknown.methodPtr)(
                componentList,
                (unsigned int)this->fields.count,
                componentList->klass->vtable._4_unknown.method)
            & 1) == 0 )
        {
          componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
          if ( !componentList )
            goto LABEL_54;
          System_Collections_Generic_List_object___RemoveAt(
            componentList,
            v15,
            (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
        }
      }
      if ( --v15 < 0 )
        goto LABEL_42;
      componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
    }
    while ( componentList );
    goto LABEL_54;
  }
LABEL_42:
  componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
  if ( !componentList )
    goto LABEL_54;
  v17 = componentList->fields._size - 1;
  if ( v17 >= 0 )
  {
    do
    {
      v18 = System_Collections_Generic_List_object___get_Item(
              componentList,
              v17,
              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0) )
      {
        componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
        if ( !componentList )
          goto LABEL_54;
        componentList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       componentList,
                                                                       v17,
                                                                       (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
        if ( !componentList )
          goto LABEL_54;
        if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))componentList->klass->vtable._5_set_Item.methodPtr)(
                componentList,
                componentList->klass->vtable._5_set_Item.method,
                this->fields.alpha)
            & 1) == 0 )
        {
          componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
          if ( !componentList )
            goto LABEL_54;
          System_Collections_Generic_List_object___RemoveAt(
            componentList,
            v17,
            (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
        }
      }
      if ( --v17 < 0 )
        return;
      componentList = (System_Collections_Generic_List_object__o *)this->fields.componentList;
    }
    while ( componentList );
    goto LABEL_54;
  }
}


float SwitchParameterDisplayManager__get_Alpha(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  return this->fields.alpha;
}


int32_t SwitchParameterDisplayManager__get_Count(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  return this->fields.count;
}