void NGUIDebug___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  struct NGUIDebug_StaticFields *static_fields; // x0
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct NGUIDebug_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CF2DC3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    byte_4CF2DC3 = 1;
  }
  NGUIDebug_TypeInfo->static_fields->mRayDebug = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  static_fields = NGUIDebug_TypeInfo->static_fields;
  static_fields->mLines = (struct System_Collections_Generic_List_string__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mLines, (int32_t)v1, v3, v4, v5, v6, v7, v8);
  v9 = NGUIDebug_TypeInfo->static_fields;
  v9->mInstance = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v9->mInstance, 0, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_4CF2DC0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    byte_4CF2DC0 = 1;
  }
  v2 = NGUIDebug_TypeInfo;
  if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
    v2 = NGUIDebug_TypeInfo;
  }
  mLines = v2->static_fields->mLines;
  if ( !mLines )
    sub_1C7BD40(v2, v1);
  size = mLines->fields._size;
  v5 = mLines->fields._version + 1;
  mLines->fields._size = 0;
  mLines->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)mLines->fields._items, 0, size, 0);
}


void NGUIDebug__CreateInstance(const MethodInfo *method)
{
  NGUIDebug_c *v1; // x0
  UnityEngine_Object_o *mInstance; // x19
  UnityEngine_GameObject_o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  NGUIDebug_c *v13; // x8
  Il2CppObject *v14; // x20
  struct NGUIDebug_StaticFields *static_fields; // x0

  if ( (byte_4CF2DBD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_NGUIDebug___);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16336/*"_NGUI Debug"*/);
    byte_4CF2DBD = 1;
  }
  v1 = NGUIDebug_TypeInfo;
  if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
    v1 = NGUIDebug_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v1->static_fields->mInstance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mInstance, 0, 0) )
  {
    v3 = (UnityEngine_GameObject_o *)sub_1C7BD34(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(v3, (System_String_o *)StringLiteral_16336/*"_NGUI Debug"*/, 0);
    if ( !v3 )
      sub_1C7BD40(v4, v5);
    v6 = UnityEngine_GameObject__AddComponent_object_(
           v3,
           (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_NGUIDebug___);
    v13 = NGUIDebug_TypeInfo;
    v14 = v6;
    if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
      v13 = NGUIDebug_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->mInstance = (struct NGUIDebug_o *)v14;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mInstance, (int32_t)v14, v7, v8, v9, v10, v11, v12);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DontDestroyOnLoad((UnityEngine_Object_o *)v3, 0);
  }
}


void NGUIDebug__DrawBounds(UnityEngine_Bounds_o *b, const MethodInfo *method)
{
  float y; // s0
  float x; // s12
  float v5; // s1
  float v6; // s13
  float z; // s8
  float v8; // s10
  float v9; // s9
  float v10; // s11
  float v11; // s12
  UnityEngine_Color_o color; // [xsp+0h] [xbp-60h]
  UnityEngine_Color_o colora; // [xsp+0h] [xbp-60h]
  UnityEngine_Color_o colorb; // [xsp+0h] [xbp-60h]
  UnityEngine_Color_o colorc; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v21; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v22; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v23; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4CF2DC1 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    byte_4CF2DC1 = 1;
  }
  x = b->fields.m_Center.fields.x;
  y = b->fields.m_Center.fields.y;
  v6 = b->fields.m_Extents.fields.x;
  v5 = b->fields.m_Extents.fields.y;
  z = b->fields.m_Center.fields.z;
  v8 = y - v5;
  v9 = y + v5;
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  v10 = x + v6;
  v11 = x - v6;
  v16.fields.x = v11;
  v16.fields.y = v8;
  v16.fields.z = z;
  v20.fields.x = v10;
  v20.fields.y = v8;
  v20.fields.z = z;
  *(_QWORD *)&color.fields.r = 1065353216;
  *(_QWORD *)&color.fields.b = 0x3F80000000000000LL;
  UnityEngine_Debug__DrawLine(v16, v20, color, 0);
  v17.fields.x = v11;
  v17.fields.y = v8;
  v17.fields.z = z;
  v21.fields.x = v11;
  v21.fields.y = v9;
  v21.fields.z = z;
  *(_QWORD *)&colora.fields.r = 1065353216;
  *(_QWORD *)&colora.fields.b = 0x3F80000000000000LL;
  UnityEngine_Debug__DrawLine(v17, v21, colora, 0);
  v18.fields.x = v10;
  v18.fields.y = v8;
  v18.fields.z = z;
  v22.fields.x = v10;
  v22.fields.y = v9;
  v22.fields.z = z;
  *(_QWORD *)&colorb.fields.r = 1065353216;
  *(_QWORD *)&colorb.fields.b = 0x3F80000000000000LL;
  UnityEngine_Debug__DrawLine(v18, v22, colorb, 0);
  v19.fields.x = v11;
  v19.fields.y = v9;
  v19.fields.z = z;
  v23.fields.x = v10;
  v23.fields.y = v9;
  v23.fields.z = z;
  *(_QWORD *)&colorc.fields.r = 1065353216;
  *(_QWORD *)&colorc.fields.b = 0x3F80000000000000LL;
  UnityEngine_Debug__DrawLine(v19, v23, colorc, 0);
}


