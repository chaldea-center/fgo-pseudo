void __fastcall CommonMessageManager___ctor(CommonMessageManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5CB8C & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageManager_TypeInfo);
    byte_4A5CB8C = 1;
  }
  this->fields.playSpeed = 2;
  if ( !ScriptMessageManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageManager_TypeInfo);
  ScriptMessageManager___ctor((ScriptMessageManager_o *)this, 0LL);
}


System_String_array *__fastcall CommonMessageManager__AnalysParam(
        CommonMessageManager_o *this,
        System_String_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  int stringLength; // w28
  System_Collections_Generic_List_object__o *v5; // x20
  System_String_o *v6; // x22
  int32_t v7; // w24
  int32_t v8; // w1
  uint16_t Chars; // w0
  System_String_o *v10; // x0
  int v11; // w21
  System_String_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int size; // w8
  Il2CppObject *Item; // x0
  int32_t v17; // w21
  System_String_o *v18; // x0
  Il2CppObject *v19; // x2
  struct System_Object_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  Il2CppClass **v23; // x0
  System_String_o *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  int v31; // w8
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  System_String_o *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  __int16 v48[2]; // [xsp+Ch] [xbp-64h] BYREF

  v3 = data;
  if ( (byte_4A5CB8A & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__set_Item__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_1852/*"="*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_372/*"\""*/);
    this = (CommonMessageManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CB8A = 1;
  }
  v48[0] = 0;
  if ( !v3 )
    goto LABEL_72;
  stringLength = v3->fields._stringLength;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  v6 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = v7++;
      Chars = System_String__get_Chars(v3, v8, 0LL);
      v48[0] = Chars;
      if ( Chars > 0x2Bu )
      {
        if ( Chars != 44 && Chars != 61 )
          goto LABEL_34;
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v5 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
          goto LABEL_31;
        size = v5->fields._size;
        if ( size < 1
          || (Item = System_Collections_Generic_List_object___get_Item(
                       v5,
                       size - 1,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__),
              !System_String__op_Equality((System_String_o *)Item, (System_String_o *)StringLiteral_117/*" "*/, 0LL)) )
        {
LABEL_51:
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v48, 0LL);
          items = v5->fields._items;
          v37 = Method_System_Collections_Generic_List_string__Add__;
          if ( this )
            data = (System_String_o *)this;
          else
            data = (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !items )
            goto LABEL_72;
          v38 = v5->fields._size;
          if ( (unsigned int)v38 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &items->obj.klass + v38;
            v5->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)data;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)data, v34, v35);
          }
          goto LABEL_63;
        }
        v17 = v5->fields._size;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v18 = System_Char__ToString((uint16_t)v48, 0LL);
        if ( v18 )
          v19 = (Il2CppObject *)v18;
        else
          v19 = (Il2CppObject *)StringLiteral_1/*""*/;
        System_Collections_Generic_List_object___set_Item(
          v5,
          v17 - 1,
          v19,
          (const MethodInfo_34FD5B8 *)Method_System_Collections_Generic_List_string__set_Item__);
      }
      else
      {
        if ( Chars != 32 )
        {
          if ( Chars == 34 )
          {
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v10 = System_Char__ToString((uint16_t)v48, 0LL);
            v6 = System_String__Concat_61707032(v6, v10, 0LL);
            if ( v7 < stringLength )
            {
              while ( 1 )
              {
                v11 = v7 + 1;
                v48[0] = System_String__get_Chars(v3, v7, 0LL);
                if ( v48[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v12 = System_Char__ToString((uint16_t)v48, 0LL);
                v6 = System_String__Concat_61707032(v6, v12, 0LL);
                ++v7;
                if ( stringLength == v11 )
                {
                  v7 = stringLength;
                  goto LABEL_61;
                }
              }
              ++v7;
            }
LABEL_61:
            v24 = (System_String_o *)StringLiteral_372/*"\""*/;
          }
          else
          {
LABEL_34:
            if ( !char_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(char_TypeInfo);
            v24 = System_Char__ToString((uint16_t)v48, 0LL);
          }
          v6 = System_String__Concat_61707032(v6, v24, 0LL);
          goto LABEL_63;
        }
        this = (CommonMessageManager_o *)System_String__op_Inequality(v6, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( !v5 )
          goto LABEL_72;
        if ( ((unsigned __int8)this & 1) != 0 )
        {
LABEL_31:
          v20 = v5->fields._items;
          v21 = Method_System_Collections_Generic_List_string__Add__;
          ++v5->fields._version;
          if ( !v20 )
            goto LABEL_72;
          v22 = v5->fields._size;
          if ( (unsigned int)v22 >= v20->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v6,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->obj.klass + v22;
            v5->fields._size = v22 + 1;
            v23[4] = (Il2CppClass *)v6;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v6, v13, v14);
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          this = (CommonMessageManager_o *)System_Char__ToString((uint16_t)v48, 0LL);
          v27 = v5->fields._items;
          v28 = Method_System_Collections_Generic_List_string__Add__;
          data = this ? (System_String_o *)this : (System_String_o *)StringLiteral_1/*""*/;
          ++v5->fields._version;
          if ( !v27 )
            goto LABEL_72;
          v29 = v5->fields._size;
          if ( (unsigned int)v29 >= v27->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)data,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v27->obj.klass + v29;
            v5->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)data;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), (int32_t)data, v25, v26);
          }
          v6 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_63;
        }
        v31 = v5->fields._size;
        if ( v31 < 1 )
          goto LABEL_51;
        v32 = System_Collections_Generic_List_object___get_Item(
                v5,
                v31 - 1,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !System_String__op_Equality((System_String_o *)v32, (System_String_o *)StringLiteral_1852/*"="*/, 0LL) )
        {
          v33 = System_Collections_Generic_List_object___get_Item(
                  v5,
                  v5->fields._size - 1,
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
          if ( !System_String__op_Equality((System_String_o *)v33, (System_String_o *)StringLiteral_868/*","*/, 0LL) )
            goto LABEL_51;
        }
      }
LABEL_63:
      if ( v7 >= stringLength )
      {
        v40 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_66;
      }
    }
  }
  v40 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_66:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v6, v40, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v5 )
      return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                      v5,
                                      (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
LABEL_72:
    sub_1B8880C(this, data);
  }
  if ( !v5 )
    goto LABEL_72;
  v43 = v5->fields._items;
  v44 = Method_System_Collections_Generic_List_string__Add__;
  ++v5->fields._version;
  if ( !v43 )
    goto LABEL_72;
  v45 = v5->fields._size;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v5->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v6, v41, v42);
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall CommonMessageManager__AnalysScript(
        CommonMessageManager_o *this,
        System_String_o *scriptData,
        const MethodInfo *method)
{
  System_Array_o *v5; // x0
  System_Char_array *v6; // x21
  System_String_o *v7; // x0
  Il2CppObject *v8; // x1
  System_String_array *v9; // x23
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_object__o *v11; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x8
  __int64 v16; // x26
  System_String_o **m_Items; // x9
  __int64 v18; // x29
  __int64 v19; // x24
  System_String_o **v20; // x27
  System_String_o *v21; // x28
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  System_String_o *v24; // x28
  System_String_o **v25; // x5
  int32_t v26; // w2
  int32_t v27; // w3
  _QWORD *v28; // x9
  struct System_Object_array *items; // x8
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  _QWORD *v34; // x9
  struct System_Object_array *v35; // x8
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  System_String_o *v50; // x1
  Il2CppClass **v51; // x0
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  int32_t v55; // w26
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x8
  _QWORD *v65; // x9
  struct System_Object_array *v66; // x8
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  struct System_Int32_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  _QWORD *v72; // x9
  struct System_Object_array *v73; // x8
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  _QWORD *v78; // x9
  struct System_Object_array *v79; // x8
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  struct System_Int32_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  struct System_Int32_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  _QWORD *v104; // x9
  struct System_Object_array *v105; // x8
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  struct System_Int32_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  struct System_String_array *v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  struct System_String_array *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  struct System_Int32_array *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  struct System_String_array *executeDataList; // x8
  const MethodInfo *v121; // [xsp+0h] [xbp-A0h]
  System_String_o *a; // [xsp+18h] [xbp-88h]
  int32_t lastMessageIndex; // [xsp+24h] [xbp-7Ch] BYREF
  System_Collections_Generic_List_int__o *lineDataList; // [xsp+28h] [xbp-78h] BYREF
  System_Collections_Generic_List_string__o *scriptDataList; // [xsp+30h] [xbp-70h] BYREF
  System_Collections_Generic_List_string__o *tagDataList; // [xsp+38h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v127; // 0:w1.4

  if ( (byte_4A5CB88 & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54);
    sub_1B885B0(&StringLiteral_401/*"#"*/);
    sub_1B885B0(&StringLiteral_1126/*"//"*/);
    sub_1B885B0(&StringLiteral_20048/*"i"*/);
    sub_1B885B0(&StringLiteral_20964/*"k"*/);
    sub_1B885B0(&StringLiteral_22673/*"q"*/);
    sub_1B885B0(&StringLiteral_513/*"%"*/);
    sub_1B885B0(&StringLiteral_535/*"&"*/);
    sub_1B885B0(&StringLiteral_21109/*"line"*/);
    sub_1B885B0(&StringLiteral_23845/*"talkStart"*/);
    sub_1B885B0(&StringLiteral_20233/*"image"*/);
    sub_1B885B0(&StringLiteral_16008/*"[r]"*/);
    sub_1B885B0(&StringLiteral_23841/*"talkName"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5CB88 = 1;
  }
  v5 = (System_Array_o *)sub_1B88658(char___TypeInfo, 5LL);
  v127.fields.value = Field__PrivateImplementationDetails__01A2D4D2A3644EB58B9321AF665A1E3DD259AB36BB36C6953CE858B64416EF54;
  v6 = (System_Char_array *)v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v5, v127, 0LL);
  if ( !scriptData )
    goto LABEL_144;
  v9 = System_String__Split_61729424(scriptData, v6, 1, 0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  tagDataList = (System_Collections_Generic_List_string__o *)v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  scriptDataList = (System_Collections_Generic_List_string__o *)v11;
  v12 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  lineDataList = v12;
  lastMessageIndex = -1;
  if ( !v9 )
    goto LABEL_144;
  v15 = *(_QWORD *)&v9->max_length;
  if ( (int)v15 < 1 )
  {
    LODWORD(v16) = 0;
    goto LABEL_122;
  }
  v16 = 0LL;
  m_Items = v9->m_Items;
  a = (System_String_o *)StringLiteral_1/*""*/;
  do
  {
    v18 = 0LL;
    v19 = (v16 << 32) + 0x100000000LL;
    v20 = &m_Items[v16];
    while ( 1 )
    {
      if ( (int)v16 + (int)v18 >= (unsigned int)v15 )
        sub_1B88814(v7, v8);
      v21 = v20[v18];
      if ( !v21 )
        goto LABEL_144;
      if ( v21->fields._stringLength < 1 )
        goto LABEL_53;
      v22 = (System_String_o *)StringLiteral_1/*""*/;
      v7 = (System_String_o *)System_String__StartsWith(v20[v18], (System_String_o *)StringLiteral_1126/*"//"*/, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        goto LABEL_53;
      v7 = (System_String_o *)System_String__StartsWith(v21, this->fields.codeCommentString, 0LL);
      if ( ((unsigned __int8)v7 & 1) != 0 )
        goto LABEL_53;
      if ( System_String__StartsWith(v21, this->fields.codeTalkString, 0LL) )
        break;
      v7 = (System_String_o *)System_String__StartsWith(v21, this->fields.codeVoiceString, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        CommonMessageManager__AnalysText(
          this,
          &tagDataList,
          &scriptDataList,
          &lineDataList,
          &lastMessageIndex,
          v25,
          v21,
          v16 + v18 + 1,
          v121);
LABEL_18:
        v7 = (System_String_o *)System_String__op_Inequality(v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          v7 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v7 & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_144;
            v28 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_23845/*"talkStart"*/;
            items = v10->fields._items;
            ++v10->fields._version;
            if ( !items )
              goto LABEL_144;
            size = v10->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &items->obj.klass + size;
              v10->fields._size = size + 1;
              v31[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v8, v26, v27);
            }
            if ( !v11 )
              goto LABEL_144;
            v34 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_1/*""*/;
            v35 = v11->fields._items;
            ++v11->fields._version;
            if ( !v35 )
              goto LABEL_144;
            v36 = v11->fields._size;
            if ( (unsigned int)v36 >= v35->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              v37 = &v35->obj.klass + v36;
              v11->fields._size = v36 + 1;
              v37[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v8, v32, v33);
            }
            if ( !v12 )
              goto LABEL_144;
            v38 = v12->fields._items;
            v39 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !v38 )
              goto LABEL_144;
            v40 = v12->fields._size;
            if ( (unsigned int)v40 >= v38->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                v16 + v18 + 1,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v40 + 1;
              v38->m_Items[v40 + 1] = v16 + v18 + 1;
            }
          }
          else if ( !v10 )
          {
            goto LABEL_144;
          }
          v41 = v10->fields._items;
          v42 = Method_System_Collections_Generic_List_string__Add__;
          ++v10->fields._version;
          if ( !v41 )
            goto LABEL_144;
          v43 = v10->fields._size;
          if ( (unsigned int)v43 >= v41->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              0LL,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &v41->obj.klass + v43;
            v10->fields._size = v43 + 1;
            v44[4] = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), 0, v26, v27);
          }
          if ( !v11 )
            goto LABEL_144;
          lastMessageIndex = v11->fields._size;
          if ( !v22 )
            goto LABEL_144;
          v7 = System_String__Replace_61726660(
                 v22,
                 this->fields.codeReturnString,
                 (System_String_o *)StringLiteral_16008/*"[r]"*/,
                 0LL);
          v47 = v11->fields._items;
          v48 = Method_System_Collections_Generic_List_string__Add__;
          ++v11->fields._version;
          if ( !v47 )
            goto LABEL_144;
          v49 = v11->fields._size;
          v50 = v7;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)v7,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v47->obj.klass + v49;
            v11->fields._size = v49 + 1;
            v51[4] = (Il2CppClass *)v50;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v50, v45, v46);
          }
          if ( !v12 )
            goto LABEL_144;
          v52 = v12->fields._items;
          v53 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !v52 )
            goto LABEL_144;
          v54 = v12->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v16 + v18 + 1,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v54 + 1;
            v52->m_Items[v54 + 1] = v16 + v18 + 1;
          }
        }
      }
