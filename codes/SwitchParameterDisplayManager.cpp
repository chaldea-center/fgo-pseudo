void SwitchParameterDisplayManager___ctor(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_SwitchParameterDisplayComponent__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59378CA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SwitchParameterDisplayComponent__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager___ctor__);
    byte_59378CA = 1;
  }
  v3 = System_Collections_Generic_List_SwitchParameterDisplayComponent__TypeInfo;
  this->fields.state = 1;
  *(_QWORD *)&this->fields.FADE_TIME = 0x400000003F000000LL;
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent___ctor__);
  this->fields.componentList = (struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *)v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.componentList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager___ctor__);
}


void SwitchParameterDisplayManager__AddComponent(
        SwitchParameterDisplayManager_o *this,
        SwitchParameterDisplayComponent_o *component,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *componentList; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0

  if ( (byte_59378C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__IndexOf__);
    byte_59378C7 = 1;
  }
  componentList = this->fields.componentList;
  if ( !componentList )
    goto LABEL_10;
  componentList = (struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *)System_Collections_Generic_List_object___IndexOf(
                                                                                                 (System_Collections_Generic_List_object__o *)componentList,
                                                                                                 (Il2CppObject *)component,
                                                                                                 (const MethodInfo_44507B0 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__IndexOf__);
  if ( ((unsigned int)componentList & 0x80000000) == 0 )
    return;
  v12 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
  if ( !v12
    || (items = v12->fields._items,
        v14 = Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_10:
    sub_21FFECC(componentList, component);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)component,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v16[4] = (Il2CppClass *)component;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)component, v6, v7, v8, v9, v10, v11);
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
  if ( (byte_59378C6 & 1) == 0 )
  {
    this = (SwitchParameterDisplayManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Clear__);
    byte_59378C6 = 1;
  }
  componentList = v2->fields.componentList;
  if ( !componentList )
    sub_21FFECC(this, method);
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

  if ( (byte_59378C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Remove__);
    byte_59378C8 = 1;
  }
  componentList = this->fields.componentList;
  if ( !componentList )
    sub_21FFECC(0, component);
  System_Collections_Generic_List_object___Remove(
    (System_Collections_Generic_List_object__o *)componentList,
    (Il2CppObject *)component,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__Remove__);
}


void SwitchParameterDisplayManager__Reset(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  this->fields.count = 0;
  *(_QWORD *)&this->fields.state = 1;
}


void SwitchParameterDisplayManager__Update(SwitchParameterDisplayManager_o *this, const MethodInfo *method)
{
  float dispTime; // s8
  System_Collections_Generic_List_object__o *v4; // x0
  __int64 v5; // x1
  float v6; // s0
  int32_t state; // w8
  float FADE_TIME; // s1
  float v9; // s0
  struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *componentList; // x8
  int32_t size; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Item; // x21
  float v15; // s1
  int32_t count; // w9
  struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *v17; // x8
  int32_t v18; // w20
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *v21; // x21
  struct System_Collections_Generic_List_SwitchParameterDisplayComponent__o *v22; // x8
  int32_t v23; // w20
  __int64 v24; // x1
  __int64 v25; // x2
  Il2CppObject *v26; // x21

  if ( (byte_59378C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59378C9 = 1;
  }
  dispTime = this->fields.dispTime;
  this->fields.alpha = 1.0;
  v6 = dispTime + RealTime__get_deltaTime(0);
  state = this->fields.state;
  this->fields.dispTime = v6;
  if ( state != 2 )
  {
    if ( state != 1 )
    {
      if ( state )
        goto LABEL_42;
      FADE_TIME = this->fields.FADE_TIME;
      if ( v6 < FADE_TIME )
      {
        v9 = v6 / FADE_TIME;
LABEL_27:
        this->fields.alpha = v9;
        goto LABEL_42;
      }
      *(_QWORD *)&this->fields.state = 1;
      goto LABEL_42;
    }
    if ( v6 >= this->fields.DISP_TIME )
      *(_QWORD *)&this->fields.state = 2;
    if ( dispTime != 0.0 || this->fields.count )
      goto LABEL_42;
    componentList = this->fields.componentList;
    if ( !componentList )
      goto LABEL_55;
    size = componentList->fields._size;
    if ( size - 1 < 0 )
      goto LABEL_42;
    while ( 1 )
    {
      v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
      if ( !v4 )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               v4,
               --size,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      v4 = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)Item,
                                                          0,
                                                          0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
        if ( !v4 )
          break;
        v4 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v4,
                                                            size,
                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
        if ( !v4 )
          break;
        v4 = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, _QWORD, const MethodInfo *))v4->klass->vtable._4_unknown.methodPtr)(
                                                            v4,
                                                            (unsigned int)this->fields.count,
                                                            v4->klass->vtable._4_unknown.method);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
          if ( !v4 )
            break;
          System_Collections_Generic_List_object___RemoveAt(
            v4,
            size,
            (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
        }
      }
      if ( size <= 0 )
        goto LABEL_42;
    }