void NGUIDebug__Log(System_Object_array *objs, const MethodInfo *method)
{
  System_Object_array *v2; // x19
  int max_length; // w8
  System_String_o *v4; // x20
  int v5; // w21
  System_String_o *v6; // x2

  v2 = objs;
  if ( (byte_4CF2DBF & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    sub_1C7BAE8(&StringLiteral_810/*", "*/);
    objs = (System_Object_array *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2DBF = 1;
  }
  if ( !v2 )
    goto LABEL_16;
  max_length = v2->max_length;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= (unsigned int)max_length )
        sub_1C7BD48(objs);
      objs = (System_Object_array *)v2->m_Items[v5];
      if ( !objs )
        break;
      v6 = (System_String_o *)((__int64 (__fastcall *)(System_Object_array *, const MethodInfo *))objs->obj.klass->vtable[3].methodPtr)(
                                objs,
                                objs->obj.klass->vtable[3].method);
      if ( v5 )
        objs = (System_Object_array *)System_String__Concat_64215176(v4, (System_String_o *)StringLiteral_810/*", "*/, v6, 0);
      else
        objs = (System_Object_array *)System_String__Concat_64176912(v4, v6, 0);
      max_length = v2->max_length;
      ++v5;
      v4 = (System_String_o *)objs;
      if ( v5 >= max_length )
        goto LABEL_12;
    }
LABEL_16:
    sub_1C7BD40(objs, method);
  }
LABEL_12:
  if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
  NGUIDebug__LogString(v4, method);
}


void NGUIDebug__LogString(System_String_o *text, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  NGUIDebug_c *v10; // x0
  System_Collections_Generic_List_object__o *mLines; // x8
  const char *name; // x8
  _QWORD *v13; // x9
  __int64 namespaze_low; // x10
  const char *v15; // x8
  const MethodInfo *v16; // x0

  if ( (byte_4CF2DBE & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Debug_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    byte_4CF2DBE = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v10 = NGUIDebug_TypeInfo;
    if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
      v10 = NGUIDebug_TypeInfo;
    }
    mLines = (System_Collections_Generic_List_object__o *)v10->static_fields->mLines;
    if ( mLines )
    {
      if ( mLines->fields._size >= 21 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          mLines = (System_Collections_Generic_List_object__o *)NGUIDebug_TypeInfo->static_fields->mLines;
          if ( !mLines )
            goto LABEL_24;
        }
        System_Collections_Generic_List_object___RemoveAt(
          mLines,
          0,
          (const MethodInfo_38405D0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
        v10 = NGUIDebug_TypeInfo;
      }
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
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
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = &name[8 * namespaze_low];
            LODWORD(v10->_1.namespaze) = namespaze_low + 1;
            *((_QWORD *)v15 + 4) = text;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v15 + 32), (int32_t)text, v4, v5, v6, v7, v8, v9);
          }
          NGUIDebug__CreateInstance(v16);
          return;
        }
      }
    }
LABEL_24:
    sub_1C7BD40(v10, v3);
  }
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__Log((Il2CppObject *)text, 0);
}