LABEL_53:
      v15 = *(_QWORD *)&v9->max_length;
      ++v18;
      v19 += 0x100000000LL;
      if ( v16 + v18 >= (int)v15 )
      {
        LODWORD(v16) = v16 + v18;
        goto LABEL_122;
      }
    }
    v23 = v21;
    v24 = (System_String_o *)StringLiteral_23841/*"talkName"*/;
    v22 = System_String__Substring(v23, 1, 0LL);
    if ( !v24 )
      goto LABEL_18;
    v55 = v16 + v18 + 1;
    v7 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_20964/*"k"*/, 0LL);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      v7 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_22673/*"q"*/, 0LL);
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_23841/*"talkName"*/, 0LL) )
        {
          v7 = (System_String_o *)System_String__op_Equality(v24, (System_String_o *)StringLiteral_23841/*"talkName"*/, 0LL);
          v64 = (System_String_o *)StringLiteral_1/*""*/;
          if ( ((unsigned __int8)v7 & 1) != 0 )
            v64 = v22;
          a = v64;
        }
        else if ( System_String__op_Equality(v24, (System_String_o *)StringLiteral_20048/*"i"*/, 0LL)
               || System_String__op_Equality(v24, (System_String_o *)StringLiteral_20233/*"image"*/, 0LL)
               || System_String__op_Equality(v24, (System_String_o *)StringLiteral_21109/*"line"*/, 0LL)
               || System_String__StartsWith(v24, (System_String_o *)StringLiteral_513/*"%"*/, 0LL)
               || System_String__StartsWith(v24, (System_String_o *)StringLiteral_535/*"&"*/, 0LL)
               || (v7 = (System_String_o *)System_String__StartsWith(v24, (System_String_o *)StringLiteral_401/*"#"*/, 0LL),
                   ((unsigned __int8)v7 & 1) != 0) )
        {
          v7 = (System_String_o *)System_String__op_Inequality(a, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          if ( (lastMessageIndex & 0x80000000) != 0 && ((unsigned __int8)v7 & 1) != 0 )
          {
            if ( !v10 )
              goto LABEL_144;
            v72 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_23845/*"talkStart"*/;
            v73 = v10->fields._items;
            ++v10->fields._version;
            if ( !v73 )
              goto LABEL_144;
            v74 = v10->fields._size;
            if ( (unsigned int)v74 >= v73->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v10,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = &v73->obj.klass + v74;
              v10->fields._size = v74 + 1;
              v75[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v8, v56, v57);
            }
            if ( !v11 )
              goto LABEL_144;
            v78 = Method_System_Collections_Generic_List_string__Add__;
            v8 = (Il2CppObject *)StringLiteral_1/*""*/;
            v79 = v11->fields._items;
            ++v11->fields._version;
            if ( !v79 )
              goto LABEL_144;
            v80 = v11->fields._size;
            if ( (unsigned int)v80 >= v79->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v11,
                v8,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = &v79->obj.klass + v80;
              v11->fields._size = v80 + 1;
              v81[4] = (Il2CppClass *)v8;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v8, v76, v77);
            }
            if ( !v12 )
              goto LABEL_144;
            v82 = v12->fields._items;
            v83 = Method_System_Collections_Generic_List_int__Add__;
            ++v12->fields._version;
            if ( !v82 )
              goto LABEL_144;
            v84 = v12->fields._size;
            if ( (unsigned int)v84 >= v82->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v12,
                v55,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v12->fields._size = v84 + 1;
              v82->m_Items[v84 + 1] = v55;
            }
          }
          else if ( !v11 )
          {
            goto LABEL_144;
          }
          lastMessageIndex = v11->fields._size;
        }
