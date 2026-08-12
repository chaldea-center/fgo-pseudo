void NGUIDebug___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_string__c *v1; // x0
  System_Collections_Generic_List_object__o *v2; // x19
  struct NGUIDebug_StaticFields *static_fields; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct NGUIDebug_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_59750E9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&NGUIDebug_TypeInfo);
    byte_59750E9 = 1;
  }
  v1 = System_Collections_Generic_List_string__TypeInfo;
  NGUIDebug_TypeInfo->static_fields->mRayDebug = 0;
  v2 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v1);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  static_fields = NGUIDebug_TypeInfo->static_fields;
  static_fields->mLines = (struct System_Collections_Generic_List_string__o *)v2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&static_fields->mLines, (int32_t)v2, v4, v5, v6, v7, v8, v9);
  v10 = NGUIDebug_TypeInfo->static_fields;
  v10->mInstance = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->mInstance, 0, v11, v12, v13, v14, v15, v16);
}


void NGUIDebug___ctor(NGUIDebug_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void NGUIDebug__Clear(const MethodInfo *method)
{
  __int64 v1; // x1
  NGUIDebug_c *v2; // x0
  struct System_Collections_Generic_List_string__o *mLines; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_59750E6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Clear__);
    sub_2213A60(&NGUIDebug_TypeInfo);
    byte_59750E6 = 1;
  }
  v2 = NGUIDebug_TypeInfo;
  if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v1);
    v2 = NGUIDebug_TypeInfo;
  }
  mLines = v2->static_fields->mLines;
  if ( !mLines )
    sub_2213CDC(v2, v1);
  size = mLines->fields._size;
  v5 = mLines->fields._version + 1;
  mLines->fields._size = 0;
  mLines->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mLines->fields._items, 0, size, 0);
}


void NGUIDebug__CreateInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  NGUIDebug_c *v2; // x0
  UnityEngine_Object_o *mInstance; // x19
  UnityEngine_GameObject_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  NGUIDebug_c *v15; // x8
  Il2CppObject *v16; // x20
  struct NGUIDebug_StaticFields *static_fields; // x0
  __int64 v18; // x1

  if ( (byte_59750E3 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_NGUIDebug___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&NGUIDebug_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_16928/*"_NGUI Debug"*/);
    byte_59750E3 = 1;
  }
  v2 = NGUIDebug_TypeInfo;
  if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v1);
    v2 = NGUIDebug_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v2->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    v4 = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v4, (System_String_o *)StringLiteral_16928/*"_NGUI Debug"*/, 0);
    if ( !v4 )
      sub_2213CDC(v5, v6);
    v7 = UnityEngine_GameObject__AddComponent_object_(
           v4,
           (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_NGUIDebug___);
    v15 = NGUIDebug_TypeInfo;
    v16 = v7;
    if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v8);
      v15 = NGUIDebug_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->mInstance = (struct NGUIDebug_o *)v16;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->mInstance,
      (int32_t)v16,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v4, 0);
  }
}


void NGUIDebug__DrawBounds(UnityEngine_Bounds_o *b, const MethodInfo *method)
{
  float y; // s11
  float x; // s12
  float z; // s8
  float v6; // s13
  float v7; // s14
  float v8; // s9
  float v9; // s10
  float v10; // s11
  float v11; // s12
  UnityEngine_Color_o color; // [xsp+0h] [xbp-70h]
  UnityEngine_Color_o colora; // [xsp+0h] [xbp-70h]
  UnityEngine_Color_o colorb; // [xsp+0h] [xbp-70h]
  UnityEngine_Color_o colorc; // [xsp+0h] [xbp-70h]
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v21; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v22; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_59750E7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    byte_59750E7 = 1;
  }
  x = b->fields.m_Center.fields.x;
  y = b->fields.m_Center.fields.y;
  z = b->fields.m_Center.fields.z;
  v6 = b->fields.m_Extents.fields.x;
  v7 = b->fields.m_Extents.fields.y;
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, method);
  v8 = y + v7;
  v9 = x + v6;
  v10 = y - v7;
  v11 = x - v6;
  v16.fields.z = z;
  v20.fields.z = z;
  *(_QWORD *)&color.fields.r = 1065353216;
  *(_QWORD *)&color.fields.b = 0x3F80000000000000LL;
  v20.fields.x = v9;
  v16.fields.x = v11;
  v16.fields.y = v10;
  v20.fields.y = v10;
  UnityEngine_Debug__DrawLine(v16, v20, color, 0);
  v17.fields.x = v11;
  v17.fields.y = v10;
  v17.fields.z = z;
  v21.fields.x = v11;
  *(_QWORD *)&colora.fields.r = 1065353216;
  *(_QWORD *)&colora.fields.b = 0x3F80000000000000LL;
  v21.fields.y = v8;
  v21.fields.z = z;
  UnityEngine_Debug__DrawLine(v17, v21, colora, 0);
  v18.fields.x = v9;
  v18.fields.y = v10;
  v18.fields.z = z;
  v22.fields.x = v9;
  *(_QWORD *)&colorb.fields.r = 1065353216;
  *(_QWORD *)&colorb.fields.b = 0x3F80000000000000LL;
  v22.fields.y = v8;
  v22.fields.z = z;
  UnityEngine_Debug__DrawLine(v18, v22, colorb, 0);
  v19.fields.x = v11;
  v19.fields.y = v8;
  v19.fields.z = z;
  v23.fields.x = v9;
  *(_QWORD *)&colorc.fields.r = 1065353216;
  *(_QWORD *)&colorc.fields.b = 0x3F80000000000000LL;
  v23.fields.y = v8;
  v23.fields.z = z;
  UnityEngine_Debug__DrawLine(v19, v23, colorc, 0);
}