void NGUIDebug__OnGUI(NGUIDebug_o *this, const MethodInfo *method)
{
  void *Hierarchy; // x0
  struct NGUIDebug_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_string__o *mLines; // x9
  int32_t size; // w19
  struct System_Collections_Generic_List_string__o *v6; // x8
  int v7; // w8
  int v8; // w23
  int32_t i; // w19
  Il2CppObject *Item; // x0
  long double v11; // q0
  _QWORD *v12; // x21
  System_String_o *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  UICamera_c *v17; // x0
  UnityEngine_Object_o *hoveredObject; // x19
  UICamera_c *v19; // x0
  UnityEngine_GameObject_o *v20; // x19
  System_String_o *v21; // x0
  System_String_o *v22; // x19
  long double inited; // q0
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0

  if ( (byte_4CF2DC2 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&Method_System_Array_Empty_GUILayoutOption___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    sub_1C7BAE8(&NGUITools_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    sub_1C7BAE8(&StringLiteral_8383/*"Last Hit: "*/);
    sub_1C7BAE8(&StringLiteral_342/*"\""*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF2DC2 = 1;
  }
  Hierarchy = NGUIDebug_TypeInfo;
  if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
    Hierarchy = NGUIDebug_TypeInfo;
  }
  static_fields = (struct NGUIDebug_StaticFields *)*((_QWORD *)Hierarchy + 23);
  mLines = static_fields->mLines;
  if ( !mLines )
    goto LABEL_49;
  size = mLines->fields._size;
  if ( *((_DWORD *)Hierarchy + 56) )
  {
    if ( size )
      goto LABEL_8;
LABEL_25:
    if ( static_fields->mRayDebug )
    {
      v17 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v17 = UICamera_TypeInfo;
      }
      hoveredObject = (UnityEngine_Object_o *)v17->static_fields->hoveredObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(hoveredObject, 0, 0) )
      {
        if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
        if ( UnityEngine_Application__get_isPlaying(0) )
        {
          v19 = UICamera_TypeInfo;
          if ( !UICamera_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
            v19 = UICamera_TypeInfo;
          }
          v20 = v19->static_fields->hoveredObject;
          if ( !NGUITools_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
          Hierarchy = NGUITools__GetHierarchy(v20, 0);
          if ( !Hierarchy )
            goto LABEL_49;
          v21 = System_String__Replace_64223476(
                  (System_String_o *)Hierarchy,
                  (System_String_o *)StringLiteral_342/*"\""*/,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0);
          v22 = System_String__Concat_64176912((System_String_o *)StringLiteral_8383/*"Last Hit: "*/, v21, 0);
          v24 = Method_System_Array_Empty_GUILayoutOption___;
          v25 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
          if ( !v25 )
          {
            sub_1C51BD8(Method_System_Array_Empty_GUILayoutOption___);
            v25 = v24[7];
          }
          v26 = *(_QWORD *)(v25 + 16);
          if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
            v26 = sub_1C51B7C(inited);
          if ( !*(_DWORD *)(v26 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v26);
          v27 = *(_QWORD *)(v24[7] + 16LL);
          if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
            v27 = sub_1C51B7C(inited);
          UnityEngine_GUILayout__Label(v22, **(UnityEngine_GUILayoutOption_array ***)(v27 + 184), 0);
        }
      }
    }
    return;
  }
  j_il2cpp_runtime_class_init_0(Hierarchy);
  Hierarchy = NGUIDebug_TypeInfo;
  static_fields = NGUIDebug_TypeInfo->static_fields;
  if ( !size )
    goto LABEL_25;
LABEL_8:
  v6 = static_fields->mLines;
  if ( !v6 )
    goto LABEL_49;
  v7 = v6->fields._size;
  v8 = v7 - 1;
  if ( v7 >= 1 )
  {
    for ( i = 0; ; ++i )
    {
      if ( !*((_DWORD *)Hierarchy + 56) )
      {
        j_il2cpp_runtime_class_init_0(Hierarchy);
        Hierarchy = NGUIDebug_TypeInfo;
      }
      Hierarchy = *(void **)(*((_QWORD *)Hierarchy + 23) + 8LL);
      if ( !Hierarchy )
        break;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Hierarchy,
               i,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
      v12 = Method_System_Array_Empty_GUILayoutOption___;
      v13 = (System_String_o *)Item;
      v14 = *((_QWORD *)Method_System_Array_Empty_GUILayoutOption___ + 7);
      if ( !v14 )
      {
        sub_1C51BD8(Method_System_Array_Empty_GUILayoutOption___);
        v14 = v12[7];
      }
      v15 = *(_QWORD *)(v14 + 16);
      if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
        v15 = sub_1C51B7C(v11);
      if ( !*(_DWORD *)(v15 + 224) )
        v11 = j_il2cpp_runtime_class_init_0(v15);
      v16 = *(_QWORD *)(v12[7] + 16LL);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1C51B7C(v11);
      UnityEngine_GUILayout__Label(v13, **(UnityEngine_GUILayoutOption_array ***)(v16 + 184), 0);
      if ( v8 == i )
        return;
      Hierarchy = NGUIDebug_TypeInfo;
    }
LABEL_49:
    sub_1C7BD40(Hierarchy, method);
  }
}


bool NGUIDebug__get_debugRaycast(const MethodInfo *method)
{
  NGUIDebug_c *v1; // x0

  if ( (byte_4CF2DBB & 1) == 0 )
  {
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    byte_4CF2DBB = 1;
  }
  v1 = NGUIDebug_TypeInfo;
  if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
    v1 = NGUIDebug_TypeInfo;
  }
  return v1->static_fields->mRayDebug;
}


void NGUIDebug__set_debugRaycast(bool value, const MethodInfo *method)
{
  NGUIDebug_c *v3; // x0

  if ( (byte_4CF2DBC & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Application_TypeInfo);
    sub_1C7BAE8(&NGUIDebug_TypeInfo);
    byte_4CF2DBC = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  if ( UnityEngine_Application__get_isPlaying(0) )
  {
    v3 = NGUIDebug_TypeInfo;
    if ( !NGUIDebug_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NGUIDebug_TypeInfo);
      v3 = NGUIDebug_TypeInfo;
    }
    v3->static_fields->mRayDebug = value;
    if ( value )
    {
      if ( !v3->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v3);
      NGUIDebug__CreateInstance((const MethodInfo *)v3);
    }
  }
}