LABEL_104:
        if ( v10 )
          goto LABEL_105;
        goto LABEL_144;
      }
    }
    if ( (lastMessageIndex & 0x80000000) != 0 )
      goto LABEL_104;
    if ( !v10 )
      goto LABEL_144;
    v58 = v10->fields._items;
    v59 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v58 )
      goto LABEL_144;
    v60 = v10->fields._size;
    if ( (unsigned int)v60 >= v58->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        0LL,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
    }
    else
    {
      v61 = &v58->obj.klass + v60;
      v10->fields._size = v60 + 1;
      v61[4] = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 4), 0, v56, v57);
    }
    if ( !v11 )
      goto LABEL_144;
    v65 = Method_System_Collections_Generic_List_string__Add__;
    v8 = (Il2CppObject *)StringLiteral_16008/*"[r]"*/;
    v66 = v11->fields._items;
    ++v11->fields._version;
    if ( !v66 )
      goto LABEL_144;
    v67 = v11->fields._size;
    if ( (unsigned int)v67 >= v66->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        v8,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = &v66->obj.klass + v67;
      v11->fields._size = v67 + 1;
      v68[4] = (Il2CppClass *)v8;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v8, v62, v63);
    }
    if ( !v12 )
      goto LABEL_144;
    v69 = v12->fields._items;
    v70 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !v69 )
      goto LABEL_144;
    v71 = v12->fields._size;
    if ( (unsigned int)v71 >= v69->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v55,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v71 + 1;
      v69->m_Items[v71 + 1] = v55;
    }
    lastMessageIndex = -1;
LABEL_105:
    v85 = v10->fields._items;
    v86 = Method_System_Collections_Generic_List_string__Add__;
    ++v10->fields._version;
    if ( !v85 )
      goto LABEL_144;
    v87 = v10->fields._size;
    if ( (unsigned int)v87 >= v85->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)v24,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
    }
    else
    {
      v88 = &v85->obj.klass + v87;
      v10->fields._size = v87 + 1;
      v88[4] = (Il2CppClass *)v24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)v24, v56, v57);
    }
    if ( !v11 )
      goto LABEL_144;
    v91 = v11->fields._items;
    v92 = Method_System_Collections_Generic_List_string__Add__;
    ++v11->fields._version;
    if ( !v91 )
      goto LABEL_144;
    v93 = v11->fields._size;
    if ( (unsigned int)v93 >= v91->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v11,
        (Il2CppObject *)v22,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    }
    else
    {
      v94 = &v91->obj.klass + v93;
      v11->fields._size = v93 + 1;
      v94[4] = (Il2CppClass *)v22;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v22, v89, v90);
    }
    if ( !v12 )
      goto LABEL_144;
    v95 = v12->fields._items;
    v96 = Method_System_Collections_Generic_List_int__Add__;
    ++v12->fields._version;
    if ( !v95 )
      goto LABEL_144;
    v97 = v12->fields._size;
    if ( (unsigned int)v97 >= v95->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v12,
        v55,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v12->fields._size = v97 + 1;
      v95->m_Items[v97 + 1] = v55;
    }
    v15 = *(_QWORD *)&v9->max_length;
    m_Items = v9->m_Items;
    v16 = v19 >> 32;
  }
  while ( v19 >> 32 < (int)v15 );
LABEL_122:
  if ( (lastMessageIndex & 0x80000000) != 0 )
  {
    if ( v10 )
      goto LABEL_140;
    goto LABEL_144;
  }
  if ( !v10 )
    goto LABEL_144;
  v98 = v10->fields._items;
  v99 = Method_System_Collections_Generic_List_string__Add__;
  ++v10->fields._version;
  if ( !v98 )
    goto LABEL_144;
  v100 = v10->fields._size;
  if ( (unsigned int)v100 >= v98->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      0LL,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
  }
  else
  {
    v101 = &v98->obj.klass + v100;
    v10->fields._size = v100 + 1;
    v101[4] = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v101 + 4), 0, v13, v14);
  }
  if ( !v11 )
    goto LABEL_144;
  v104 = Method_System_Collections_Generic_List_string__Add__;
  v8 = (Il2CppObject *)StringLiteral_16008/*"[r]"*/;
  v105 = v11->fields._items;
  ++v11->fields._version;
  if ( !v105 )
    goto LABEL_144;
  v106 = v11->fields._size;
  if ( (unsigned int)v106 >= v105->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    v107 = &v105->obj.klass + v106;
    v11->fields._size = v106 + 1;
    v107[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v107 + 4), (int32_t)v8, v102, v103);
  }
  if ( !v12 )
    goto LABEL_144;
  v108 = v12->fields._items;
  v109 = Method_System_Collections_Generic_List_int__Add__;
  ++v12->fields._version;
  if ( !v108 )
    goto LABEL_144;
  v110 = v12->fields._size;
  if ( (unsigned int)v110 >= v108->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v12,
      v16,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = v110 + 1;
    v108->m_Items[v110 + 1] = v16;
  }
LABEL_140:
  v111 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                         v10,
                                         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.executeTagList = v111;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.executeTagList, (int32_t)v111, v112, v113);
  if ( !v11
    || (v114 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                               v11,
                                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__),
        this->fields.executeDataList = v114,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.executeDataList, (int32_t)v114, v115, v116),
        !v12)
    || (v117 = System_Collections_Generic_List_int___ToArray(
                 v12,
                 (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        this->fields.executeLineList = v117,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.executeLineList, (int32_t)v117, v118, v119),
        (executeDataList = this->fields.executeDataList) == 0LL) )
  {
LABEL_144:
    sub_1B8880C(v7, v8);
  }
  this->fields.executeIndexMax = *(_QWORD *)&executeDataList->max_length;
}