void NGUIDebug__Log(System_Object_array *objs, const MethodInfo *method)
{
  System_Object_array *v2; // x19
  il2cpp_array_size_t max_length; // x8
  System_String_o *v4; // x20
  unsigned __int64 i; // x21
  System_String_o *v6; // x0
  System_String_o *v7; // x0

  v2 = objs;
  if ( (byte_59750E5 & 1) == 0 )
  {
    sub_2213A60(&NGUIDebug_TypeInfo);
    sub_2213A60(&StringLiteral_870/*", "*/);
    objs = (System_Object_array *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_59750E5 = 1;
  }
  if ( !v2 )
LABEL_16:
    sub_2213CDC(objs, method);
  max_length = v2->max_length;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i )
      {
        if ( i >= (unsigned int)max_length )
          sub_2213CE4(objs);
        objs = (System_Object_array *)v2->m_Items[i];
        if ( !objs )
          goto LABEL_16;
        v6 = (System_String_o *)((__int64 (__fastcall *)(System_Object_array *, const MethodInfo *))objs->obj.klass->vtable[3].methodPtr)(
                                  objs,
                                  objs->obj.klass->vtable[3].method);
        objs = (System_Object_array *)System_String__Concat_75694928(v4, (System_String_o *)StringLiteral_870/*", "*/, v6, 0);
      }
      else
      {
        objs = (System_Object_array *)v2->m_Items[0];
        if ( !objs )
          goto LABEL_16;
        v7 = (System_String_o *)((__int64 (__fastcall *)(System_Object_array *, const MethodInfo *))objs->obj.klass->vtable[3].methodPtr)(
                                  objs,
                                  objs->obj.klass->vtable[3].method);
        objs = (System_Object_array *)System_String__Concat_75651716(v4, v7, 0);
      }
      LODWORD(max_length) = v2->max_length;
      v4 = (System_String_o *)objs;
    }
  }
  if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, method);
  NGUIDebug__LogString(v4, method);
}


void NGUIDebug__LogString(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  NGUIDebug_c *v10; // x0
  System_Collections_Generic_List_object__o *mLines; // x8
  const char *name; // x8
  _QWORD *v13; // x9
  __int64 namespaze_low; // x10
  const char *v15; // x8
  const MethodInfo *v16; // x0

  if ( (byte_59750E4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&UnityEngine_Debug_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&NGUIDebug_TypeInfo);
    byte_59750E4 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v10 = NGUIDebug_TypeInfo;
    if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v3);
      v10 = NGUIDebug_TypeInfo;
    }
    mLines = (System_Collections_Generic_List_object__o *)v10->static_fields->mLines;
    if ( mLines )
    {
      if ( mLines->fields._size >= 21 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v10, v3);
          mLines = (System_Collections_Generic_List_object__o *)NGUIDebug_TypeInfo->static_fields->mLines;
          if ( !mLines )
            goto LABEL_24;
        }
        System_Collections_Generic_List_object___RemoveAt(
          mLines,
          0,
          (const MethodInfo_44853FC *)Method_System_Collections_Generic_List_string__RemoveAt__);
        v10 = NGUIDebug_TypeInfo;
      }
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v3);
        v10 = NGUIDebug_TypeInfo;
      }
      v10 = (NGUIDebug_c *)v10->static_fields->mLines;
      if ( v10 )
      {
        name = v10->_1.name;
        v13 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(v10->_1.namespaze);
        if ( name )
        {
          namespaze_low = SLODWORD(v10->_1.namespaze);
          if ( (unsigned int)namespaze_low >= *((_DWORD *)name + 6) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v10,
              (Il2CppObject *)text,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &name[8 * namespaze_low];
            LODWORD(v10->_1.namespaze) = namespaze_low + 1;
            *((_QWORD *)v15 + 4) = text;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)text, v4, v5, v6, v7, v8, v9);
          }
          NGUIDebug__CreateInstance(v16);
          return;
        }
      }
    }
LABEL_24:
    sub_2213CDC(v10, v3);
  }
  if ( !*(&UnityEngine_Debug_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo, v3);
  UnityEngine_Debug__Log((Il2CppObject *)text, 0);
}