LABEL_55:
    sub_21FFECC(v4, v5);
  }
  v15 = this->fields.FADE_TIME;
  if ( v6 < v15 )
  {
    v9 = 1.0 - (float)(v6 / v15);
    goto LABEL_27;
  }
  count = this->fields.count;
  v17 = this->fields.componentList;
  *(_QWORD *)&this->fields.state = 0;
  *(_QWORD *)&this->fields.count = (unsigned int)(count + 1);
  if ( !v17 )
    goto LABEL_55;
  v18 = v17->fields._size;
  if ( v18 - 1 >= 0 )
  {
    do
    {
      v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
      if ( !v4 )
        goto LABEL_55;
      v21 = System_Collections_Generic_List_object___get_Item(
              v4,
              --v18,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
      v4 = (System_Collections_Generic_List_object__o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v21,
                                                          0,
                                                          0);
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
        if ( !v4 )
          goto LABEL_55;
        v4 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v4,
                                                            v18,
                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
        if ( !v4 )
          goto LABEL_55;
        v4 = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, _QWORD, const MethodInfo *))v4->klass->vtable._4_unknown.methodPtr)(
                                                            v4,
                                                            (unsigned int)this->fields.count,
                                                            v4->klass->vtable._4_unknown.method);
        if ( ((unsigned __int8)v4 & 1) == 0 )
        {
          v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
          if ( !v4 )
            goto LABEL_55;
          System_Collections_Generic_List_object___RemoveAt(
            v4,
            v18,
            (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
        }
      }
    }
    while ( v18 > 0 );
  }
LABEL_42:
  v22 = this->fields.componentList;
  if ( !v22 )
    goto LABEL_55;
  v23 = v22->fields._size;
  if ( v23 - 1 >= 0 )
  {
    while ( 1 )
    {
      v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
      if ( !v4 )
        goto LABEL_55;
      v26 = System_Collections_Generic_List_object___get_Item(
              v4,
              --v23,
              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24, v25);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
      {
        v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
        if ( !v4 )
          goto LABEL_55;
        v4 = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            v4,
                                                            v23,
                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__get_Item__);
        if ( !v4 )
          goto LABEL_55;
        if ( (((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, float))v4->klass->vtable._5_set_Item.methodPtr)(
                v4,
                v4->klass->vtable._5_set_Item.method,
                this->fields.alpha)
            & 1) == 0 )
        {
          v4 = (System_Collections_Generic_List_object__o *)this->fields.componentList;
          if ( !v4 )
            goto LABEL_55;
          System_Collections_Generic_List_object___RemoveAt(
            v4,
            v23,
            (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_SwitchParameterDisplayComponent__RemoveAt__);
        }
      }
      if ( v23 <= 0 )
        return;
    }
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