void __fastcall CommonMessageManager__AnalysText(
        CommonMessageManager_o *this,
        System_Collections_Generic_List_string__o **tagDataList,
        System_Collections_Generic_List_string__o **scriptDataList,
        System_Collections_Generic_List_int__o **lineDataList,
        int32_t *lastMessageIndex,
        System_String_o **talkName,
        System_String_o *analysData,
        int32_t line,
        const MethodInfo *method)
{
  int32_t stringLength; // w22
  System_String_o *v12; // x27
  int32_t v13; // w29
  int32_t v14; // w1
  uint16_t Chars; // w0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v21; // x8
  uint16_t v22; // w28
  System_String_o *v23; // x0
  int v24; // w24
  System_String_o *v25; // x0
  System_Collections_Generic_List_object__o *v26; // x28
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  CommonMessageManager_o *v32; // x1
  Il2CppClass **v33; // x0
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  System_String_o *v37; // x27
  System_String_o *v38; // x28
  int v39; // w24
  int32_t v40; // w1
  uint16_t v41; // w0
  System_String_o *v43; // x0
  int v44; // w26
  System_String_o *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 *v48; // x8
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  __int64 v52; // x8
  __int64 *v53; // x8
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  int32_t v58; // w2
  int32_t v59; // w3
  System_Collections_Generic_List_string__o **v60; // x27
  __int64 v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x8
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  ServantStatusBattleListViewItem_o *v69; // x0
  __int64 v70; // x8
  __int64 *v71; // x8
  __int64 v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  __int64 v75; // x8
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  System_Collections_Generic_List_string__o *v82; // x28
  struct System_String_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  int32_t v90; // w8
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x8
  int32_t v95; // w2
  int32_t v96; // w3
  __int64 v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  __int64 v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  __int64 v103; // x8
  __int64 v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x8
  int32_t v108; // w8
  System_String_o *v109; // x24
  System_String_o *v110; // x1
  System_String_o *v111; // x1
  int32_t v112; // w2
  int32_t v113; // w3
  __int64 v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  __int64 v117; // x8
  System_Collections_Generic_List_object__o *v118; // x21
  int32_t v119; // w2
  int32_t v120; // w3
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  CommonMessageManager_o *v124; // x1
  Il2CppClass **v125; // x0
  __int64 v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  CommonMessageManager_o *v129; // [xsp+0h] [xbp-90h]
  CommonMessageManager_o **v133; // [xsp+20h] [xbp-70h]
  __int16 v134[2]; // [xsp+2Ch] [xbp-64h] BYREF

  v129 = this;
  v133 = (CommonMessageManager_o **)tagDataList;
  if ( (byte_4A5CB89 & 1) == 0 )
  {
    sub_1B885B0(&char_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&StringLiteral_18001/*"clear"*/);
    sub_1B885B0(&StringLiteral_19517/*"font"*/);
    sub_1B885B0(&StringLiteral_19329/*"f"*/);
    sub_1B885B0(&StringLiteral_23424/*"speed"*/);
    sub_1B885B0(&StringLiteral_20964/*"k"*/);
    sub_1B885B0(&StringLiteral_22673/*"q"*/);
    sub_1B885B0(&StringLiteral_24592/*"voiceStop"*/);
    sub_1B885B0(&StringLiteral_17174/*"bgm"*/);
    sub_1B885B0(&StringLiteral_17176/*"bgmStop"*/);
    sub_1B885B0(&StringLiteral_24740/*"wt"*/);
    sub_1B885B0(&StringLiteral_23059/*"seStop"*/);
    sub_1B885B0(&StringLiteral_22438/*"page"*/);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    sub_1B885B0(&StringLiteral_18999/*"end"*/);
    sub_1B885B0(&StringLiteral_20947/*"jingle"*/);
    sub_1B885B0(&StringLiteral_23053/*"se"*/);
    sub_1B885B0(&StringLiteral_21026/*"l"*/);
    sub_1B885B0(&StringLiteral_24586/*"voice"*/);
    sub_1B885B0(&StringLiteral_23930/*"time "*/);
    sub_1B885B0(&StringLiteral_19522/*"fontSize"*/);
    sub_1B885B0(&StringLiteral_23057/*"seLoop"*/);
    sub_1B885B0(&StringLiteral_372/*"\""*/);
    sub_1B885B0(&StringLiteral_16008/*"[r]"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_22990/*"s"*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    sub_1B885B0(&StringLiteral_17162/*"betweenHeight"*/);
    sub_1B885B0(&StringLiteral_20948/*"jingleStop"*/);
    sub_1B885B0(&StringLiteral_23397/*"soundStopAll"*/);
    this = (CommonMessageManager_o *)sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A5CB89 = 1;
  }
  v134[0] = 0;
  if ( !analysData )
    goto LABEL_234;
  stringLength = analysData->fields._stringLength;
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( stringLength >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = v13++;
        Chars = System_String__get_Chars(analysData, v14, 0LL);
        v134[0] = Chars;
        if ( Chars == 91 )
          break;
        v22 = Chars;
        if ( !char_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(char_TypeInfo);
        v23 = System_Char__ToString((uint16_t)v134, 0LL);
        v12 = System_String__Concat_61707032(v12, v23, 0LL);
        if ( v22 == 34 )
        {
          if ( v13 < stringLength )
          {
            while ( 1 )
            {
              v24 = v13 + 1;
              v134[0] = System_String__get_Chars(analysData, v13, 0LL);
              if ( v134[0] == 34 )
                break;
              if ( !char_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(char_TypeInfo);
              v25 = System_Char__ToString((uint16_t)v134, 0LL);
              v12 = System_String__Concat_61707032(v12, v25, 0LL);
              ++v13;
              if ( stringLength == v24 )
              {
                v13 = stringLength;
                goto LABEL_86;
              }
            }
            ++v13;
          }
LABEL_86:
          v12 = System_String__Concat_61707032(v12, (System_String_o *)StringLiteral_372/*"\""*/, 0LL);
        }
        if ( v13 >= stringLength )
        {
          v111 = (System_String_o *)StringLiteral_1/*""*/;
          goto LABEL_215;
        }
      }
      this = (CommonMessageManager_o *)System_String__op_Inequality(v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !*scriptDataList )
          goto LABEL_234;
        *lastMessageIndex = (*scriptDataList)->fields._size;
        this = *v133;
        if ( !*v133 )
          goto LABEL_234;
        v18 = *(_QWORD *)&this->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v18 )
          goto LABEL_234;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            0LL,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = v18 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v21 + 32) = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), 0, v16, v17);
        }
        if ( !v12 )
          goto LABEL_234;
        v26 = (System_Collections_Generic_List_object__o *)*scriptDataList;
        this = (CommonMessageManager_o *)System_String__Replace_61726660(
                                           v12,
                                           v129->fields.codeReturnString,
                                           (System_String_o *)StringLiteral_16008/*"[r]"*/,
                                           0LL);
        if ( !v26 )
          goto LABEL_234;
        items = v26->fields._items;
        v30 = Method_System_Collections_Generic_List_string__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_234;
        size = v26->fields._size;
        v32 = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            (Il2CppObject *)this,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v32;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
        }
        this = (CommonMessageManager_o *)*lineDataList;
        if ( !*lineDataList )
          goto LABEL_234;
        v34 = *(_QWORD *)&this->fields.m_CachedPtr;
        v35 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v34 )
          goto LABEL_234;
        v36 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            line,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v36 + 1;
          *(_DWORD *)(v34 + 4 * v36 + 32) = line;
        }
      }
      v37 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
      {
        v38 = 0LL;
      }
      else
      {
        v38 = 0LL;
        v39 = 0;
        v40 = v13;
        do
        {
          v13 = v40 + 1;
          v41 = System_String__get_Chars(analysData, v40, 0LL);
          v134[0] = v41;
          if ( v41 == 91 )
          {
            ++v39;
          }
          else if ( v41 == 93 )
          {
            if ( --v39 < 0 )
              break;
          }
          else if ( v41 == 32 && v38 == 0LL )
          {
            v38 = v37;
          }
          if ( !char_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(char_TypeInfo);
          v43 = System_Char__ToString((uint16_t)v134, 0LL);
          v37 = System_String__Concat_61707032(v37, v43, 0LL);
          if ( v134[0] == 34 )
          {
            if ( v13 < stringLength )
            {
              while ( 1 )
              {
                v44 = v13 + 1;
                v134[0] = System_String__get_Chars(analysData, v13, 0LL);
                if ( v134[0] == 34 )
                  break;
                if ( !char_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(char_TypeInfo);
                v45 = System_Char__ToString((uint16_t)v134, 0LL);
                v37 = System_String__Concat_61707032(v37, v45, 0LL);
                ++v13;
                if ( stringLength == v44 )
                {
                  v13 = stringLength;
                  goto LABEL_56;
                }
              }
              ++v13;
            }
LABEL_56:
            v37 = System_String__Concat_61707032(v37, (System_String_o *)StringLiteral_372/*"\""*/, 0LL);
          }
          v40 = v13;
        }
        while ( v13 < stringLength );
      }
      if ( !v38 )
        v38 = v37;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v38, 0LL);
      if ( (unsigned int)this > 0x7B80C780 )
      {
        if ( (unsigned int)this > 0xA8F18501 )
        {
          if ( (unsigned int)this > 0xE90C310B )
          {
            if ( (unsigned int)this > 0xEF3A9228 )
            {
              if ( (_DWORD)this == -200523172 )
              {
                v71 = &StringLiteral_22673/*"q"*/;
LABEL_150:
                this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v71, 0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( (*lastMessageIndex & 0x80000000) == 0 )
                    *lastMessageIndex = -1;
                  this = *v133;
                  if ( !*v133 )
                    goto LABEL_234;
                  v72 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v73 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v72 )
                    goto LABEL_234;
                  v74 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v74 >= *(_DWORD *)(v72 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      0LL,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v75 = v72 + 8 * v74;
                    LODWORD(this->fields.m_CancellationTokenSource) = v74 + 1;
                    *(_QWORD *)(v75 + 32) = 0LL;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v75 + 32), 0, v46, v47);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_16008/*"[r]"*/;
                  v91 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v92 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v91 )
                    goto LABEL_234;
                  v93 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)tagDataList,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v94 = v91 + 8 * v93;
                    LODWORD(this->fields.m_CancellationTokenSource) = v93 + 1;
                    *(_QWORD *)(v94 + 32) = tagDataList;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v94 + 32), (int32_t)tagDataList, v76, v77);
                  }
                  this = (CommonMessageManager_o *)*lineDataList;
                  if ( !*lineDataList )
                    goto LABEL_234;
                  v97 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v98 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v97 )
                    goto LABEL_234;
                  v99 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v99 >= *(_DWORD *)(v97 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)this,
                      line,
                      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    LODWORD(this->fields.m_CancellationTokenSource) = v99 + 1;
                    *(_DWORD *)(v97 + 4 * v99 + 32) = line;
                  }
                  this = *v133;
                  if ( !*v133 )
                    goto LABEL_234;
                  v100 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v101 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v100 )
                    goto LABEL_234;
                  v102 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v102 >= *(_DWORD *)(v100 + 24) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)this,
                      (Il2CppObject *)v38,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v103 = v100 + 8 * v102;
                    LODWORD(this->fields.m_CancellationTokenSource) = v102 + 1;
                    *(_QWORD *)(v103 + 32) = v38;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 32), (int32_t)v38, v95, v96);
                  }
                  this = (CommonMessageManager_o *)*scriptDataList;
                  if ( !*scriptDataList )
                    goto LABEL_234;
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                  v104 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v105 = Method_System_Collections_Generic_List_string__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( !v104 )
                    goto LABEL_234;
                  v106 = SLODWORD(this->fields.m_CancellationTokenSource);
                  if ( (unsigned int)v106 < *(_DWORD *)(v104 + 24) )
                  {
                    v107 = v104 + 8 * v106;
                    LODWORD(this->fields.m_CancellationTokenSource) = v106 + 1;
                    *(_QWORD *)(v107 + 32) = tagDataList;
                    v69 = (ServantStatusBattleListViewItem_o *)(v107 + 32);
                    goto LABEL_168;
                  }
                  v70 = v105[4];
                  goto LABEL_170;
                }
                goto LABEL_157;
              }
              if ( (_DWORD)this == -166967934 )
              {
                v48 = &StringLiteral_22990/*"s"*/;
                goto LABEL_133;
              }
            }
            else
            {
              if ( (_DWORD)this == -301188886 )
              {
                v71 = &StringLiteral_20964/*"k"*/;
                goto LABEL_150;
              }
              if ( (_DWORD)this == -281374168 )
              {
                v48 = &StringLiteral_20947/*"jingle"*/;
                goto LABEL_133;
              }
            }
          }
          else
          {
            switch ( (_DWORD)this )
            {
              case 0xC73F3BA9:
                v48 = &StringLiteral_24592/*"voiceStop"*/;
                goto LABEL_133;
              case 0xE30C2799:
                v48 = &StringLiteral_19329/*"f"*/;
                goto LABEL_133;
              case 0xE90C310B:
                v48 = &StringLiteral_21026/*"l"*/;
                goto LABEL_133;
            }
          }
        }
        else if ( (unsigned int)this > 0x815DFA76 )
        {
          switch ( (_DWORD)this )
          {
            case 0x892E4CA0:
              v48 = &StringLiteral_24600/*"wait"*/;
              goto LABEL_133;
            case 0x9859D490:
              v48 = &StringLiteral_17162/*"betweenHeight"*/;
              goto LABEL_133;
            case 0xA8F18501:
              v48 = &StringLiteral_19522/*"fontSize"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x811C9DC5:
              if ( v38 && !v38->fields._stringLength )
                goto LABEL_176;
              break;
            case 0x815DFA76:
              v53 = &StringLiteral_22438/*"page"*/;
              goto LABEL_119;
            case 0x7F9BC9F9:
              v48 = &StringLiteral_24586/*"voice"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x4B4794E6 )
      {
        if ( (unsigned int)this > 0x667B7330 )
        {
          switch ( (_DWORD)this )
          {
            case 0x6A8E75AA:
              v48 = &StringLiteral_18999/*"end"*/;
              goto LABEL_133;
            case 0x6EE5B7E7:
              v48 = &StringLiteral_23397/*"soundStopAll"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v48, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_234;
                tagDataList = (System_Collections_Generic_List_string__o **)(unsigned int)(v38->fields._stringLength + 1);
                v60 = (System_Collections_Generic_List_string__o **)(v37->fields._stringLength <= (int)tagDataList
                                                                   ? StringLiteral_1/*""*/
                                                                   : System_String__Substring(
                                                                       v37,
                                                                       (int32_t)tagDataList,
                                                                       0LL));
                this = *v133;
                if ( !*v133 )
                  goto LABEL_234;
                v61 = *(_QWORD *)&this->fields.m_CachedPtr;
                v62 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v61 )
                  goto LABEL_234;
                v63 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v63 >= *(_DWORD *)(v61 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
                }
                else
                {
                  v64 = v61 + 8 * v63;
                  LODWORD(this->fields.m_CancellationTokenSource) = v63 + 1;
                  *(_QWORD *)(v64 + 32) = v38;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 32), (int32_t)v38, v46, v47);
                }
                this = (CommonMessageManager_o *)*scriptDataList;
                if ( !*scriptDataList )
                  goto LABEL_234;
                v65 = *(_QWORD *)&this->fields.m_CachedPtr;
                v66 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v65 )
                  goto LABEL_234;
                v67 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v67 < *(_DWORD *)(v65 + 24) )
                {
                  v68 = v65 + 8 * v67;
                  LODWORD(this->fields.m_CancellationTokenSource) = v67 + 1;
                  *(_QWORD *)(v68 + 32) = v60;
                  v69 = (ServantStatusBattleListViewItem_o *)(v68 + 32);
                  LODWORD(tagDataList) = (_DWORD)v60;
LABEL_168:
                  sub_1B88554(v69, (int32_t)tagDataList, v58, v59);
                  goto LABEL_171;
                }
                v70 = v66[4];
                tagDataList = v60;
                goto LABEL_170;
              }
              break;
            case 0x7B80C780:
              v48 = &StringLiteral_23424/*"speed"*/;
              goto LABEL_133;
          }
        }
        else
        {
          switch ( (_DWORD)this )
          {
            case 0x5C6E1222:
              v53 = &StringLiteral_18001/*"clear"*/;
LABEL_119:
              this = (CommonMessageManager_o *)System_String__op_Equality(v38, (System_String_o *)*v53, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                this = *v133;
                if ( !*v133 )
                  goto LABEL_234;
                v54 = *(_QWORD *)&this->fields.m_CachedPtr;
                v55 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v54 )
                  goto LABEL_234;
                v56 = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v38,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
                }
                else
                {
                  v57 = v54 + 8 * v56;
                  LODWORD(this->fields.m_CancellationTokenSource) = v56 + 1;
                  *(_QWORD *)(v57 + 32) = v38;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 32), (int32_t)v38, v46, v47);
                }
                if ( !v37 )
                  goto LABEL_234;
                v90 = v38->fields._stringLength;
                v82 = *scriptDataList;
                if ( v37->fields._stringLength <= v90 + 1 )
                {
                  tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_1/*""*/;
                }
                else
                {
                  this = (CommonMessageManager_o *)System_String__Substring(v37, v90 + 1, 0LL);
                  tagDataList = (System_Collections_Generic_List_string__o **)this;
                }
                if ( !v82 )
                  goto LABEL_234;
                v83 = v82->fields._items;
                v84 = Method_System_Collections_Generic_List_string__Add__;
                ++v82->fields._version;
                if ( !v83 )
                  goto LABEL_234;
                goto LABEL_166;
              }
              break;
            case 0x5DB2D891:
              v48 = &StringLiteral_17174/*"bgm"*/;
              goto LABEL_133;
            case 0x667B7330:
              v48 = &StringLiteral_20948/*"jingleStop"*/;
              goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x3B958991 )
      {
        switch ( (_DWORD)this )
        {
          case 0x3C520AA5:
            v48 = &StringLiteral_23053/*"se"*/;
            goto LABEL_133;
          case 0x47410F2B:
            v48 = &StringLiteral_23057/*"seLoop"*/;
            goto LABEL_133;
          case 0x4B4794E6:
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v38,
                                               (System_String_o *)StringLiteral_24740/*"wt"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              this = *v133;
              if ( !*v133 )
                goto LABEL_234;
              tagDataList = (System_Collections_Generic_List_string__o **)StringLiteral_24600/*"wait"*/;
              v49 = *(_QWORD *)&this->fields.m_CachedPtr;
              v50 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.m_CancellationTokenSource);
              if ( !v49 )
                goto LABEL_234;
              v51 = SLODWORD(this->fields.m_CancellationTokenSource);
              if ( (unsigned int)v51 >= *(_DWORD *)(v49 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)tagDataList,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
              }
              else
              {
                v52 = v49 + 8 * v51;
                LODWORD(this->fields.m_CancellationTokenSource) = v51 + 1;
                *(_QWORD *)(v52 + 32) = tagDataList;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)tagDataList, v46, v47);
              }
              if ( !v37 )
                goto LABEL_234;
              v108 = v38->fields._stringLength;
              v82 = *scriptDataList;
              v109 = (System_String_o *)StringLiteral_23930/*"time "*/;
              v110 = v37->fields._stringLength <= v108 + 1
                   ? (System_String_o *)StringLiteral_1212/*"0"*/
                   : System_String__Substring(v37, v108 + 1, 0LL);
              this = (CommonMessageManager_o *)System_String__Concat_61707032(v109, v110, 0LL);
              if ( !v82 )
                goto LABEL_234;
              goto LABEL_164;
            }
            break;
        }
      }
      else
      {
        switch ( (_DWORD)this )
        {
          case 0x274E1290:
            v48 = &StringLiteral_19517/*"font"*/;
            goto LABEL_133;
          case 0x34A684A5:
            v48 = &StringLiteral_23059/*"seStop"*/;
            goto LABEL_133;
          case 0x3B958991:
            v48 = &StringLiteral_17176/*"bgmStop"*/;
            goto LABEL_133;
        }
      }