void NGUIDebug__OnGUI(NGUIDebug_o *this, const MethodInfo *method)
{
  void *Hierarchy; // x0
  struct NGUIDebug_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *mLines; // x9
  int v5; // w10
  int size; // w23
  int32_t v7; // w19
  NGUIDebug_c *v8; // x0
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  long double v11; // q0
  _QWORD *v12; // x21
  System_String_o *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  UICamera_c *v17; // x0
  UnityEngine_Object_o *hoveredObject; // x19
  __int64 v19; // x1
  __int64 v20; // x1
  UICamera_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x19
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  UnityEngine_GUILayoutOption_array *v25; // x1

  if ( (byte_59750E8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&Method_System_Array_Empty_GUILayoutOption___);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&NGUIDebug_TypeInfo);
    sub_2213A60(&NGUITools_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    sub_2213A60(&StringLiteral_8708/*"Last Hit: "*/);
    sub_2213A60(&StringLiteral_366/*"\""*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59750E8 = 1;
  }
  Hierarchy = NGUIDebug_TypeInfo;
  if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, method);
    Hierarchy = NGUIDebug_TypeInfo;
  }
  static_fields = (struct NGUIDebug_StaticFields *)*((_QWORD *)Hierarchy + 23);
  mLines = static_fields->mLines;
  if ( !mLines )
    goto LABEL_42;
  v5 = *((_DWORD *)Hierarchy + 57);
  if ( mLines->fields._size )
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(Hierarchy, method);
      mLines = NGUIDebug_TypeInfo->static_fields->mLines;
      if ( !mLines )
        goto LABEL_42;
    }
    size = mLines->fields._size;
    if ( size >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = NGUIDebug_TypeInfo;
        if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, method);
          v8 = NGUIDebug_TypeInfo;
        }
        Hierarchy = v8->static_fields->mLines;
        if ( !Hierarchy )
          break;
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)Hierarchy,
                 v7,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        v12 = Method_System_Array_Empty_GUILayoutOption___;
        v13 = (System_String_o *)Item;
        v14 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
        if ( !v14 )
        {
          sub_224B964(Method_System_Array_Empty_GUILayoutOption___);
          v14 = v12[7];
        }
        v15 = *(_QWORD *)(v14 + 16);
        if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
          v15 = sub_224B908(v11);
        if ( !*(_DWORD *)(v15 + 228) )
          *(__n128 *)&v11 = j_il2cpp_runtime_class_init_0(v15, v10);
        v16 = *(_QWORD *)(v12[7] + 16LL);
        if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
          v16 = sub_224B908(v11);
        UnityEngine_GUILayout__Label(v13, **(UnityEngine_GUILayoutOption_array ***)(v16 + 184), 0);
        if ( size == ++v7 )
          return;
      }
LABEL_42:
      sub_2213CDC(Hierarchy, method);
    }
  }
  else
  {
    if ( !v5 )
    {
      j_il2cpp_runtime_class_init_0(Hierarchy, method);
      static_fields = NGUIDebug_TypeInfo->static_fields;
    }
    if ( static_fields->mRayDebug )
    {
      v17 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, method);
        v17 = UICamera_TypeInfo;
      }
      hoveredObject = (UnityEngine_Object_o *)v17->static_fields->hoveredObject;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(hoveredObject, 0, 0) )
      {
        if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v19);
        if ( UnityEngine_Application__get_isPlaying(0) )
        {
          v21 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v20);
            v21 = UICamera_TypeInfo;
          }
          v22 = v21->static_fields->hoveredObject;
          if ( !*(&NGUITools_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo, v20);
          Hierarchy = NGUITools__GetHierarchy(v22, 0);
          if ( !Hierarchy )
            goto LABEL_42;
          v23 = System_String__Replace_75703400(
                  (System_String_o *)Hierarchy,
                  (System_String_o *)StringLiteral_366/*"\""*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0);
          v24 = System_String__Concat_75651716((System_String_o *)StringLiteral_8708/*"Last Hit: "*/, v23, 0);
          v25 = (UnityEngine_GUILayoutOption_array *)sub_20005AC(Method_System_Array_Empty_GUILayoutOption___);
          UnityEngine_GUILayout__Label(v24, v25, 0);
        }
      }
    }
  }
}


bool NGUIDebug__get_debugRaycast(const MethodInfo *method)
{
  __int64 v1; // x1
  NGUIDebug_c *v2; // x0

  if ( (byte_59750E1 & 1) == 0 )
  {
    sub_2213A60(&NGUIDebug_TypeInfo);
    byte_59750E1 = 1;
  }
  v2 = NGUIDebug_TypeInfo;
  if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v1);
    v2 = NGUIDebug_TypeInfo;
  }
  return v2->static_fields->mRayDebug;
}


void NGUIDebug__set_debugRaycast(bool value, const MethodInfo *method)
{
  __int64 v3; // x1
  NGUIDebug_c *v4; // x0

  if ( (byte_59750E2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&NGUIDebug_TypeInfo);
    byte_59750E2 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v4 = NGUIDebug_TypeInfo;
    if ( !*(&NGUIDebug_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo, v3);
      v4 = NGUIDebug_TypeInfo;
    }
    v4->static_fields->mRayDebug = value;
    if ( value )
    {
      if ( !*(&v4->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v4, v3);
      NGUIDebug__CreateInstance((const MethodInfo *)v4);
    }
  }
}