LABEL_157:
      if ( !*scriptDataList )
        goto LABEL_234;
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v133;
      if ( !*v133 )
        goto LABEL_234;
      v78 = *(_QWORD *)&this->fields.m_CachedPtr;
      v79 = Method_System_Collections_Generic_List_string__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v78 )
        goto LABEL_234;
      v80 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          0LL,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = v78 + 8 * v80;
        LODWORD(this->fields.m_CancellationTokenSource) = v80 + 1;
        *(_QWORD *)(v81 + 32) = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 32), 0, v46, v47);
      }
      v82 = *scriptDataList;
      this = (CommonMessageManager_o *)System_String__Concat_61718292(
                                         (System_String_o *)StringLiteral_15812/*"["*/,
                                         v37,
                                         (System_String_o *)StringLiteral_16069/*"]"*/,
                                         0LL);
      if ( !v82 )
        goto LABEL_234;
LABEL_164:
      v83 = v82->fields._items;
      v84 = Method_System_Collections_Generic_List_string__Add__;
      ++v82->fields._version;
      if ( !v83 )
        goto LABEL_234;
      tagDataList = (System_Collections_Generic_List_string__o **)this;
LABEL_166:
      v85 = v82->fields._size;
      if ( (unsigned int)v85 < v83->max_length )
      {
        v86 = &v83->obj.klass + v85;
        v82->fields._size = v85 + 1;
        v86[4] = (Il2CppClass *)tagDataList;
        v69 = (ServantStatusBattleListViewItem_o *)(v86 + 4);
        goto LABEL_168;
      }
      v70 = v84[4];
      this = (CommonMessageManager_o *)v82;
LABEL_170:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)this,
        (Il2CppObject *)tagDataList,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v70 + 192) + 112LL));
LABEL_171:
      this = (CommonMessageManager_o *)*lineDataList;
      if ( !*lineDataList )
        goto LABEL_234;
      v87 = *(_QWORD *)&this->fields.m_CachedPtr;
      v88 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields.m_CancellationTokenSource);
      if ( !v87 )
        goto LABEL_234;
      v89 = SLODWORD(this->fields.m_CancellationTokenSource);
      if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)this,
          line,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(this->fields.m_CancellationTokenSource) = v89 + 1;
        *(_DWORD *)(v87 + 4 * v89 + 32) = line;
      }
LABEL_176:
      v12 = (System_String_o *)StringLiteral_1/*""*/;
      v111 = (System_String_o *)StringLiteral_1/*""*/;
      if ( v13 >= stringLength )
        goto LABEL_215;
    }
  }
  v111 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_215:
  this = (CommonMessageManager_o *)System_String__op_Inequality(v12, v111, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( *scriptDataList )
    {
      *lastMessageIndex = (*scriptDataList)->fields._size;
      this = *v133;
      if ( *v133 )
      {
        v114 = *(_QWORD *)&this->fields.m_CachedPtr;
        v115 = Method_System_Collections_Generic_List_string__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( v114 )
        {
          v116 = SLODWORD(this->fields.m_CancellationTokenSource);
          if ( (unsigned int)v116 >= *(_DWORD *)(v114 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)this,
              0LL,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = v114 + 8 * v116;
            LODWORD(this->fields.m_CancellationTokenSource) = v116 + 1;
            *(_QWORD *)(v117 + 32) = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v117 + 32), 0, v112, v113);
          }
          if ( v12 )
          {
            v118 = (System_Collections_Generic_List_object__o *)*scriptDataList;
            this = (CommonMessageManager_o *)System_String__Replace_61726660(
                                               v12,
                                               v129->fields.codeReturnString,
                                               (System_String_o *)StringLiteral_16008/*"[r]"*/,
                                               0LL);
            if ( v118 )
            {
              v121 = v118->fields._items;
              v122 = Method_System_Collections_Generic_List_string__Add__;
              ++v118->fields._version;
              if ( v121 )
              {
                v123 = v118->fields._size;
                v124 = this;
                if ( (unsigned int)v123 >= v121->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v118,
                    (Il2CppObject *)this,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
                }
                else
                {
                  v125 = &v121->obj.klass + v123;
                  v118->fields._size = v123 + 1;
                  v125[4] = (Il2CppClass *)v124;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v125 + 4), (int32_t)v124, v119, v120);
                }
                this = (CommonMessageManager_o *)*lineDataList;
                if ( *lineDataList )
                {
                  v126 = *(_QWORD *)&this->fields.m_CachedPtr;
                  v127 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(this->fields.m_CancellationTokenSource);
                  if ( v126 )
                  {
                    v128 = SLODWORD(this->fields.m_CancellationTokenSource);
                    if ( (unsigned int)v128 >= *(_DWORD *)(v126 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        line,
                        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.m_CancellationTokenSource) = v128 + 1;
                      *(_DWORD *)(v126 + 4 * v128 + 32) = line;
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_234:
    sub_1B8880C(this, tagDataList);
  }
}


void __fastcall CommonMessageManager__EndExecuteScript(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *callbackFunc; // x19
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  this->fields.state = 0;
  if ( callbackFunc )
  {
    p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__Init(CommonMessageManager_o *this, const MethodInfo *method)
{
  struct System_String_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct System_String_o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5CB86 & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11460/*"SCRIPT_ACTION_CODE_COMMENT"*/);
    sub_1B885B0(&StringLiteral_11470/*"SCRIPT_ACTION_CODE_VOICE"*/);
    sub_1B885B0(&StringLiteral_11463/*"SCRIPT_ACTION_CODE_RETURN"*/);
    sub_1B885B0(&StringLiteral_11469/*"SCRIPT_ACTION_CODE_TALK"*/);
    byte_4A5CB86 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_11460/*"SCRIPT_ACTION_CODE_COMMENT"*/, 0LL);
  this->fields.codeCommentString = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.codeCommentString, (int32_t)v3, v4, v5);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_11469/*"SCRIPT_ACTION_CODE_TALK"*/, 0LL);
  this->fields.codeTalkString = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.codeTalkString, (int32_t)v6, v7, v8);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_11470/*"SCRIPT_ACTION_CODE_VOICE"*/, 0LL);
  this->fields.codeVoiceString = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.codeVoiceString, (int32_t)v9, v10, v11);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_11463/*"SCRIPT_ACTION_CODE_RETURN"*/, 0LL);
  this->fields.codeReturnString = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.codeReturnString, (int32_t)v12, v13, v14);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0LL);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetTalkNameBack((ScriptMessageCommonManager_o *)this, 0LL, 0LL);
  ScriptMessageCommonManager__InitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__SetMessageWindowCollider((ScriptMessageCommonManager_o *)this, 1, 0LL);
  this->fields.isDispLastTouchMark = 1;
}


void __fastcall CommonMessageManager__OnClickWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnClickWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))touchCallbackFunc->fields.m_target)(
      touchCallbackFunc->fields.original_method_info,
      *(_QWORD *)&touchCallbackFunc->fields.extra_arg);
  }
}


void __fastcall CommonMessageManager__OnPressWindow(CommonMessageManager_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  struct System_Action_o *touchCallbackFunc; // x20

  ScriptMessageCommonManager__OnPressWindow((ScriptMessageCommonManager_o *)this, 0LL);
  touchCallbackFunc = this->fields.touchCallbackFunc;
  if ( touchCallbackFunc )
  {
    this->fields.touchCallbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))touchCallbackFunc->fields.m_target)(
      touchCallbackFunc->fields.original_method_info,
      *(_QWORD *)&touchCallbackFunc->fields.extra_arg);
  }
}


bool __fastcall CommonMessageManager__ProcessScript(
        CommonMessageManager_o *this,
        float delta,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CommonMessageManager_o *v5; // x19
  int state; // w8
  System_String_o **p_waitType; // x20
  System_String_o **p_waitMessage; // x22
  __int64 executeIndex; // x8
  struct System_String_array *executeTagList; // x9
  struct System_String_array *executeDataList; // x10
  struct System_Int32_array *executeLineList; // x11
  System_String_o *v13; // x24
  System_String_o *v14; // x25
  System_String_array *v15; // x23
  int32_t v16; // w3
  __int64 *v17; // x8
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  ServantStatusBattleListViewItem_o *v21; // x0
  System_String_o *v22; // x1
  System_String_o *v23; // x23
  uint32_t v24; // w0
  __int64 *v25; // x8
  const MethodInfo *v26; // x2
  int32_t v27; // w3
  __int64 v28; // x1
  __int64 *v29; // x8
  __int64 *v30; // x8
  System_String_o *v31; // x1
  int32_t playSpeed; // w8
  __int64 *v33; // x8
  __int64 *v34; // x8
  __int64 v35; // x9
  float v36; // s0
  System_String_o *v37; // x1
  __int64 v38; // x9
  float v39; // s0
  __int64 v40; // x9
  System_String_o *v41; // x1
  ScriptMessageCommonManager_o *v42; // x0
  System_String_o *v43; // x2
  int32_t v44; // w1
  _BOOL4 isBusy; // w20
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 *v49; // x8
  __int64 v50; // x1
  System_String_o **p_waitTalkName; // [xsp+8h] [xbp-68h]

  v5 = this;
  if ( (byte_4A5CB8B & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21407/*"messageOn"*/);
    sub_1B885B0(&StringLiteral_18001/*"clear"*/);
    sub_1B885B0(&StringLiteral_19517/*"font"*/);
    sub_1B885B0(&StringLiteral_22443/*"page3"*/);
    sub_1B885B0(&StringLiteral_21405/*"messageOff"*/);
    sub_1B885B0(&StringLiteral_22442/*"page2"*/);
    sub_1B885B0(&StringLiteral_19329/*"f"*/);
    sub_1B885B0(&StringLiteral_23424/*"speed"*/);
    sub_1B885B0(&StringLiteral_20964/*"k"*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_22673/*"q"*/);
    sub_1B885B0(&StringLiteral_22457/*"parameter error"*/);
    sub_1B885B0(&StringLiteral_23998/*"touch2"*/);
    sub_1B885B0(&StringLiteral_22438/*"page"*/);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    sub_1B885B0(&StringLiteral_22456/*"parameter be unnecessary"*/);
    sub_1B885B0(&StringLiteral_18999/*"end"*/);
    sub_1B885B0(&StringLiteral_21399/*"message2"*/);
    sub_1B885B0(&StringLiteral_21026/*"l"*/);
    sub_1B885B0(&StringLiteral_19522/*"fontSize"*/);
    sub_1B885B0(&StringLiteral_21395/*"message"*/);
    sub_1B885B0(&StringLiteral_23841/*"talkName"*/);
    sub_1B885B0(&StringLiteral_23996/*"touch"*/);
    sub_1B885B0(&StringLiteral_21400/*"message3"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_22990/*"s"*/);
    sub_1B885B0(&StringLiteral_17162/*"betweenHeight"*/);
    this = (CommonMessageManager_o *)sub_1B885B0(&StringLiteral_18003/*"clear2"*/);
    byte_4A5CB8B = 1;
  }
  state = v5->fields.state;
  if ( !state )
    return 0;
  p_waitType = &v5->fields.waitType;
  p_waitMessage = &v5->fields.waitMessage;
  p_waitTalkName = &v5->fields.waitTalkName;
  while ( 1 )
  {
    while ( state != 4 )
    {
      if ( state != 3 )
        goto LABEL_173;
      executeIndex = v5->fields.executeIndex;
      if ( (int)executeIndex >= v5->fields.executeIndexMax )
      {
        CommonMessageManager__EndExecuteScript(v5, method);
        goto LABEL_173;
      }
      if ( v5->fields.playSpeed == 1 )
        goto LABEL_173;
      executeTagList = v5->fields.executeTagList;
      if ( !executeTagList )
        goto LABEL_190;
      if ( (unsigned int)executeIndex >= executeTagList->max_length )
        goto LABEL_189;
      executeDataList = v5->fields.executeDataList;
      if ( !executeDataList )
        goto LABEL_190;
      if ( (unsigned int)executeIndex >= executeDataList->max_length )
        goto LABEL_189;
      executeLineList = v5->fields.executeLineList;
      if ( !executeLineList )
LABEL_190:
        sub_1B8880C(this, method);
      if ( (unsigned int)executeIndex >= executeLineList->max_length )
        goto LABEL_189;
      v13 = executeDataList->m_Items[executeIndex];
      v14 = executeTagList->m_Items[executeIndex];
      v15 = CommonMessageManager__AnalysParam(this, v13, v3);
      if ( !v14 && v5->fields.isBusy )
        goto LABEL_181;
      this = (CommonMessageManager_o *)PrivateImplementationDetails___ComputeStringHash(v14, 0LL);
      if ( (unsigned int)this > 0x84F7AC69 )
      {
        if ( (unsigned int)this > 0xE30C2799 )
        {
          if ( (unsigned int)this > 0xEE0C38EA )
          {
            if ( (_DWORD)this == -200523172 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_22673/*"q"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_170;
            }
            else if ( (_DWORD)this == -166967934 )
            {
              v29 = &StringLiteral_22990/*"s"*/;
LABEL_102:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v29, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v35 = *(_QWORD *)&v15->max_length;
                if ( (_DWORD)v35 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_919/*"-"*/,
                                                     0LL);
                  v36 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v15->max_length )
                      goto LABEL_189;
                    v36 = System_Single__Parse(v15->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v17 = &StringLiteral_22457/*"parameter error"*/;
                  if ( v35 )
                    goto LABEL_169;
                  v36 = -1.0;
                }
                ScriptMessageCommonManager__SetSpeed((ScriptMessageCommonManager_o *)v5, v36, 0LL);
                goto LABEL_170;
              }
            }
          }
          else
          {
            if ( (_DWORD)this == -385076981 )
            {
              v25 = &StringLiteral_21026/*"l"*/;
LABEL_133:
              this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v25, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v38 = *(_QWORD *)&v15->max_length;
                if ( (_DWORD)v38 == 1 )
                {
                  this = (CommonMessageManager_o *)System_String__op_Equality(
                                                     v15->m_Items[0],
                                                     (System_String_o *)StringLiteral_919/*"-"*/,
                                                     0LL);
                  v39 = -1.0;
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v15->max_length )
LABEL_189:
                      sub_1B88814(this, method);
                    v39 = System_Single__Parse(v15->m_Items[0], 0LL);
                  }
                }
                else
                {
                  v17 = &StringLiteral_22457/*"parameter error"*/;
                  if ( v38 )
                    goto LABEL_169;
                  v39 = -1.0;
                }
                ScriptMessageCommonManager__SetBetweenLineHeight((ScriptMessageCommonManager_o *)v5, v39, 0LL);
                goto LABEL_170;
              }
              goto LABEL_153;
            }
            if ( (_DWORD)this == -301188886 )
            {
              this = (CommonMessageManager_o *)System_String__op_Equality(
                                                 v14,
                                                 (System_String_o *)StringLiteral_20964/*"k"*/,
                                                 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                if ( !v15 )
                  goto LABEL_190;
                v17 = &StringLiteral_22456/*"parameter be unnecessary"*/;
                if ( *(_QWORD *)&v15->max_length )
                  goto LABEL_169;
                v5->fields.state = 4;
                v30 = &StringLiteral_23996/*"touch"*/;
                goto LABEL_150;
              }
            }
          }
        }
        else
        {
          if ( (unsigned int)this > 0x9859D490 )
          {
            if ( (_DWORD)this == -1460566783 )
            {
              v34 = &StringLiteral_19522/*"fontSize"*/;
            }
            else
            {
              if ( (_DWORD)this != -485742695 )
                goto LABEL_153;
              v34 = &StringLiteral_19329/*"f"*/;
            }
            goto LABEL_141;
          }
          if ( (_DWORD)this == -1993454432 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_24600/*"wait"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v5->fields.state = 4;
              if ( !v15 )
                goto LABEL_190;
              if ( (int)v15->max_length < 1 )
              {
                v17 = &StringLiteral_22457/*"parameter error"*/;
LABEL_169:
                if ( *v17 )
                {
                  v5->fields.state = 11;
                  goto LABEL_173;
                }
                goto LABEL_170;
              }
              v22 = v15->m_Items[0];
              *p_waitType = v22;
LABEL_151:
              v21 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitType;
              goto LABEL_156;
            }
          }
          else if ( (_DWORD)this == -1738943344 )
          {
            v25 = &StringLiteral_17162/*"betweenHeight"*/;
            goto LABEL_133;
          }
        }
      }
      else if ( (unsigned int)this > 0x5C6E1222 )
      {
        if ( (unsigned int)this > 0x7B80C780 )
        {
          if ( (_DWORD)this == -2124547466 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_22438/*"page"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v17 = &StringLiteral_22456/*"parameter be unnecessary"*/;
              if ( *(_QWORD *)&v15->max_length )
                goto LABEL_169;
              v5->fields.state = 4;
              v30 = &StringLiteral_22438/*"page"*/;
LABEL_150:
              v22 = (System_String_o *)*v30;
              v5->fields.waitType = (struct System_String_o *)*v30;
              goto LABEL_151;
            }
          }
          else if ( (_DWORD)this == -2064143255 )
          {
            this = (CommonMessageManager_o *)System_String__op_Equality(
                                               v14,
                                               (System_String_o *)StringLiteral_21405/*"messageOff"*/,
                                               0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !v15 )
                goto LABEL_190;
              v17 = &StringLiteral_22457/*"parameter error"*/;
              if ( *(_QWORD *)&v15->max_length )
                goto LABEL_169;
              ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
              ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
              goto LABEL_170;
            }
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1787721130 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_18999/*"end"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v17 = &StringLiteral_22456/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v15->max_length )
              goto LABEL_169;
            CommonMessageManager__EndExecuteScript(v5, method);
            goto LABEL_170;
          }
        }
        else if ( (_DWORD)this == 2072037248 )
        {
          v29 = &StringLiteral_23424/*"speed"*/;
          goto LABEL_102;
        }
      }
      else if ( (unsigned int)this > 0x20BD548D )
      {
        if ( (_DWORD)this == 659427984 )
        {
          v34 = &StringLiteral_19517/*"font"*/;
LABEL_141:
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)*v34, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v40 = *(_QWORD *)&v15->max_length;
            if ( (_DWORD)v40 == 1 )
            {
              v41 = v15->m_Items[0];
              v42 = (ScriptMessageCommonManager_o *)v5;
              goto LABEL_145;
            }
            if ( (int)v40 >= 3 )
            {
              v41 = v15->m_Items[0];
              v43 = v15->m_Items[2];
              v42 = (ScriptMessageCommonManager_o *)v5;
            }
            else
            {
              v17 = &StringLiteral_22457/*"parameter error"*/;
              if ( v40 )
                goto LABEL_169;
              v42 = (ScriptMessageCommonManager_o *)v5;
              v41 = 0LL;
LABEL_145:
              v43 = 0LL;
            }
            ScriptMessageCommonManager__SetFontSize(v42, v41, v43, 0LL);
            goto LABEL_170;
          }
          goto LABEL_153;
        }
        if ( (_DWORD)this == 1550717474 )
        {
          this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_18001/*"clear"*/, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            if ( !v15 )
              goto LABEL_190;
            v17 = &StringLiteral_22456/*"parameter be unnecessary"*/;
            if ( *(_QWORD *)&v15->max_length )
              goto LABEL_169;
            v5->fields.state = 4;
            v30 = &StringLiteral_18001/*"clear"*/;
            goto LABEL_150;
          }
        }
      }
      else if ( (_DWORD)this == 452920428 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_23841/*"talkName"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v21 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitTalkName;
          *p_waitTalkName = v13;
          goto LABEL_155;
        }
      }
      else if ( (_DWORD)this == 549278861 )
      {
        this = (CommonMessageManager_o *)System_String__op_Equality(v14, (System_String_o *)StringLiteral_21407/*"messageOn"*/, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v15 )
            goto LABEL_190;
          v17 = &StringLiteral_22457/*"parameter error"*/;
          if ( *(_QWORD *)&v15->max_length )
            goto LABEL_169;
          ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)v5, 0LL);
          ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
          v5->fields.state = 4;
          v18 = StringLiteral_21395/*"message"*/;
          v5->fields.waitType = (struct System_String_o *)StringLiteral_21395/*"message"*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v18, v19, v20);
          v21 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitMessage;
          LODWORD(v22) = 0;
          v5->fields.waitMessage = 0LL;
          goto LABEL_156;
        }
      }
LABEL_153:
      if ( !v14 )
      {
        v5->fields.state = 4;
        v44 = StringLiteral_21395/*"message"*/;
        v5->fields.waitType = (struct System_String_o *)StringLiteral_21395/*"message"*/;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v44, (int32_t)v3, v16);
        v5->fields.waitMessage = v13;
        v21 = (ServantStatusBattleListViewItem_o *)&v5->fields.waitMessage;
LABEL_155:
        LODWORD(v22) = (_DWORD)v13;
LABEL_156:
        sub_1B88554(v21, (int32_t)v22, (int32_t)v3, v16);
      }
LABEL_170:
      ++v5->fields.executeIndex;
LABEL_171:
      state = v5->fields.state;
    }
    v23 = *p_waitType;
    v24 = PrivateImplementationDetails___ComputeStringHash(*p_waitType, 0LL);
    if ( v24 > 0x698989D8 )
      break;
    if ( v24 > 0xD841B5E )
    {
      if ( v24 != 619841764 )
      {
        if ( v24 != 1550717474 )
        {
          if ( v24 == 1770621400 && System_String__op_Equality(v23, (System_String_o *)StringLiteral_23996/*"touch"*/, 0LL) )
          {
            if ( v5->fields.isBusy )
            {
LABEL_181:
              ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
              return !v5->fields.isBusy && v5->fields.state == 3;
            }
            ScriptMessageCommonManager__WaitNextTouch(
              (ScriptMessageCommonManager_o *)v5,
              v5->fields.isDispLastTouchMark,
              0LL);
            v49 = &StringLiteral_23998/*"touch2"*/;
            goto LABEL_188;
          }
          goto LABEL_173;
        }
        if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_18001/*"clear"*/, 0LL) )
          goto LABEL_173;
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        else
          ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
        v33 = &StringLiteral_18003/*"clear2"*/;
        goto LABEL_120;
      }
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21395/*"message"*/, 0LL) )
        goto LABEL_173;
      if ( ScriptMessageCommonManager__IsReturnScroll((ScriptMessageCommonManager_o *)v5, 0LL) )
      {
        if ( v5->fields.isBusy )
          goto LABEL_181;
        if ( v5->fields.isCancelInput )
          v5->fields.isCancelInput = 0;
        v33 = &StringLiteral_21399/*"message2"*/;
        goto LABEL_120;
      }
      if ( *p_waitTalkName )
        CommonMessageManager__SetTalkName(v5, *p_waitTalkName, v26);
      v37 = *p_waitMessage;
      if ( !*p_waitMessage )
        v37 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v37, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
      v5->fields.isCancelInput = 0;
      goto LABEL_113;
    }
    if ( v24 == 256629 )
    {
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21400/*"message3"*/, 0LL) || v5->fields.isScroll )
        goto LABEL_173;
      v31 = *p_waitMessage;
      if ( !*p_waitMessage )
        v31 = (System_String_o *)StringLiteral_1/*""*/;
      ScriptMessageCommonManager__AddText((ScriptMessageCommonManager_o *)v5, v31, 0, 0, 0LL);
      playSpeed = v5->fields.playSpeed;
LABEL_113:
      if ( playSpeed == 3 )
        this = (CommonMessageManager_o *)ScriptMessageCommonManager__MessageUpdate(
                                           (ScriptMessageCommonManager_o *)v5,
                                           0,
                                           0LL);
      goto LABEL_115;
    }
    if ( v24 != 226761566
      || !System_String__op_Equality(v23, (System_String_o *)StringLiteral_23998/*"touch2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ClearCount((ScriptMessageCommonManager_o *)v5, 0LL);
    v5->fields.isCancelInput = 1;
LABEL_115:
    state = 3;
    v5->fields.state = 3;
  }
  if ( v24 <= 0x91466F30 )
  {
    if ( v24 == -2124547466 )
    {
      if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_22438/*"page"*/, 0LL) )
        goto LABEL_173;
      if ( v5->fields.isBusy )
        goto LABEL_181;
      if ( v5->fields.isCancelInput )
        v5->fields.isCancelInput = 0;
      else
        ScriptMessageCommonManager__WaitNextTouch((ScriptMessageCommonManager_o *)v5, 1, 0LL);
      v33 = &StringLiteral_22442/*"page2"*/;
LABEL_120:
      v28 = *v33;
      *p_waitType = (System_String_o *)*v33;
LABEL_121:
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v28, (int32_t)v26, v27);
      goto LABEL_171;
    }
    if ( v24 != -1857654992
      || !System_String__op_Equality(v23, (System_String_o *)StringLiteral_18003/*"clear2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
LABEL_83:
    ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)v5, 0LL);
    goto LABEL_115;
  }
  if ( v24 == -336528737 )
  {
    if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_22443/*"page3"*/, 0LL) || v5->fields.isScroll )
      goto LABEL_173;
    goto LABEL_83;
  }
  if ( v24 == -16520990 )
  {
    if ( !System_String__op_Equality(v23, (System_String_o *)StringLiteral_21399/*"message2"*/, 0LL)
      || v5->fields.isWaitNextTouchRequest )
    {
      goto LABEL_173;
    }
    ScriptMessageCommonManager__ReturnScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0, 0LL);
    LODWORD(v28) = StringLiteral_21400/*"message3"*/;
    v5->fields.waitType = (struct System_String_o *)StringLiteral_21400/*"message3"*/;
    goto LABEL_121;
  }
  if ( v24 == -353306356
    && System_String__op_Equality(v23, (System_String_o *)StringLiteral_22442/*"page2"*/, 0LL)
    && !v5->fields.isWaitNextTouchRequest )
  {
    ScriptMessageCommonManager__PageScroll((ScriptMessageCommonManager_o *)v5, v5->fields.playSpeed == 3, 0LL);
    v49 = &StringLiteral_22443/*"page3"*/;
LABEL_188:
    v50 = *v49;
    v5->fields.waitType = (struct System_String_o *)*v49;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.waitType, v50, v47, v48);
  }
LABEL_173:
  isBusy = v5->fields.isBusy;
  ScriptMessageCommonManager__MessageUpdate((ScriptMessageCommonManager_o *)v5, delta > 0.0, 0LL);
  if ( !isBusy )
    return 0;
  return !v5->fields.isBusy && v5->fields.state == 3;
}


void __fastcall CommonMessageManager__Quit(CommonMessageManager_o *this, const MethodInfo *method)
{
  CommonMessageManager__EndExecuteScript(this, method);
  ScriptMessageCommonManager__ResetMessageWindow((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ResetLongPress((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__QuitScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__Shake((ScriptMessageCommonManager_o *)this, 0.0, 0.0, 0.0, 0.0, 0LL);
  ScriptMessageCommonManager__OffScreen((ScriptMessageCommonManager_o *)this, 0LL);
  ScriptMessageCommonManager__ClearText((ScriptMessageCommonManager_o *)this, 0LL);
}


void __fastcall CommonMessageManager__SetMessageBlock(
        CommonMessageManager_o *this,
        System_String_o *messageBlock,
        bool isDispLastTouchMark,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  bool v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x2

  v8 = isDispLastTouchMark;
  ScriptMessageCommonManager__ResetScroll((ScriptMessageCommonManager_o *)this, 0LL);
  this->fields.callbackFunc = callbackFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callbackFunc, v9, v10);
  CommonMessageManager__AnalysScript(this, messageBlock, v11);
  this->fields.executeIndex = 0;
  this->fields.isCancelInput = 0;
  this->fields.state = 3;
  this->fields.isDispLastTouchMark = v8;
}


void __fastcall CommonMessageManager__SetMessageSpeed(
        CommonMessageManager_o *this,
        int32_t playSpeed,
        const MethodInfo *method)
{
  this->fields.playSpeed = playSpeed;
}


void __fastcall CommonMessageManager__SetTalkName(
        CommonMessageManager_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t charaIndex; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *charaName; // [xsp+10h] [xbp-40h] BYREF
  System_String_o *className; // [xsp+18h] [xbp-38h] BYREF
  System_String_o *imageName; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_4A5CB87 & 1) == 0 )
  {
    sub_1B885B0(&ScriptMessageLabel_TypeInfo);
    byte_4A5CB87 = 1;
  }
  imageName = 0LL;
  charaName = 0LL;
  className = 0LL;
  charaIndex = 0;
  if ( !ScriptMessageLabel_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptMessageLabel_TypeInfo);
  ScriptMessageLabel__GetTalkName(&imageName, &className, &charaName, &charaIndex, name, 0LL);
  ScriptMessageCommonManager__SetTalkName(
    (ScriptMessageCommonManager_o *)this,
    0LL,
    className,
    charaName,
    charaIndex,
    0LL);
}


void __fastcall CommonMessageManager__SetTouchCallback(
        CommonMessageManager_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.touchCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.touchCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
}


void __fastcall CommonMessageManager__Update(CommonMessageManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  float i; // s0

  for ( i = RealTime__get_deltaTime(0LL); CommonMessageManager__ProcessScript(this, i, v3); i = 0.0 )
    ;
}