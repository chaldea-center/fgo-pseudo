void ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  ClassBoardModelBuilder_o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CCAEC5 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardModelBuilder_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_ClassBoardLine__TypeInfo);
    byte_4CCAEC5 = 1;
  }
  v3 = (ClassBoardModelBuilder_o *)sub_1C715FC(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v3, 0);
  this->fields._builder_k__BackingField = v3;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._builder_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.squareViewList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.lineViewList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (ClassBoardModelBuilder_o *)sub_1C715FC(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v24, 0);
  this->fields._GrandBuilder_k__BackingField = v24;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandBuilder_k__BackingField,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.GrandSquareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v31;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.GrandSquareViewList,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.GrandLineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v38;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.GrandLineViewList,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void ClassBoardController__Awake(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardController__CallbackSquareOnClick(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        int32_t acquireFlag,
        const MethodInfo *method)
{
  char v4; // w22
  __int64 v7; // x19
  Il2CppObject *Object_object; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  ClassBoardSquare_o **v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  ClassBoardSquare_o *v23; // x8
  __int64 naturalAligment; // x10
  bool v25; // w22
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  struct IClassBoardResourceCatalog_o *v31; // x21
  IClassBoardResourceCatalog_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  ClassBoardSquareDetailDialog_o *v36; // x21
  ClassBoardSquare_o *v37; // x20
  System_Action_o *v38; // x22
  struct IClassBoardResourceCatalog_o *v39; // x21
  IClassBoardResourceCatalog_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  ClassBoardDisableOpenDialog_o *v44; // x21
  ClassBoardSquare_o *v45; // x20
  System_Action_o *v46; // x22
  struct IClassBoardResourceCatalog_o *v47; // x22
  IClassBoardResourceCatalog_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  ClassBoardLockReleaseConditionDialog_o *v52; // x21
  ClassBoardSquare_o *v53; // x20
  System_Action_o *v54; // x22
  struct IClassBoardResourceCatalog_o *v55; // x22
  IClassBoardResourceCatalog_c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  Il2CppObject *v60; // x22
  ClassBoardSquare_o *v61; // x20
  ClassBoardController___c_c *v62; // x0
  System_Action_o *_9__90_3; // x21
  Il2CppObject *v64; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  System_Action_o *v72; // x23
  ClassBoardLockOpenConfirmDialog_o *v73; // x0
  ClassBoardSquare_o *v74; // x1
  bool v75; // w2
  System_Action_o *v76; // x3
  Il2CppObject *v77; // x22
  ClassBoardSquare_o *v78; // x20
  ClassBoardController___c_c *v79; // x0
  System_Action_o *_9__90_5; // x21
  Il2CppObject *v81; // x23
  struct ClassBoardController___c_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  System_Action_o *v89; // x23
  ClassBoardSquareOpenConfirmDialog_o *v90; // x0
  ClassBoardSquare_o *v91; // x1
  bool v92; // w2
  System_Action_o *v93; // x3
  struct IClassBoardResourceCatalog_o *v94; // x21
  IClassBoardResourceCatalog_c *v95; // x8
  __int64 v96; // x9
  int32_t *v97; // x10
  __int64 v98; // x0
  Il2CppObject *v99; // x21
  ClassBoardSquare_o *v100; // x20
  System_Action_o *v101; // x22
  Il2CppObject *v102; // x21
  ClassBoardSquare_o *v103; // x20
  System_Action_o *v104; // x22

  v4 = acquireFlag;
  if ( (byte_4CCAEA8 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C713B0(&ClassBoardLock_TypeInfo);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__CallbackSquareOnClick_b__90_3__);
    sub_1C713B0(&Method_ClassBoardController___c__CallbackSquareOnClick_b__90_5__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__0__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__11__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__12__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__1__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__2__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__4__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__6__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__7__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__8__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass90_0_TypeInfo);
    sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAEA8 = 1;
  }
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass90_0_TypeInfo);
  ClassBoardController___c__DisplayClass90_0___ctor((ClassBoardController___c__DisplayClass90_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_97;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = square;
  v16 = (ClassBoardSquare_o **)(v7 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)square, v17, v18, v19, v20, v21, v22);
  if ( (v4 & 1) != 0 )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v28 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
      if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_17;
        }
        v30 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_17:
        v30 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v30)(
                                        resourceCatalog,
                                        *(_QWORD *)(v30 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[7].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
        if ( Object_object )
        {
          v36 = (ClassBoardSquareDetailDialog_o *)Object_object;
          ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v37 = *(ClassBoardSquare_o **)(v7 + 24);
            v38 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v38,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__0__,
              0);
            ClassBoardSquareDetailDialog__Open(v36, v37, v38, 0);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 2) != 0 )
  {
    v31 = this->fields.resourceCatalog;
    if ( v31 )
    {
      v32 = v31->klass;
      v33 = *(unsigned __int16 *)&v31->klass->_2.rank;
      if ( *(_WORD *)&v31->klass->_2.rank )
      {
        v34 = &v32->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v34 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_23;
        }
        v35 = (__int64)&v32->vtable[*v34];
      }
      else
      {
LABEL_23:
        v35 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v35)(
                                        v31,
                                        *(_QWORD *)(v35 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[5].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
        if ( Object_object )
        {
          v44 = (ClassBoardDisableOpenDialog_o *)Object_object;
          ClassBoardDisableOpenDialog__Init((ClassBoardDisableOpenDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v45 = *(ClassBoardSquare_o **)(v7 + 24);
            v46 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v46,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__1__,
              0);
            ClassBoardDisableOpenDialog__Open(v44, v45, v46, 0);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 4) != 0 )
  {
    v39 = this->fields.resourceCatalog;
    if ( v39 )
    {
      v40 = v39->klass;
      v41 = *(unsigned __int16 *)&v39->klass->_2.rank;
      if ( *(_WORD *)&v39->klass->_2.rank )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v42 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_34;
        }
        v43 = (__int64)&v40->vtable[*v42];
      }
      else
      {
LABEL_34:
        v43 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v43)(
                                        v39,
                                        *(_QWORD *)(v43 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[6].monitor,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
        if ( Object_object )
        {
          v52 = (ClassBoardLockReleaseConditionDialog_o *)Object_object;
          ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v53 = *(ClassBoardSquare_o **)(v7 + 24);
            v54 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
            System_Action___ctor(
              v54,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__2__,
              0);
            ClassBoardLockReleaseConditionDialog__Open(v52, v53, 0, v54, 0);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v47 = this->fields.resourceCatalog;
    if ( !v47 )
      goto LABEL_97;
    v48 = v47->klass;
    v49 = *(unsigned __int16 *)&v47->klass->_2.rank;
    if ( *(_WORD *)&v47->klass->_2.rank )
    {
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_45;
      }
      v51 = (__int64)&v48->vtable[*v50];
    }
    else
    {
LABEL_45:
      v51 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v51)(
                                      v47,
                                      *(_QWORD *)(v51 + 8));
    if ( !Object_object )
      goto LABEL_97;
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      (Il2CppObject *)Object_object[6].klass,
                      this->fields.uiRoot,
                      0,
                      (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    if ( !Object_object )
      goto LABEL_97;
    v60 = Object_object;
    ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0);
    Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !Object_object )
      goto LABEL_97;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
    v61 = *v16;
    v62 = ClassBoardController___c_TypeInfo;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v62 = ClassBoardController___c_TypeInfo;
    }
    _9__90_3 = v62->static_fields->__9__90_3;
    if ( !_9__90_3 )
    {
      if ( !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        v62 = ClassBoardController___c_TypeInfo;
      }
      v64 = (Il2CppObject *)v62->static_fields->__9;
      _9__90_3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(_9__90_3, v64, Method_ClassBoardController___c__CallbackSquareOnClick_b__90_3__, 0);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
      static_fields->__9__90_3 = _9__90_3;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__90_3,
        (int32_t)_9__90_3,
        v66,
        v67,
        v68,
        v69,
        v70,
        v71);
    }
    v72 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v72,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__4__,
      0);
    v73 = (ClassBoardLockOpenConfirmDialog_o *)v60;
    v74 = v61;
    v75 = 0;
    v76 = _9__90_3;
  }
  else
  {
    if ( (v4 & 8) != 0 )
    {
      v55 = this->fields.resourceCatalog;
      if ( v55 )
      {
        v56 = v55->klass;
        v57 = *(unsigned __int16 *)&v55->klass->_2.rank;
        if ( *(_WORD *)&v55->klass->_2.rank )
        {
          v58 = &v56->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v58 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v57;
            v58 += 4;
            if ( !v57 )
              goto LABEL_56;
          }
          v59 = (__int64)&v56->vtable[*v58];
        }
        else
        {
LABEL_56:
          v59 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v59)(
                                          v55,
                                          *(_QWORD *)(v59 + 8));
        if ( Object_object )
        {
          Object_object = BaseMonoBehaviour__createObject_object_(
                            (BaseMonoBehaviour_o *)this,
                            (Il2CppObject *)Object_object[5].monitor,
                            this->fields.uiRoot,
                            0,
                            (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
          if ( Object_object )
          {
            v77 = Object_object;
            ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0);
            Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                              this,
                                              this->klass->vtable._4_get_classBoardUIController.method);
            if ( Object_object )
            {
              ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
              v78 = *v16;
              v79 = ClassBoardController___c_TypeInfo;
              if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                v79 = ClassBoardController___c_TypeInfo;
              }
              _9__90_5 = v79->static_fields->__9__90_5;
              if ( !_9__90_5 )
              {
                if ( !v79->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v79);
                  v79 = ClassBoardController___c_TypeInfo;
                }
                v81 = (Il2CppObject *)v79->static_fields->__9;
                _9__90_5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                System_Action___ctor(_9__90_5, v81, Method_ClassBoardController___c__CallbackSquareOnClick_b__90_5__, 0);
                v82 = ClassBoardController___c_TypeInfo->static_fields;
                v82->__9__90_5 = _9__90_5;
                sub_1C71354(
                  (GrandQuestFolderBoardItem_o *)&v82->__9__90_5,
                  (int32_t)_9__90_5,
                  v83,
                  v84,
                  v85,
                  v86,
                  v87,
                  v88);
              }
              v89 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
              System_Action___ctor(
                v89,
                (Il2CppObject *)v7,
                Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__6__,
                0);
              v90 = (ClassBoardSquareOpenConfirmDialog_o *)v77;
              v91 = v78;
              v92 = 0;
              v93 = _9__90_5;
              goto LABEL_92;
            }
          }
        }
      }
LABEL_97:
      sub_1C71608(Object_object, v9);
    }
    v23 = *v16;
    v25 = !*v16
       || (naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment,
           v23->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || v23->klass->_2.typeHierarchy[naturalAligment - 1] != (Il2CppClass *)ClassBoardLock_TypeInfo;
    v94 = this->fields.resourceCatalog;
    if ( !v94 )
      goto LABEL_97;
    v95 = v94->klass;
    v96 = *(unsigned __int16 *)&v94->klass->_2.rank;
    if ( *(_WORD *)&v94->klass->_2.rank )
    {
      v97 = &v95->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v97 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v96;
        v97 += 4;
        if ( !v96 )
          goto LABEL_85;
      }
      v98 = (__int64)&v95->vtable[*v97];
    }
    else
    {
LABEL_85:
      v98 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v98)(
                                      v94,
                                      *(_QWORD *)(v98 + 8));
    if ( !Object_object )
      goto LABEL_97;
    if ( v25 )
    {
      Object_object = BaseMonoBehaviour__createObject_object_(
                        (BaseMonoBehaviour_o *)this,
                        (Il2CppObject *)Object_object[5].monitor,
                        this->fields.uiRoot,
                        0,
                        (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( Object_object )
      {
        v99 = Object_object;
        ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0);
        Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                          this,
                                          this->klass->vtable._4_get_classBoardUIController.method);
        if ( Object_object )
        {
          ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
          v100 = *(ClassBoardSquare_o **)(v7 + 24);
          v101 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v101,
            (Il2CppObject *)v7,
            Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__11__,
            0);
          v89 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v89,
            (Il2CppObject *)v7,
            Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__12__,
            0);
          v92 = 1;
          v90 = (ClassBoardSquareOpenConfirmDialog_o *)v99;
          v91 = v100;
          v93 = v101;
LABEL_92:
          ClassBoardSquareOpenConfirmDialog__Open(v90, v91, v92, v93, v89, 0);
          return;
        }
      }
      goto LABEL_97;
    }
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      (Il2CppObject *)Object_object[6].klass,
                      this->fields.uiRoot,
                      0,
                      (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    if ( !Object_object )
      goto LABEL_97;
    v102 = Object_object;
    ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0);
    Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !Object_object )
      goto LABEL_97;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
    v103 = *(ClassBoardSquare_o **)(v7 + 24);
    v104 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v104,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__7__,
      0);
    v72 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v72,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__8__,
      0);
    v75 = 1;
    v73 = (ClassBoardLockOpenConfirmDialog_o *)v102;
    v74 = v103;
    v76 = v104;
  }
  ClassBoardLockOpenConfirmDialog__Open(v73, v74, v75, v76, v72, 0);
}


void ClassBoardController__CheckOpenMissionClearDialogSave(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardUIController_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  ClassBoardController___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x22
  System_Func_object__bool__o *_9__97_0; // x23
  Il2CppObject *v31; // x24
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  ClassBoardController___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x22
  System_Func_object__int__o *_9__97_1; // x23
  Il2CppObject *v43; // x24
  GrandQuestFolderBoardItem_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x22
  ClassBoardUIController_o *v52; // x19
  System_Action_o *v53; // x21
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v54; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CCAEAF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
    sub_1C713B0(&System_Func_IClassBoardLockModel__int__TypeInfo);
    sub_1C713B0(&System_Func_IClassBoardLockModel__bool__TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_0__);
    sub_1C713B0(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_1__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass97_0__CheckOpenMissionClearDialogSave_b__2__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass97_0_TypeInfo);
    sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAEAF = 1;
  }
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass97_0_TypeInfo);
  ClassBoardController___c__DisplayClass97_0___ctor((ClassBoardController___c__DisplayClass97_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v22;
  if ( !squareModel )
    goto LABEL_29;
  klass = squareModel->klass;
  v24 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_9;
    }
    v26 = (__int64)&klass->vtable[*p_offset + 17];
  }
  else
  {
LABEL_9:
    v26 = sub_1C47738(squareModel, IClassBoardSquareModel_TypeInfo, 17);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))v26)(
    squareModel,
    &source,
    *(_QWORD *)(v26 + 8));
  v27 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v28 = ClassBoardController___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v28 = ClassBoardController___c_TypeInfo;
  }
  _9__97_0 = (System_Func_object__bool__o *)v28->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ClassBoardController___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__97_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__97_0,
      v31,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_0__,
      0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__97_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__97_0,
      (int32_t)_9__97_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)_9__97_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v40 = ClassBoardController___c_TypeInfo;
  v41 = v39;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v40 = ClassBoardController___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v40->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = ClassBoardController___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v43,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__97_1__,
      0);
    v44 = (GrandQuestFolderBoardItem_o *)ClassBoardController___c_TypeInfo->static_fields;
    v44[1].klass = (GrandQuestFolderBoardItem_c *)_9__97_1;
    sub_1C71354(v44 + 1, (int32_t)_9__97_1, v45, v46, v47, v48, v49, v50);
  }
  v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v41,
                                                               (System_Func_TSource__TKey__o *)_9__97_1,
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( !System_Linq_Enumerable__Any_object_(
          v51,
          (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    goto LABEL_28;
  }
  v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8
    || (ClassBoardUIController__SetCameraWorkBlock(v8, 1, 0),
        v52 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method),
        v53 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo),
        System_Action___ctor(
          v53,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass97_0__CheckOpenMissionClearDialogSave_b__2__,
          0),
        !v52) )
  {
LABEL_29:
    sub_1C71608(v8, v9);
  }
  ClassBoardUIController__OpenMissionClearDialog(v52, v53, 0);
LABEL_28:
  v54 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v51,
                                                                                    (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v54, 0);
}


void ClassBoardController__CheckQuestOpenDialog(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  IClassBoardSquareModel_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  Il2CppObject *Object_object; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *Instance; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  Il2CppObject *v35; // x24
  System_String_o *v36; // x22
  System_Action_o *v37; // x23
  ClassBoardQuestOpenConfirmDialog_o *v38; // x21
  int32_t grandBaseId; // w19
  ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *v40; // x22
  int32_t v41; // [xsp+8h] [xbp-38h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCAEB0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
    sub_1C713B0(&Method_ClassBoardQuestOpenConfirmDialog_Close__);
    sub_1C713B0(&ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass98_0__CheckQuestOpenDialog_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass98_0_TypeInfo);
    sub_1C713B0(&StringLiteral_13701/*"Terminal/Quest/{0}"*/);
    byte_4CCAEB0 = 1;
  }
  questId = 0;
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass98_0_TypeInfo);
  ClassBoardController___c__DisplayClass98_0___ctor((ClassBoardController___c__DisplayClass98_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  if ( !squareModel )
    goto LABEL_28;
  klass = squareModel->klass;
  v17 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_9;
    }
    v19 = (__int64)&(&klass->rgctx_data)[2 * *p_offset + 39];
  }
  else
  {
LABEL_9:
    v19 = sub_1C47738(squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v19)(squareModel, *(_QWORD *)(v19 + 8)) & 1) == 0 )
    goto LABEL_21;
  v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
         this,
         this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8 )
    goto LABEL_28;
  if ( !ClassBoardUIController__IsOpenQuestOpenDialog(
          (ClassBoardUIController_o *)v8,
          this->fields.grandBaseId,
          &questId,
          0) )
  {
LABEL_21:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0);
    return;
  }
  v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
         this,
         this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8 )
    goto LABEL_28;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)v8, 1, 0);
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_28;
  v21 = resourceCatalog->klass;
  v22 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v23 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_20;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_20:
    v24 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v24)(
         resourceCatalog,
         *(_QWORD *)(v24 + 8));
  if ( !v8 )
    goto LABEL_28;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)this,
                    *(Il2CppObject **)(v8 + 136),
                    this->fields.uiRoot,
                    0,
                    (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
  *(_QWORD *)(v7 + 32) = Object_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)Object_object, v26, v27, v28, v29, v30, v31);
  v8 = *(_QWORD *)(v7 + 32);
  if ( !v8 )
    goto LABEL_28;
  ClassBoardQuestOpenConfirmDialog__Init((ClassBoardQuestOpenConfirmDialog_o *)v8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v41 = questId;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v34 = System_String__Format((System_String_o *)StringLiteral_13701/*"Terminal/Quest/{0}"*/, v33, 0);
  v35 = *(Il2CppObject **)(v7 + 32);
  v36 = v34;
  v37 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v37, v35, Method_ClassBoardQuestOpenConfirmDialog_Close__, 0);
  if ( !Instance
    || (CommonUI__TryGetSceneTransitionAction((CommonUI_o *)Instance, (System_Action_o **)(v7 + 24), v36, 0, v37, 0),
        v38 = *(ClassBoardQuestOpenConfirmDialog_o **)(v7 + 32),
        grandBaseId = this->fields.grandBaseId,
        v40 = (ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *)sub_1C715FC(ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo),
        ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
          v40,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass98_0__CheckQuestOpenDialog_b__0__,
          0),
        !v38) )
  {
LABEL_28:
    sub_1C71608(v8, v9);
  }
  ClassBoardQuestOpenConfirmDialog__Open(v38, grandBaseId, v40, 0);
}


void ClassBoardController__CheckUMedalCreateEventTutorial(
        ClassBoardController_o *this,
        bool isGrandScoreTutorialDisplayed,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x23
  ClassBoardRootComponent_c *v17; // x0
  bool v18; // w0
  ClassBoardRootComponent_c *v19; // x0
  _BOOL4 isGrandScoreReleaseDialogOpen; // w8
  ClassBoardRootComponent_o *classBoardRootComponent; // x20
  bool v22; // w25
  System_String_o *U_MEDAL_CREATE_BG_MOVIE_NAME; // x22
  System_Action_o *v24; // x23

  if ( (byte_4CCAEC4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ClassBoardRootComponent_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass119_0_TypeInfo);
    byte_4CCAEC4 = 1;
  }
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass119_0_TypeInfo);
  ClassBoardController___c__DisplayClass119_0___ctor((ClassBoardController___c__DisplayClass119_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = endAction;
  v16 = v7 + 16;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)endAction, v10, v11, v12, v13, v14, v15);
  v17 = ClassBoardRootComponent_TypeInfo;
  if ( !ClassBoardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo);
    v17 = ClassBoardRootComponent_TypeInfo;
  }
  v18 = EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
          v17->static_fields->U_MEDAL_CREATE_EVENT_ID,
          96,
          0);
  if ( this->fields.baseId == 9 && v18 )
  {
    v19 = ClassBoardRootComponent_TypeInfo;
    isGrandScoreReleaseDialogOpen = this->fields.isGrandScoreReleaseDialogOpen;
    classBoardRootComponent = this->fields.classBoardRootComponent;
    v22 = !isGrandScoreReleaseDialogOpen;
    if ( !ClassBoardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo);
      v19 = ClassBoardRootComponent_TypeInfo;
    }
    U_MEDAL_CREATE_BG_MOVIE_NAME = v19->static_fields->U_MEDAL_CREATE_BG_MOVIE_NAME;
    v24 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      v24,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__0__,
      0);
    if ( classBoardRootComponent )
    {
      ClassBoardRootComponent__PlayMovie(
        classBoardRootComponent,
        U_MEDAL_CREATE_BG_MOVIE_NAME,
        v22 && !isGrandScoreTutorialDisplayed,
        v24,
        0);
      return;
    }
LABEL_15:
    sub_1C71608(v8, v9);
  }
  if ( *(_QWORD *)v16 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v16 + 64LL),
      *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


ClassBoardSquare_o *ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        UnityEngine_Transform_o *parent,
        bool isGrand,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x20
  BaseMonoBehaviour_o *v10; // x21
  BaseMonoBehaviour_c *klass; // x23
  BaseMonoBehaviour_o *v12; // x24
  BaseMonoBehaviour_o *v13; // x26
  _QWORD *image; // x8
  __int64 v15; // x9
  IClassBoardResourceCatalog_c **v16; // x10
  __int64 v17; // x0
  Il2CppObject *Object_object; // x22
  IClassBoardResourceCatalog_c **v19; // x10
  __int64 v20; // x0

  v9 = (Il2CppObject *)defaultPrefab;
  v10 = (BaseMonoBehaviour_o *)this;
  if ( (byte_4CCAEA3 & 1) == 0 )
  {
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardController_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAEA3 = 1;
  }
  if ( assetId )
  {
    klass = v10[3].klass;
    if ( isGrand )
      v12 = 0;
    else
      v12 = v10;
    if ( isGrand )
      v13 = v10;
    else
      v13 = 0;
    if ( !klass )
      goto LABEL_34;
    image = klass->_1.image;
    v15 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( isGrand )
    {
      if ( *((_WORD *)klass->_1.image + 151) )
      {
        v16 = (IClassBoardResourceCatalog_c **)(image[22] + 8LL);
        while ( *(v16 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v15;
          v16 += 2;
          if ( !v15 )
            goto LABEL_16;
        }
        v17 = (__int64)&image[2 * *(_DWORD *)v16 + 53];
      }
      else
      {
LABEL_16:
        v17 = sub_1C47738(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 7);
      }
      this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v17)(
                                         klass,
                                         (unsigned int)assetId,
                                         *(_QWORD *)(v17 + 8));
      defaultPrefab = (ClassBoardSquare_o *)this;
      v12 = v13;
    }
    else
    {
      if ( *((_WORD *)klass->_1.image + 151) )
      {
        v19 = (IClassBoardResourceCatalog_c **)(image[22] + 8LL);
        while ( *(v19 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v15;
          v19 += 2;
          if ( !v15 )
            goto LABEL_22;
        }
        v20 = (__int64)&image[2 * *(_DWORD *)v19 + 47];
      }
      else
      {
LABEL_22:
        v20 = sub_1C47738(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 4);
      }
      this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v20)(
                                         klass,
                                         (unsigned int)assetId,
                                         *(_QWORD *)(v20 + 8));
      defaultPrefab = (ClassBoardSquare_o *)this;
    }
    if ( !v12 )
LABEL_34:
      sub_1C71608(this, defaultPrefab);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v12,
                      (Il2CppObject *)defaultPrefab,
                      parent,
                      0,
                      (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
  }
  else
  {
    Object_object = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object, 0, 0) )
    return (ClassBoardSquare_o *)Object_object;
  else
    return (ClassBoardSquare_o *)BaseMonoBehaviour__createObject_object_(
                                   v10,
                                   v9,
                                   parent,
                                   0,
                                   (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


void ClassBoardController__CreateViews(ClassBoardController_o *this, bool isGrand, const MethodInfo *method)
{
  ClassBoardController_c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x10
  __int64 v9; // x9
  __int64 v10; // x11
  __int64 *v11; // x24
  __int64 v12; // x8
  System_Collections_Generic_List_object__o *v13; // x25
  System_Collections_Generic_List_object__o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x24
  ClassBoardController_o *v21; // x23
  ClassBoardController_o *v22; // x29
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  IClassBoardSquareModel_o *v31; // x26
  __int64 v32; // x0
  __int64 v33; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x27
  IClassBoardResourceCatalog_c *v35; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 v38; // x0
  IClassBoardSquareModel_c *v39; // x8
  __int64 v40; // x9
  IClassBoardSquareModel_c **v41; // x10
  __int64 v42; // x0
  IClassBoardResourceCatalog_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  struct IClassBoardResourceCatalog_o *v49; // x27
  ClassBoardController_o *v50; // x10
  ClassBoardController_o *v51; // x9
  IClassBoardResourceCatalog_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  struct IClassBoardResourceCatalog_o *v56; // x27
  ClassBoardController_o *v57; // x10
  ClassBoardController_o *v58; // x9
  IClassBoardResourceCatalog_c *v59; // x8
  __int64 v60; // x9
  int32_t *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x0
  __int64 v64; // x1
  ClassBoardSquare_o **v65; // x9
  ClassBoardController_o *v66; // x27
  IClassBoardSquareModel_c *v67; // x8
  ClassBoardSquare_o *v68; // x28
  __int64 v69; // x9
  IClassBoardSquareModel_c **v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x5
  IClassBoardResourceCatalog_c *v75; // x8
  __int64 v76; // x9
  int32_t *v77; // x10
  __int64 v78; // x0
  IClassBoardResourceCatalog_c *v79; // x8
  __int64 v80; // x9
  int32_t *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  ClassBoardSquare_o **v85; // x9
  __int64 v86; // x0
  __int64 v87; // x1
  ClassBoardSquare_o **v88; // x9
  __int64 v89; // x0
  __int64 v90; // x1
  IClassBoardSquareModel_c *v91; // x8
  __int64 v92; // x9
  IClassBoardSquareModel_c **v93; // x10
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x0
  __int64 v97; // x1
  IClassBoardSquareModel_c *v98; // x8
  __int64 v99; // x9
  IClassBoardSquareModel_c **v100; // x10
  __int64 v101; // x0
  __int64 v102; // x1
  ClassBoardSquare_o *v103; // x0
  __int64 v104; // x1
  Il2CppObject *v105; // x27
  __int64 v106; // x0
  __int64 v107; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  struct System_Object_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  Il2CppClass **v117; // x0
  __int64 v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  __int64 *v122; // x23
  __int64 v123; // x8
  __int64 v124; // x9
  int *v125; // x10
  __int64 v126; // x0
  __int64 v127; // x1
  __int64 v128; // x23
  ClassBoardController_o *v129; // x26
  ClassBoardController_o *v130; // x27
  __int64 v131; // x8
  __int64 v132; // x9
  int *v133; // x10
  __int64 v134; // x0
  __int64 v135; // x8
  __int64 v136; // x9
  int *v137; // x10
  __int64 v138; // x0
  __int64 v139; // x0
  __int64 v140; // x1
  struct IClassBoardResourceCatalog_o *v141; // x25
  IClassBoardLineModel_o *v142; // x24
  IClassBoardResourceCatalog_c *v143; // x8
  __int64 v144; // x9
  int32_t *v145; // x10
  __int64 v146; // x0
  IClassBoardResourceCatalog_c *v147; // x8
  __int64 v148; // x9
  int32_t *v149; // x10
  __int64 v150; // x0
  __int64 v151; // x0
  __int64 v152; // x1
  Il2CppObject **v153; // x8
  BaseMonoBehaviour_o *v154; // x0
  __int64 v155; // x0
  Il2CppObject *Object_object; // x0
  __int64 v157; // x1
  Il2CppObject *v158; // x25
  __int64 v159; // x0
  __int64 v160; // x1
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  Il2CppClass **v170; // x0
  __int64 v171; // x8
  __int64 v172; // x9
  int *v173; // x10
  __int64 v174; // x0
  __int64 v175; // [xsp+0h] [xbp-90h]
  ClassBoardController_o *v176; // [xsp+8h] [xbp-88h]
  ClassBoardController_o *v177; // [xsp+10h] [xbp-80h]
  ClassBoardController_o *v178; // [xsp+18h] [xbp-78h]
  ClassBoardController_o *v179; // [xsp+20h] [xbp-70h]

  if ( (byte_4CCAEA2 & 1) == 0 )
  {
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    sub_1C713B0(&IClassBoardLockModel_TypeInfo);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine__Add__);
    byte_4CCAEA2 = 1;
  }
  klass = this->klass;
  if ( isGrand )
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))klass->vtable._9_get_GrandBuilder.methodPtr)(
           this,
           klass->vtable._9_get_GrandBuilder.method,
           method);
  else
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))klass->vtable._6_get_builder.methodPtr)(
           this,
           klass->vtable._6_get_builder.method,
           method);
  if ( isGrand )
    v8 = 248;
  else
    v8 = 112;
  if ( isGrand )
    v9 = 256;
  else
    v9 = 120;
  if ( isGrand )
    v10 = 200;
  else
    v10 = 40;
  if ( !v6 )
    goto LABEL_239;
  v11 = *(__int64 **)(v6 + 24);
  v175 = v6;
  if ( !v11 )
    goto LABEL_239;
  v12 = *v11;
  v13 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v8);
  v14 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v9);
  v15 = *(UnityEngine_Transform_o **)((char *)&this->klass + v10);
  v16 = *(unsigned __int16 *)(*v11 + 302);
  if ( *(_WORD *)(*v11 + 302) )
  {
    v17 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v17 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_21;
    }
    v18 = v12 + 16LL * *v17 + 312;
  }
  else
  {
LABEL_21:
    v18 = sub_1C47738(v11, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v18)(v11, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C71608(0, v19);
  v21 = 0;
  v22 = 0;
  v178 = 0;
  v179 = 0;
  v176 = 0;
  v177 = 0;
  while ( 1 )
  {
    v23 = *(_QWORD *)v20;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_29;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_1C47738(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v20, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v20;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v29 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_36;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_36:
      v30 = sub_1C47738(v20, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0);
    }
    v31 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v20, *(_QWORD *)(v30 + 8));
    v32 = sub_1C714EC(v31, IClassBoardLockModel_TypeInfo);
    if ( v32 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( isGrand )
        v21 = this;
      else
        v22 = this;
      if ( isGrand )
      {
        if ( !resourceCatalog )
          sub_1C71608(v32, v33);
        v35 = resourceCatalog->klass;
        v36 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
        if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
        {
          p_offset = &v35->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v36;
            p_offset += 4;
            if ( !v36 )
              goto LABEL_48;
          }
          v38 = (__int64)&v35->vtable[*p_offset];
        }
        else
        {
LABEL_48:
          v38 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        v63 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v38)(
                resourceCatalog,
                *(_QWORD *)(v38 + 8));
        if ( !v63 )
          sub_1C71608(0, v64);
        v65 = (ClassBoardSquare_o **)(v63 + 64);
        v66 = v21;
      }
      else
      {
        if ( !resourceCatalog )
          sub_1C71608(v32, v33);
        v43 = resourceCatalog->klass;
        v44 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
        if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v45 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_60;
          }
          v46 = (__int64)&v43->vtable[*v45];
        }
        else
        {
LABEL_60:
          v46 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        v63 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v46)(
                resourceCatalog,
                *(_QWORD *)(v46 + 8));
        if ( !v63 )
          sub_1C71608(0, v64);
        v65 = (ClassBoardSquare_o **)(v63 + 32);
        v66 = v22;
      }
      if ( !v31 )
        sub_1C71608(v63, v64);
      v67 = v31->klass;
      v68 = *v65;
      v69 = *(unsigned __int16 *)&v31->klass->_2.rank;
      if ( *(_WORD *)&v31->klass->_2.rank )
      {
        v70 = (IClassBoardSquareModel_c **)&v67->_1.interfaceOffsets->offset;
        while ( *(v70 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v69;
          v70 += 2;
          if ( !v69 )
            goto LABEL_98;
        }
        v71 = (__int64)&v67->vtable[*(_DWORD *)v70 + 10];
      }
      else
      {
LABEL_98:
        v71 = sub_1C47738(v31, IClassBoardSquareModel_TypeInfo, 10);
      }
      v72 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v71)(v31, *(_QWORD *)(v71 + 8));
      if ( !v66 )
        sub_1C71608(v72, v73);
    }
    else
    {
      if ( !v31 )
        sub_1C71608(0, v33);
      v39 = v31->klass;
      v40 = *(unsigned __int16 *)&v31->klass->_2.rank;
      if ( *(_WORD *)&v31->klass->_2.rank )
      {
        v41 = (IClassBoardSquareModel_c **)&v39->_1.interfaceOffsets->offset;
        while ( *(v41 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v40;
          v41 += 2;
          if ( !v40 )
            goto LABEL_54;
        }
        v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 5];
      }
      else
      {
LABEL_54:
        v42 = sub_1C47738(v31, IClassBoardSquareModel_TypeInfo, 5);
      }
      v47 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v42)(v31, *(_QWORD *)(v42 + 8));
      if ( (v47 & 1) != 0 )
      {
        v49 = this->fields.resourceCatalog;
        if ( isGrand )
          v50 = v178;
        else
          v50 = this;
        v51 = v179;
        if ( isGrand )
          v51 = this;
        v178 = v50;
        v179 = v51;
        if ( isGrand )
        {
          if ( !v49 )
            sub_1C71608(v47, v48);
          v52 = v49->klass;
          v53 = *(unsigned __int16 *)&v49->klass->_2.rank;
          if ( *(_WORD *)&v49->klass->_2.rank )
          {
            v54 = &v52->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v54 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v53;
              v54 += 4;
              if ( !v53 )
                goto LABEL_74;
            }
            v55 = (__int64)&v52->vtable[*v54];
          }
          else
          {
LABEL_74:
            v55 = sub_1C47738(v49, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v83 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v55)(
                  v49,
                  *(_QWORD *)(v55 + 8));
          if ( !v83 )
            sub_1C71608(0, v84);
          v66 = v179;
          v85 = (ClassBoardSquare_o **)(v83 + 72);
        }
        else
        {
          if ( !v49 )
            sub_1C71608(v47, v48);
          v75 = v49->klass;
          v76 = *(unsigned __int16 *)&v49->klass->_2.rank;
          if ( *(_WORD *)&v49->klass->_2.rank )
          {
            v77 = &v75->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v77 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v76;
              v77 += 4;
              if ( !v76 )
                goto LABEL_107;
            }
            v78 = (__int64)&v75->vtable[*v77];
          }
          else
          {
LABEL_107:
            v78 = sub_1C47738(v49, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v89 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v78)(
                  v49,
                  *(_QWORD *)(v78 + 8));
          if ( !v89 )
            sub_1C71608(0, v90);
          v66 = v178;
          v85 = (ClassBoardSquare_o **)(v89 + 40);
        }
        v91 = v31->klass;
        v68 = *v85;
        v92 = *(unsigned __int16 *)&v31->klass->_2.rank;
        if ( *(_WORD *)&v31->klass->_2.rank )
        {
          v93 = (IClassBoardSquareModel_c **)&v91->_1.interfaceOffsets->offset;
          while ( *(v93 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v92;
            v93 += 2;
            if ( !v92 )
              goto LABEL_127;
          }
          v94 = (__int64)&v91->vtable[*(_DWORD *)v93 + 10];
        }
        else
        {
LABEL_127:
          v94 = sub_1C47738(v31, IClassBoardSquareModel_TypeInfo, 10);
        }
        v72 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v94)(v31, *(_QWORD *)(v94 + 8));
        if ( !v66 )
          sub_1C71608(v72, v95);
      }
      else
      {
        v56 = this->fields.resourceCatalog;
        if ( isGrand )
          v57 = v176;
        else
          v57 = this;
        v58 = v177;
        if ( isGrand )
          v58 = this;
        v176 = v57;
        v177 = v58;
        if ( isGrand )
        {
          if ( !v56 )
            sub_1C71608(v47, v48);
          v59 = v56->klass;
          v60 = *(unsigned __int16 *)&v56->klass->_2.rank;
          if ( *(_WORD *)&v56->klass->_2.rank )
          {
            v61 = &v59->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v61 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v60;
              v61 += 4;
              if ( !v60 )
                goto LABEL_86;
            }
            v62 = (__int64)&v59->vtable[*v61];
          }
          else
          {
LABEL_86:
            v62 = sub_1C47738(v56, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v86 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v62)(
                  v56,
                  *(_QWORD *)(v62 + 8));
          if ( !v86 )
            sub_1C71608(0, v87);
          v66 = v177;
          v88 = (ClassBoardSquare_o **)(v86 + 48);
        }
        else
        {
          if ( !v56 )
            sub_1C71608(v47, v48);
          v79 = v56->klass;
          v80 = *(unsigned __int16 *)&v56->klass->_2.rank;
          if ( *(_WORD *)&v56->klass->_2.rank )
          {
            v81 = &v79->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v81 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v80;
              v81 += 4;
              if ( !v80 )
                goto LABEL_113;
            }
            v82 = (__int64)&v79->vtable[*v81];
          }
          else
          {
LABEL_113:
            v82 = sub_1C47738(v56, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v96 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v82)(
                  v56,
                  *(_QWORD *)(v82 + 8));
          if ( !v96 )
            sub_1C71608(0, v97);
          v66 = v176;
          v88 = (ClassBoardSquare_o **)(v96 + 16);
        }
        v98 = v31->klass;
        v68 = *v88;
        v99 = *(unsigned __int16 *)&v31->klass->_2.rank;
        if ( *(_WORD *)&v31->klass->_2.rank )
        {
          v100 = (IClassBoardSquareModel_c **)&v98->_1.interfaceOffsets->offset;
          while ( *(v100 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v99;
            v100 += 2;
            if ( !v99 )
              goto LABEL_138;
          }
          v101 = (__int64)&v98->vtable[*(_DWORD *)v100 + 10];
        }
        else
        {
LABEL_138:
          v101 = sub_1C47738(v31, IClassBoardSquareModel_TypeInfo, 10);
        }
        v72 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v101)(v31, *(_QWORD *)(v101 + 8));
        if ( !v66 )
          sub_1C71608(v72, v102);
      }
    }
    v103 = ClassBoardController__CloneSquareObject(v66, v68, v72, v15, isGrand, v74);
    v105 = (Il2CppObject *)v103;
    if ( !v103 )
      sub_1C71608(0, v104);
    ClassBoardSquare__Setup(v103, v31, 0);
    if ( !v13 )
      sub_1C71608(v106, v107);
    items = v13->fields._items;
    v115 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1C71608(v106, v107);
    size = v13->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        v105,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
    }
    else
    {
      v117 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v117[4] = (Il2CppClass *)v105;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v117 + 4), (int32_t)v105, v108, v109, v110, v111, v112, v113);
    }
  }
  v118 = *(_QWORD *)v20;
  v119 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v120 - 1) != System_IDisposable_TypeInfo )
    {
      --v119;
      v120 += 4;
      if ( !v119 )
        goto LABEL_151;
    }
    v121 = v118 + 16LL * *v120 + 312;
  }
  else
  {
LABEL_151:
    v121 = sub_1C47738(v20, System_IDisposable_TypeInfo, 0);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v20, *(_QWORD *)(v121 + 8));
  v122 = *(__int64 **)(v175 + 16);
  if ( !v122 )
LABEL_239:
    sub_1C71608(v6, v7);
  v123 = *v122;
  v124 = *(unsigned __int16 *)(*v122 + 302);
  if ( *(_WORD *)(*v122 + 302) )
  {
    v125 = (int *)(*(_QWORD *)(v123 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v125 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v124;
      v125 += 4;
      if ( !v124 )
        goto LABEL_158;
    }
    v126 = v123 + 16LL * *v125 + 312;
  }
  else
  {
LABEL_158:
    v126 = sub_1C47738(*(_QWORD *)(v175 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v128 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v126)(v122, *(_QWORD *)(v126 + 8));
  if ( !v128 )
    sub_1C71608(0, v127);
  v129 = 0;
  v130 = 0;
  while ( 1 )
  {
    v131 = *(_QWORD *)v128;
    v132 = *(unsigned __int16 *)(*(_QWORD *)v128 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v128 + 302LL) )
    {
      v133 = (int *)(*(_QWORD *)(v131 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v133 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v132;
        v133 += 4;
        if ( !v132 )
          goto LABEL_166;
      }
      v134 = v131 + 16LL * *v133 + 312;
    }
    else
    {
LABEL_166:
      v134 = sub_1C47738(v128, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v134)(v128, *(_QWORD *)(v134 + 8)) & 1) == 0 )
      break;
    v135 = *(_QWORD *)v128;
    v136 = *(unsigned __int16 *)(*(_QWORD *)v128 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v128 + 302LL) )
    {
      v137 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v137 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v136;
        v137 += 4;
        if ( !v136 )
          goto LABEL_173;
      }
      v138 = v135 + 16LL * *v137 + 312;
    }
    else
    {
LABEL_173:
      v138 = sub_1C47738(v128, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v139 = (*(__int64 (__fastcall **)(__int64, _QWORD))v138)(v128, *(_QWORD *)(v138 + 8));
    v141 = this->fields.resourceCatalog;
    v142 = (IClassBoardLineModel_o *)v139;
    if ( isGrand )
      v129 = this;
    else
      v130 = this;
    if ( isGrand )
    {
      if ( !v141 )
        sub_1C71608(v139, v140);
      v143 = v141->klass;
      v144 = *(unsigned __int16 *)&v141->klass->_2.rank;
      if ( *(_WORD *)&v141->klass->_2.rank )
      {
        v145 = &v143->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v145 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v144;
          v145 += 4;
          if ( !v144 )
            goto LABEL_184;
        }
        v146 = (__int64)&v143->vtable[*v145];
      }
      else
      {
LABEL_184:
        v146 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v151 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v146)(
               v141,
               *(_QWORD *)(v146 + 8));
      if ( !v151 )
        sub_1C71608(0, v152);
      v153 = (Il2CppObject **)(v151 + 56);
      v154 = (BaseMonoBehaviour_o *)v129;
    }
    else
    {
      if ( !v141 )
        sub_1C71608(v139, v140);
      v147 = v141->klass;
      v148 = *(unsigned __int16 *)&v141->klass->_2.rank;
      if ( *(_WORD *)&v141->klass->_2.rank )
      {
        v149 = &v147->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v149 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v148;
          v149 += 4;
          if ( !v148 )
            goto LABEL_190;
        }
        v150 = (__int64)&v147->vtable[*v149];
      }
      else
      {
LABEL_190:
        v150 = sub_1C47738(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v155 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v150)(
               v141,
               *(_QWORD *)(v150 + 8));
      if ( !v155 )
        sub_1C71608(0, v152);
      v153 = (Il2CppObject **)(v155 + 24);
      v154 = (BaseMonoBehaviour_o *)v130;
    }
    if ( !v154 )
      sub_1C71608(0, v152);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v154,
                      *v153,
                      v15,
                      0,
                      (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v158 = Object_object;
    if ( !Object_object )
      sub_1C71608(0, v157);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v142, 0);
    if ( !v14 )
      sub_1C71608(v159, v160);
    v167 = v14->fields._items;
    v168 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++v14->fields._version;
    if ( !v167 )
      sub_1C71608(v159, v160);
    v169 = v14->fields._size;
    if ( (unsigned int)v169 >= LODWORD(v167->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        v158,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    }
    else
    {
      v170 = &v167->obj.klass + v169;
      v14->fields._size = v169 + 1;
      v170[4] = (Il2CppClass *)v158;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v170 + 4), (int32_t)v158, v161, v162, v163, v164, v165, v166);
    }
  }
  v171 = *(_QWORD *)v128;
  v172 = *(unsigned __int16 *)(*(_QWORD *)v128 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v128 + 302LL) )
  {
    v173 = (int *)(*(_QWORD *)(v171 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v173 - 1) != System_IDisposable_TypeInfo )
    {
      --v172;
      v173 += 4;
      if ( !v172 )
        goto LABEL_208;
    }
    v174 = v171 + 16LL * *v173 + 312;
  }
  else
  {
LABEL_208:
    v174 = sub_1C47738(v128, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v174)(v128, *(_QWORD *)(v174 + 8));
}


System_Collections_IEnumerator_o *ClassBoardController__DelayCheckGrandScoreTutorial(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCAEC0 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController__DelayCheckGrandScoreTutorial_d__115_TypeInfo);
    byte_4CCAEC0 = 1;
  }
  v3 = sub_1C715FC(ClassBoardController__DelayCheckGrandScoreTutorial_d__115_TypeInfo);
  ClassBoardController__DelayCheckGrandScoreTutorial_d__115___ctor(
    (ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__DispGrandScoreAddClassDialog(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CCAEBB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController_EndGrandBoardTransition__);
    byte_4CCAEBB = 1;
  }
  v3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardController_EndGrandBoardTransition__, 0);
  EventTutorialMaster__CheckTutorial(0, 105, v3, this->fields.grandBaseId, 0, 0, 0, 0);
}


void ClassBoardController__EndGrandBoardTransition(ClassBoardController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CCAEBC & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CCAEBC = 1;
  }
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, 0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        this->fields.isGrandScoreReleaseDialogOpen = 0,
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
}


void ClassBoardController__EndPlayGrandReturnTransitionAnimation(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  ClassBoardController_c *klass; // x8
  System_Action_o *v9; // x20

  if ( (byte_4CCAEBF & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__114_0__);
    byte_4CCAEBF = 1;
  }
  if ( !isClickedClassScoreButton )
    ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, method);
  ClassBoardController__RefreshUi(this, this->fields.baseId, isClickedClassScoreButton, v3);
  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( !GrandBoardRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = (UnityEngine_GameObject_o *)this->fields.GrandBoardObjectsParent;
  if ( !GrandBoardRoot )
    goto LABEL_13;
  GrandBoardRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)GrandBoardRoot, 0);
  if ( !GrandBoardRoot )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = (UnityEngine_GameObject_o *)this->fields.background;
  if ( !GrandBoardRoot
    || (ClassBoardBackground__InitGrandClassReleasedEffect((ClassBoardBackground_o *)GrandBoardRoot, v6),
        klass = this->klass,
        this->fields.CurrentBoardType = 1,
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                        this,
                                                        klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)GrandBoardRoot, 0, 0),
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                        this,
                                                        this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_13:
    sub_1C71608(GrandBoardRoot, v6);
  }
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)GrandBoardRoot, 0);
  v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__114_0__,
    0);
  EventTutorialMaster__CheckTutorial(0, 82, v9, 0, 0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__EndPlayGrandTransitionAnimation(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_IEnumerator_o *v6; // x0
  bool *p_isPlayEffectToGrandBoard; // x21
  int32_t grandBaseId; // w8
  UnityEngine_Component_o *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  char v17; // w21
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ClassBoardBaseEntity_o *v22; // x0
  __int64 v23; // x1
  ClassBoardBaseEntity_o *v24; // x22
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4CCAEB9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CCAEB9 = 1;
  }
  if ( this->fields.isDirectlyGrandBoard )
  {
    if ( !this->fields.isPlayEffectToGrandBoard )
    {
      p_isPlayEffectToGrandBoard = &this->fields.isPlayEffectToGrandBoard;
      if ( !isClickedClassScoreButton )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( this->fields.baseId == 8 )
    {
      v6 = ClassBoardController__PlayExClassGrandScoreRelease(this, (const MethodInfo *)isClickedClassScoreButton);
LABEL_54:
      UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v6, 0);
      return;
    }
    p_isPlayEffectToGrandBoard = &this->fields.isPlayEffectToGrandBoard;
    goto LABEL_41;
  }
  p_isPlayEffectToGrandBoard = &this->fields.isPlayEffectToGrandBoard;
  if ( this->fields.isPlayEffectToGrandBoard )
  {
LABEL_41:
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                              this,
                                              this->klass->vtable._4_get_classBoardUIController.method,
                                              method);
    if ( !gameObject )
      goto LABEL_58;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    MainMenuBar__setMenuActive(1, 0, 0);
    if ( !isClickedClassScoreButton )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( isClickedClassScoreButton )
LABEL_9:
    ClassBoardController__SetOnClickBack(this, this->fields.directlyBackAction, method);
LABEL_10:
  if ( !this->fields.isDirectlyGrandBoard || *p_isPlayEffectToGrandBoard )
    ClassBoardController__RefreshUi(this, this->fields.grandBaseId, isClickedClassScoreButton, v3);
  grandBaseId = this->fields.grandBaseId;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 0;
  if ( grandBaseId != 10001 || EventTutorialMaster__IsTutorialAvailable(0, 100, 0, 0, 0, 0, 0) )
  {
LABEL_53:
    v6 = ClassBoardController__DelayCheckGrandScoreTutorial(this, (const MethodInfo *)isClickedClassScoreButton);
    goto LABEL_54;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !gameObject )
    goto LABEL_58;
  gameObject = (UnityEngine_Component_o *)gameObject[1].fields.m_CachedPtr;
  if ( !gameObject )
    goto LABEL_58;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)gameObject,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_24;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_24:
      v16 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_31;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_31:
      v21 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v22 = (ClassBoardBaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                      Enumerator,
                                      *(_QWORD *)(v21 + 8));
    v24 = v22;
    if ( !v22 )
      sub_1C71608(0, v23);
    if ( ClassBoardBaseEntity__IsGrand(v22, 0) && v24->fields.id != 10001 && ClassBoardBaseEntity__IsOpen(v24, 0) )
      goto LABEL_46;
  }
  v17 = 0;
LABEL_46:
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_50;
    }
    v28 = (__int64)&v25->vtable[*v27];
  }
  else
  {
LABEL_50:
    v28 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( (v17 & 1) != 0 )
    goto LABEL_53;
  gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !gameObject )
LABEL_58:
    sub_1C71608(gameObject, v10);
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)gameObject, 0);
}


void ClassBoardController__EndPlayReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v5; // x19
  MissionNotifyManager_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  ClassBoardController_o *v21; // x23
  __int64 *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  IClassBoardSquareModel_c **v25; // x10
  __int64 v26; // x0
  int32_t v27; // w21
  __int64 v28; // x20
  System_Action_object__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Action_object__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Action_object__o *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  ActionChain_o *v50; // x21
  __int64 v51; // x20
  System_Action_o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4CCAEAE & 1) == 0 )
  {
    sub_1C713B0(&ActionChain_TypeInfo);
    sub_1C713B0(&System_Action___TypeInfo);
    sub_1C713B0(&System_Action_Action____TypeInfo);
    sub_1C713B0(&System_Action_Action__TypeInfo);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&CondType_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__0__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__1__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__2__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__3__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass96_0_TypeInfo);
    byte_4CCAEAE = 1;
  }
  v5 = sub_1C715FC(ClassBoardController___c__DisplayClass96_0_TypeInfo);
  ClassBoardController___c__DisplayClass96_0___ctor((ClassBoardController___c__DisplayClass96_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = squareModel;
  v14 = (__int64 **)(v5 + 24);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)squareModel, v15, v16, v17, v18, v19, v20);
  IsNullOrEmpty = (MissionNotifyManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)this->fields.squareViewList,
                                              0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    v21 = 0;
  else
    v21 = this;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    LOBYTE(IsNullOrEmpty) = 0;
    v21 = this;
  }
  else
  {
    v22 = *v14;
    if ( !*v14 )
      goto LABEL_31;
    v23 = *v22;
    v24 = *(unsigned __int16 *)(*v22 + 302);
    if ( *(_WORD *)(*v22 + 302) )
    {
      v25 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *(v25 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v24;
        v25 += 2;
        if ( !v24 )
          goto LABEL_14;
      }
      v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
    }
    else
    {
LABEL_14:
      v26 = sub_1C47738(*v14, IClassBoardSquareModel_TypeInfo, 1);
    }
    v27 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsNullOrEmpty = (MissionNotifyManager_o *)CondType__IsClassBoardSquareAllReleased(v27, 0);
    if ( !v21 )
      goto LABEL_31;
  }
  v21->fields.isPlayFullReleaseEffect = (unsigned __int8)IsNullOrEmpty & 1;
  if ( !this->fields.isPlayFullReleaseEffect )
  {
    IsNullOrEmpty = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_31;
    MissionNotifyManager__EndPause(IsNullOrEmpty, 0);
  }
  v28 = sub_1C71458(System_Action_Action____TypeInfo, 3);
  v29 = (System_Action_object__o *)sub_1C715FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__0__,
    0);
  if ( !v28 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v28 + 24) )
    goto LABEL_32;
  *(_QWORD *)(v28 + 32) = v29;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 32), (int32_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_object__o *)sub_1C715FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__1__,
    0);
  if ( *(_DWORD *)(v28 + 24) <= 1u )
    goto LABEL_32;
  *(_QWORD *)(v28 + 40) = v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 40), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Action_object__o *)sub_1C715FC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v43,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__2__,
    0);
  if ( *(_DWORD *)(v28 + 24) <= 2u )
    goto LABEL_32;
  *(_QWORD *)(v28 + 48) = v43;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v28 + 48), (int32_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (ActionChain_o *)sub_1C715FC(ActionChain_TypeInfo);
  ActionChain___ctor_49408028(v50, (System_Action_Action__array *)v28, 0);
  v51 = sub_1C71458(System_Action___TypeInfo, 1);
  v52 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass96_0__EndPlayReleaseEffect_b__3__,
    0);
  if ( !v51 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v51 + 24) )
LABEL_32:
    sub_1C71610(IsNullOrEmpty);
  *(_QWORD *)(v51 + 32) = v52;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 32), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  if ( !v50
    || (IsNullOrEmpty = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                                    (ChainableActionBase_o *)v50,
                                                    (System_Action_array *)v51,
                                                    0)) == 0 )
  {
LABEL_31:
    sub_1C71608(IsNullOrEmpty, v7);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)IsNullOrEmpty, 0);
}


void ClassBoardController__FinishedClassBoardStartEffect(
        ClassBoardController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ClassBoardUIController_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x3
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4CCAEAD & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass95_0_TypeInfo);
    byte_4CCAEAD = 1;
  }
  v5 = sub_1C715FC(ClassBoardController___c__DisplayClass95_0_TypeInfo);
  ClassBoardController___c__DisplayClass95_0___ctor((ClassBoardController___c__DisplayClass95_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_QWORD *)(v5 + 24) = callback,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19),
        (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__TouchEnable(v6, 0),
        (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_12:
    sub_1C71608(v6, v7);
  }
  ClassBoardUIController__SetCameraWorkBlock(v6, 0, 0);
  background = this->fields.background;
  if ( this->fields.isDirectlyGrandBoard )
  {
    cameraResetSec = 0.0;
    if ( !background )
      goto LABEL_12;
  }
  else
  {
    if ( !background )
      goto LABEL_12;
    cameraResetSec = background->fields.cameraResetSec;
  }
  cameraResetEasingType = background->fields.cameraResetEasingType;
  v23 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__0__,
    0);
  v25 = ClassBoardController__ResetClassBoardCameraCoroutine(this, cameraResetSec, cameraResetEasingType, v23, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v25, 0);
}


System_String_o *ClassBoardController__GetHeaderSpriteName(
        ClassBoardController_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CCAEA5 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_20712/*"img_txt_classscore_{0}"*/);
    byte_4CCAEA5 = 1;
  }
  v6 = id;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Format((System_String_o *)StringLiteral_20712/*"img_txt_classscore_{0}"*/, v4, 0);
}


void ClassBoardController__HideGrandBoard(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  __int64 v5; // x20
  ClassBoardUIController_o *GrandSquareViewList; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x1
  ClassBoardBackground_o *background; // x21
  SimpleAnimation_o *grandBoardRootAnimation; // x19
  SimpleAnimation_o *boardRootAnimation; // x22
  System_Action_o *v19; // x23
  const MethodInfo *v20; // x5
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4CCAEBE & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass113_0__HideGrandBoard_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass113_0_TypeInfo);
    byte_4CCAEBE = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v22, 0, sizeof(v22));
  v5 = sub_1C715FC(ClassBoardController___c__DisplayClass113_0_TypeInfo);
  ClassBoardController___c__DisplayClass113_0___ctor((ClassBoardController___c__DisplayClass113_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_23;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 24) = isClickedClassScoreButton;
  if ( this->fields.CurrentBoardType != 2 )
    return;
  GrandSquareViewList = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      this,
                                                      this->klass->vtable._4_get_classBoardUIController.method);
  if ( !GrandSquareViewList )
    goto LABEL_23;
  ClassBoardUIController__TouchDisable(GrandSquareViewList, 0);
  if ( !this->fields.grandUserSvtIds )
    goto LABEL_18;
  GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandSquareViewList;
  if ( !GrandSquareViewList )
    goto LABEL_23;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)GrandSquareViewList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  for ( i = v21;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
        i.fields._current->klass->vtable[8].methodPtr() )
  {
    if ( !i.fields._current )
      sub_1C71608(0, v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
  GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandLineViewList;
  if ( !GrandSquareViewList )
LABEL_23:
    sub_1C71608(GrandSquareViewList, v7);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)GrandSquareViewList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
  {
    if ( !v22.fields._current )
      sub_1C71608(0, v15);
    ClassBoardLine__PlayGrandToClassTransition((ClassBoardLine_o *)v22.fields._current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
LABEL_18:
  background = this->fields.background;
  boardRootAnimation = this->fields.boardRootAnimation;
  grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
  v19 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass113_0__HideGrandBoard_b__0__,
    0);
  if ( !background )
    goto LABEL_23;
  ClassBoardBackground__PlayGrandReturnTransitionAnimation(
    background,
    boardRootAnimation,
    grandBoardRootAnimation,
    v19,
    0,
    v20);
}


void ClassBoardController__HideGrandBoardObj(ClassBoardController_o *this, bool isDispButton, const MethodInfo *method)
{
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  UnityEngine_GameObject_o *GrandBoardUnderMask; // x0
  UnityEngine_Component_o *GrandBoardObjectsParent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( GrandBoardRoot )
    UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardUnderMask = this->fields.GrandBoardUnderMask;
  if ( GrandBoardUnderMask )
    UnityEngine_GameObject__SetActive(GrandBoardUnderMask, 0, 0);
  GrandBoardObjectsParent = (UnityEngine_Component_o *)this->fields.GrandBoardObjectsParent;
  if ( GrandBoardObjectsParent )
  {
    gameObject = UnityEngine_Component__get_gameObject(GrandBoardObjectsParent, 0);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                             this,
                                             this->klass->vtable._4_get_classBoardUIController.method,
                                             method);
  if ( !gameObject
    || (ClassBoardUIController__ActivateGrandScoreButton((ClassBoardUIController_o *)gameObject, isDispButton, 0),
        (gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                    this,
                                                    this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_11:
    sub_1C71608(gameObject, v9);
  }
  ClassBoardUIController__ActivateClassBoardResetButton((ClassBoardUIController_o *)gameObject, 1, 0);
}


bool ClassBoardController__IsEmptyGrandServant(ClassBoardController_o *this, const MethodInfo *method)
{
  return BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0);
}


bool ClassBoardController__IsNeverSetGrandServant(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.grandUserSvtIds == 0;
}


bool ClassBoardController__IsTouchEnableUi(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4CCAEC3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAEC3 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v3, 0, 0) )
    return 0;
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v4 )
    sub_1C71608(0, v5);
  return ClassBoardUIController__get_IsTouchEnable(v4, 0);
}


void ClassBoardController__OnClickClassBoardResetButton(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Instance; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  CommonUI_o *v19; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  CommonConfirmDialog_ClickDelegate_o *v23; // x24

  if ( (byte_4CCAEC2 & 1) == 0 )
  {
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass117_0_TypeInfo);
    sub_1C713B0(&StringLiteral_113/*" "*/);
    sub_1C713B0(&StringLiteral_13521/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_13522/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_13523/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DIALOG_MSG"*/);
    byte_4CCAEC2 = 1;
  }
  v3 = sub_1C715FC(ClassBoardController___c__DisplayClass117_0_TypeInfo);
  ClassBoardController___c__DisplayClass117_0___ctor((ClassBoardController___c__DisplayClass117_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Instance, v13, v14, v15, v16, v17, v18);
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v4 )
    goto LABEL_9;
  ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0);
  v19 = *(CommonUI_o **)(v3 + 16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13523/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DIALOG_MSG"*/, 0);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13522/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DECIDE"*/, 0);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13521/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_CANCEL"*/, 0);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__0__,
    0);
  if ( !v19 )
LABEL_9:
    sub_1C71608(v4, v5);
  CommonUI__OpenConfirmDialog_31440276(
    v19,
    (System_String_o *)StringLiteral_113/*" "*/,
    v20,
    v21,
    v22,
    0,
    v23,
    0,
    30,
    0.0,
    36.0,
    1,
    0,
    0);
}


void ClassBoardController__OnClickClassBoardSelectButton(ClassBoardController_o *this, const MethodInfo *method)
{
  struct System_Action_o *toClassBoardSelectAction; // x8
  ClassBoardController_o *v3; // x19
  struct ClassBoardRootComponent_o *classBoardRootComponent; // x8

  toClassBoardSelectAction = this->fields.toClassBoardSelectAction;
  v3 = this;
  if ( toClassBoardSelectAction )
    this = (ClassBoardController_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))toClassBoardSelectAction->fields.invoke_impl)(
                                       toClassBoardSelectAction->fields.method_code,
                                       toClassBoardSelectAction->fields.method);
  classBoardRootComponent = v3->fields.classBoardRootComponent;
  if ( !classBoardRootComponent || (this = (ClassBoardController_o *)classBoardRootComponent->fields.pageSwitcher) == 0 )
    sub_1C71608(this, method);
  ClassBoardPageSwitcher__ClearReturnSceneName((ClassBoardPageSwitcher_o *)this, 0);
}


void ClassBoardController__OnClickClassScoreButton(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4CCAEA0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__OnClickClassScoreButton_b__78_0__);
    byte_4CCAEA0 = 1;
  }
  if ( this->fields.CurrentBoardType == 2 )
  {
    v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController__OnClickClassScoreButton_b__78_0__, 0);
    ClassBoardController__SetOnClickBack(this, v4, v5);
    ClassBoardController__HideGrandBoard(this, 1, v6);
  }
  else
  {
    ClassBoardController__ShowGrandBoard(this, 1, v2);
  }
}


void ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassStatisticsInfo_array *classStatisticsInfos; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  int32_t v7; // w20
  Il2CppObject *Instance; // x21
  System_Action_o *v9; // x22

  if ( (byte_4CCAE9E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__OnClickEffectList_b__76_0__);
    sub_1C713B0(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAE9E = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
  {
    classStatisticsInfos = (ClassStatisticsInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !classStatisticsInfos )
      goto LABEL_19;
    if ( CommonUI__IsOpenClassBoardEffectListDialog((CommonUI_o *)classStatisticsInfos, 0) )
      return;
    v6 = this->fields.CurrentBoardType == 1 ? 144LL : 224LL;
    v7 = *(_DWORD *)((char *)&this->klass + v6);
    classStatisticsInfos = (ClassStatisticsInfo_array *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                          this,
                                                          this->klass->vtable._4_get_classBoardUIController.method);
    if ( !classStatisticsInfos )
      goto LABEL_19;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)classStatisticsInfos, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__76_0__, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                               0);
    if ( !Instance )
LABEL_19:
      sub_1C71608(classStatisticsInfos, v5);
    CommonUI__OpenClassBoardEffectListDialog(
      (CommonUI_o *)Instance,
      0,
      v7,
      1,
      v9,
      0,
      0,
      0,
      0,
      classStatisticsInfos,
      0,
      0);
  }
}


void ClassBoardController__OnClickGrandScoreButton(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_4CCAE9F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__OnClickGrandScoreButton_b__77_0__);
    byte_4CCAE9F = 1;
  }
  if ( this->fields.CurrentBoardType == 1 )
  {
    v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController__OnClickGrandScoreButton_b__77_0__, 0);
    ClassBoardController__SetOnClickBack(this, v4, v5);
    ClassBoardController__ShowGrandBoard(this, 0, v6);
  }
  else
  {
    ClassBoardController__HideGrandBoard(this, 0, v2);
  }
}


void ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1
  int32_t CurrentBoardType; // w20
  System_Action_o *v7; // x0
  bool v8; // zf
  System_Action_o *v9; // x20
  int32_t v10; // w1
  bool v11; // w3
  System_Action_o *v12; // x2

  if ( (byte_4CCAE9C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__OnClickHelp_b__74_0__);
    sub_1C713B0(&Method_ClassBoardController__OnClickHelp_b__74_1__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAE9C = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
  {
    v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                       this,
                                       this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v4 )
      sub_1C71608(0, v5);
    ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0);
    CurrentBoardType = this->fields.CurrentBoardType;
    v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    v8 = CurrentBoardType == 1;
    v9 = v7;
    if ( v8 )
    {
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__74_0__, 0);
      v10 = 82;
      v12 = v9;
      v11 = 0;
    }
    else
    {
      System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__74_1__, 0);
      v10 = 100;
      v11 = 1;
      v12 = v9;
    }
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, v10, v12, v11, 0);
  }
}


void ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CCAEA1 & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
    byte_4CCAEA1 = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_3A5F74C *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    v5 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
    if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v5;
        p_offset += 2;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2];
    }
    else
    {
LABEL_8:
      v7 = sub_1C47738(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(resourceCatalog, *(_QWORD *)(v7 + 8));
  }
}


void ClassBoardController__OnEndClickProcess(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  if ( !square
    || (square->fields._IsProcessingClick_k__BackingField = 0,
        (this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method,
                                            method)) == 0) )
  {
    sub_1C71608(this, square);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 0, 0);
}


void ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  ClassBoardUIController_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Transform_o *boardObjectsParent; // x0
  UnityEngine_Transform_o *v13; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  ClassBoardController___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  System_Func_object__bool__o *_9__92_0; // x22
  Il2CppObject *v18; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  ClassBoardController___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__int__o *_9__92_1; // x22
  Il2CppObject *v30; // x23
  struct ClassBoardController___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v39; // x0
  ClassBoardController___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x22
  System_Func_object__bool__o *_9__92_2; // x23
  Il2CppObject *v43; // x24
  struct ClassBoardController___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  ClassBoardController___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x22
  System_Func_object__int__o *_9__92_3; // x23
  Il2CppObject *v55; // x24
  struct ClassBoardController___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x22
  System_Object_array *v65; // x0
  ClassBoardController___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x21
  System_Func_object__object__o *_9__92_4; // x23
  Il2CppObject *v69; // x24
  struct ClassBoardController___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v78; // x0
  System_Object_array *v79; // x0
  ClassBoardController___c_c *v80; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x21
  System_Func_object__object__o *_9__92_5; // x22
  Il2CppObject *v83; // x23
  struct ClassBoardController___c_StaticFields *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v92; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v94; // x21
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAEAA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_ClassBoardLock___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_ClassBoardLock___);
    sub_1C713B0(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
    sub_1C713B0(&System_Func_ClassBoardLock__int__TypeInfo);
    sub_1C713B0(&System_Func_ClassBoardLock__bool__TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_0__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_1__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_2__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_3__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_4__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_5__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__6__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass92_0_TypeInfo);
    sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAEAA = 1;
  }
  v3 = sub_1C715FC(ClassBoardController___c__DisplayClass92_0_TypeInfo);
  ClassBoardController___c__DisplayClass92_0___ctor((ClassBoardController___c__DisplayClass92_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_52;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  boardObjectsParent = this->fields.boardObjectsParent;
  v95.fields.x = 0.0;
  v95.fields.y = 0.0;
  v95.fields.z = 0.0;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 256;
  TransformHelper__SetLocalPosition(boardObjectsParent, v95, 0);
  v13 = this->fields.boardObjectsParent;
  if ( !byte_4CC0D0E )
  {
    Instance = (ClassBoardUIController_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !v13 )
    goto LABEL_52;
  UnityEngine_Transform__set_localScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__TouchDisable(Instance, 0);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__SetCameraWorkBlock(Instance, 1, 0);
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v15 = ClassBoardController___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v15 = ClassBoardController___c_TypeInfo;
  }
  _9__92_0 = (System_Func_object__bool__o *)v15->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = ClassBoardController___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__92_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__92_0,
      v18,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_0__,
      0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__92_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__92_0,
      (int32_t)_9__92_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)_9__92_0,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v27 = ClassBoardController___c_TypeInfo;
  v28 = v26;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v27 = ClassBoardController___c_TypeInfo;
  }
  _9__92_1 = (System_Func_object__int__o *)v27->static_fields->__9__92_1;
  if ( !_9__92_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ClassBoardController___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__92_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__92_1,
      v30,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_1__,
      0);
    v31 = ClassBoardController___c_TypeInfo->static_fields;
    v31->__9__92_1 = (struct System_Func_ClassBoardLock__int__o *)_9__92_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v31->__9__92_1, (int32_t)_9__92_1, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__92_1,
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  v39 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.GrandSquareViewList,
          (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v40 = ClassBoardController___c_TypeInfo;
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v40 = ClassBoardController___c_TypeInfo;
  }
  _9__92_2 = (System_Func_object__bool__o *)v40->static_fields->__9__92_2;
  if ( !_9__92_2 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = ClassBoardController___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__92_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__92_2,
      v43,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_2__,
      0);
    v44 = ClassBoardController___c_TypeInfo->static_fields;
    v44->__9__92_2 = (struct System_Func_ClassBoardLock__bool__o *)_9__92_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v44->__9__92_2, (int32_t)_9__92_2, v45, v46, v47, v48, v49, v50);
  }
  v51 = System_Linq_Enumerable__Where_object_(
          v41,
          (System_Func_TSource__bool__o *)_9__92_2,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v52 = ClassBoardController___c_TypeInfo;
  v53 = v51;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v52 = ClassBoardController___c_TypeInfo;
  }
  _9__92_3 = (System_Func_object__int__o *)v52->static_fields->__9__92_3;
  if ( !_9__92_3 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = ClassBoardController___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__92_3 = (System_Func_object__int__o *)sub_1C715FC(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__92_3,
      v55,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_3__,
      0);
    v56 = ClassBoardController___c_TypeInfo->static_fields;
    v56->__9__92_3 = (struct System_Func_ClassBoardLock__int__o *)_9__92_3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v56->__9__92_3, (int32_t)_9__92_3, v57, v58, v59, v60, v61, v62);
  }
  v63 = System_Linq_Enumerable__OrderBy_object__int_(
          v53,
          (System_Func_TSource__TKey__o *)_9__92_3,
          (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v3 + 16) = 0;
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
  if ( System_Linq_Enumerable__Any_object_(
         v38,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v65 = System_Linq_Enumerable__ToArray_object_(
            v38,
            (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v66 = ClassBoardController___c_TypeInfo;
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v66 = ClassBoardController___c_TypeInfo;
    }
    _9__92_4 = (System_Func_object__object__o *)v66->static_fields->__9__92_4;
    if ( !_9__92_4 )
    {
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v66 = ClassBoardController___c_TypeInfo;
      }
      v69 = (Il2CppObject *)v66->static_fields->__9;
      _9__92_4 = (System_Func_object__object__o *)sub_1C715FC(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__92_4,
        v69,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_4__,
        0);
      v70 = ClassBoardController___c_TypeInfo->static_fields;
      v70->__9__92_4 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__92_4;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v70->__9__92_4, (int32_t)_9__92_4, v71, v72, v73, v74, v75, v76);
    }
    v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v67,
                                                                 (System_Func_TSource__TResult__o *)_9__92_4,
                                                                 (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v78 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v77,
                                                                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v78, 0);
  }
  if ( System_Linq_Enumerable__Any_object_(
         v64,
         (const MethodInfo_3156C84 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v79 = System_Linq_Enumerable__ToArray_object_(
            v64,
            (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v80 = ClassBoardController___c_TypeInfo;
    v81 = (System_Collections_Generic_IEnumerable_TSource__o *)v79;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v80 = ClassBoardController___c_TypeInfo;
    }
    _9__92_5 = (System_Func_object__object__o *)v80->static_fields->__9__92_5;
    if ( !_9__92_5 )
    {
      if ( !v80->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v80);
        v80 = ClassBoardController___c_TypeInfo;
      }
      v83 = (Il2CppObject *)v80->static_fields->__9;
      _9__92_5 = (System_Func_object__object__o *)sub_1C715FC(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__92_5,
        v83,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__92_5__,
        0);
      v84 = ClassBoardController___c_TypeInfo->static_fields;
      v84->__9__92_5 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__92_5;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v84->__9__92_5, (int32_t)_9__92_5, v85, v86, v87, v88, v89, v90);
    }
    v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v81,
                                                                 (System_Func_TSource__TResult__o *)_9__92_5,
                                                                 (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v92 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v91,
                                                                                      (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v92, 0);
  }
  effectController = this->fields.effectController;
  v94 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v94,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__6__,
    0);
  if ( !effectController )
LABEL_52:
    sub_1C71608(Instance, v5);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v94, 0);
}


void ClassBoardController__PlayDirectlyGrandBoardOpenEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4CCAEAB & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__93_0__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CCAEAB = 1;
  }
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_14;
  ClassBoardUIController__TouchDisable(Instance, 0);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_14;
  ClassBoardUIController__SetCameraWorkBlock(Instance, 1, 0);
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  if ( this->fields.isPlayEffectToGrandBoard )
  {
    Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                             this,
                                             this->klass->vtable._4_get_classBoardUIController.method);
    if ( Instance )
    {
      Instance = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        MainMenuBar__setMenuActive(0, 0, 0);
        goto LABEL_12;
      }
    }
LABEL_14:
    sub_1C71608(Instance, v4);
  }
  if ( this->fields.isDirectlyGrandBoard )
    ClassBoardController__RefreshUi(this, this->fields.grandBaseId, 0, v5);
LABEL_12:
  this->fields.isFinishedClassScoreAnimation = 0;
  effectController = this->fields.effectController;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v7,
    (Il2CppObject *)this,
    Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__93_0__,
    0);
  if ( !effectController )
    goto LABEL_14;
  ClassBoardEffectController__SkipClassBoardStartEffect(effectController, v7, 0);
  started = ClassBoardController__WaitFinishedClassBoardStartEffect(this, 0, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__PlayExClassGrandScoreRelease(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCAEBD & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController__PlayExClassGrandScoreRelease_d__112_TypeInfo);
    byte_4CCAEBD = 1;
  }
  v3 = sub_1C715FC(ClassBoardController__PlayExClassGrandScoreRelease_d__112_TypeInfo);
  ClassBoardController__PlayExClassGrandScoreRelease_d__112___ctor(
    (ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__PlayFullReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Object_o *ClassBoardRoot; // x22
  __int64 *v29; // x21
  __int64 v30; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **v32; // x10
  __int64 v33; // x0
  struct ClassBoardBackground_o *background; // x8
  float fullReleaseEffectCameraResetSec; // s8
  int32_t fullReleaseEffectCameraEasingType; // w21
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4CCAEB1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass99_0__PlayFullReleaseEffect_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass99_0_TypeInfo);
    byte_4CCAEB1 = 1;
  }
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass99_0_TypeInfo);
  ClassBoardController___c__DisplayClass99_0___ctor((ClassBoardController___c__DisplayClass99_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = squareModel;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)squareModel, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callback, v22, v23, v24, v25, v26, v27);
  if ( !this->fields.isPlayFullReleaseEffect )
    goto LABEL_8;
  ClassBoardRoot = (UnityEngine_Object_o *)this->fields.ClassBoardRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(ClassBoardRoot, 0, 0) )
  {
LABEL_8:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 32), 0);
    return;
  }
  v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
         this,
         this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)v8, 1, 0),
        (v8 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                this,
                this->klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)v8, 0), (v29 = *(__int64 **)(v7 + 16)) == 0) )
  {
LABEL_24:
    sub_1C71608(v8, v9);
  }
  v30 = *v29;
  v31 = *(unsigned __int16 *)(*v29 + 302);
  if ( *(_WORD *)(*v29 + 302) )
  {
    v32 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v32 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v31;
      v32 += 2;
      if ( !v31 )
        goto LABEL_16;
    }
    v33 = v30 + 16LL * (*(_DWORD *)v32 + 12) + 312;
  }
  else
  {
LABEL_16:
    v33 = sub_1C47738(*(_QWORD *)(v7 + 16), IClassBoardSquareModel_TypeInfo, 12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
  background = this->fields.background;
  if ( (v8 & 1) != 0 )
  {
    fullReleaseEffectCameraResetSec = 0.0;
    if ( !background )
      goto LABEL_24;
  }
  else
  {
    if ( !background )
      goto LABEL_24;
    fullReleaseEffectCameraResetSec = background->fields.fullReleaseEffectCameraResetSec;
  }
  fullReleaseEffectCameraEasingType = background->fields.fullReleaseEffectCameraEasingType;
  v37 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass99_0__PlayFullReleaseEffect_b__0__,
    0);
  v39 = ClassBoardController__ResetClassBoardCameraCoroutine(
          this,
          fullReleaseEffectCameraResetSec,
          fullReleaseEffectCameraEasingType,
          v37,
          v38);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v39, 0);
}


void ClassBoardController__PlayGrandExClassReleaseEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4CCAEBA & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController_DispGrandScoreAddClassDialog__);
    byte_4CCAEBA = 1;
  }
  background = this->fields.background;
  v4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController_DispGrandScoreAddClassDialog__, 0);
  if ( !background )
    sub_1C71608(v5, v6);
  ClassBoardBackground__PlayStartGrandExClassReleaseEffectPlayer(background, v4, v7);
}


System_Collections_IEnumerator_o *ClassBoardController__PlayGrandSquareAndLine(
        ClassBoardController_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCAEB8 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController__PlayGrandSquareAndLine_d__107_TypeInfo);
    byte_4CCAEB8 = 1;
  }
  v5 = sub_1C715FC(ClassBoardController__PlayGrandSquareAndLine_d__107_TypeInfo);
  ClassBoardController__PlayGrandSquareAndLine_d__107___ctor(
    (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


void ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardUIController_o *transform; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v24; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v26; // x0
  int v27; // w0
  __int64 v28; // x8
  ClassBoardEffectController_o *v29; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  float v33; // s11
  float v34; // s12
  float v35; // s13
  System_Action_o *v36; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAEB2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass100_0__PlayMoveCamera_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass100_0_TypeInfo);
    byte_4CCAEB2 = 1;
  }
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass100_0_TypeInfo);
  ClassBoardController___c__DisplayClass100_0___ctor((ClassBoardController___c__DisplayClass100_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !transform )
    goto LABEL_20;
  ClassBoardUIController__TouchDisable(transform, 0);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !transform )
    goto LABEL_20;
  ClassBoardUIController__SetCameraWorkBlock(transform, 1, 0);
  if ( !square )
    goto LABEL_20;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_20;
  klass = SquareModel_k__BackingField->klass;
  v24 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v24;
      p_offset += 2;
      if ( !v24 )
        goto LABEL_12;
    }
    v26 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_12:
    v26 = sub_1C47738(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1);
  }
  v27 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v26)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v26 + 8));
  v28 = 264;
  if ( v27 != this->fields.grandBaseId )
    v28 = 128;
  v29 = *(ClassBoardEffectController_o **)((char *)&this->klass + v28);
  transform = (ClassBoardUIController_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)square, 0);
  if ( !transform )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_20;
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0);
  v33 = localScale.fields.x;
  v34 = localScale.fields.y;
  v35 = localScale.fields.z;
  v36 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass100_0__PlayMoveCamera_b__0__,
    0);
  if ( !v29 )
LABEL_20:
    sub_1C71608(transform, v9);
  v39.fields.z = z * v35;
  v39.fields.y = y * v34;
  v39.fields.x = x * v33;
  ClassBoardEffectController__PlaySelectMoveCamera(v29, v39, v36, 0);
}


void ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x23
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardUIController_o *v24; // x22
  __int64 v25; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v27; // x0
  struct IClassBoardSquareModel_o *v28; // x22
  IClassBoardSquareModel_c *v29; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  ClassBoardEffectController_o *v34; // x20
  System_Action_o *v35; // x22

  if ( (byte_4CCAEA9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass91_0__PlayReleaseEffect_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass91_0_TypeInfo);
    byte_4CCAEA9 = 1;
  }
  v7 = sub_1C715FC(ClassBoardController___c__DisplayClass91_0_TypeInfo);
  ClassBoardController___c__DisplayClass91_0___ctor((ClassBoardController___c__DisplayClass91_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = endAct;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)endAct, v16, v17, v18, v19, v20, v21);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_28;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_28;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !square )
    goto LABEL_28;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_28;
  klass = SquareModel_k__BackingField->klass;
  v24 = (ClassBoardUIController_o *)Instance;
  v25 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      p_offset += 2;
      if ( !v25 )
        goto LABEL_13;
    }
    v27 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_13:
    v27 = sub_1C47738(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  Instance = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v27)(
               SquareModel_k__BackingField,
               *(_QWORD *)(v27 + 8));
  if ( !v24 )
    goto LABEL_28;
  ClassBoardUIController__UpdateItemList(v24, Instance & 1, 0);
  v28 = square->fields._SquareModel_k__BackingField;
  if ( !v28 )
    goto LABEL_28;
  v29 = v28->klass;
  v30 = *(unsigned __int16 *)&v28->klass->_2.rank;
  if ( *(_WORD *)&v28->klass->_2.rank )
  {
    v31 = (IClassBoardSquareModel_c **)&v29->_1.interfaceOffsets->offset;
    while ( *(v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_21;
    }
    v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 1];
  }
  else
  {
LABEL_21:
    v32 = sub_1C47738(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1);
  }
  v33 = (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) == this->fields.grandBaseId
      ? 264LL
      : 128LL;
  v34 = *(ClassBoardEffectController_o **)((char *)&this->klass + v33);
  v35 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass91_0__PlayReleaseEffect_b__0__,
    0);
  if ( !v34 )
LABEL_28:
    sub_1C71608(Instance, v9);
  ClassBoardEffectController__PlayRelease(v34, square, v35, 0);
}


void ClassBoardController__PlayTransitionAnimation(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ClassBoardBackground_o *v14; // x8
  float *p_grandScoreSignEffectStartSecDirectly; // x8
  struct ClassBoardBackground_o *background; // x8
  float v17; // s8
  ClassBoardBackground_o *v18; // x21
  SimpleAnimation_o *boardRootAnimation; // x22
  SimpleAnimation_o *grandBoardRootAnimation; // x23
  System_Action_o *v21; // x24
  const MethodInfo *v22; // x5
  bool v23; // w4
  const MethodInfo *v24; // x1
  System_Collections_IEnumerator_o *v25; // x1

  if ( (byte_4CCAEB7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass106_0__PlayTransitionAnimation_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass106_0_TypeInfo);
    byte_4CCAEB7 = 1;
  }
  v5 = sub_1C715FC(ClassBoardController___c__DisplayClass106_0_TypeInfo);
  ClassBoardController___c__DisplayClass106_0___ctor((ClassBoardController___c__DisplayClass106_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 24) = isClickedClassScoreButton;
  GrandBoardRoot = this->fields.GrandBoardRoot;
  this->fields.CurrentBoardType = 2;
  if ( !GrandBoardRoot )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0);
  if ( this->fields.isDirectlyGrandBoard && !this->fields.isPlayEffectToGrandBoard )
  {
    background = this->fields.background;
    if ( !background )
      goto LABEL_18;
    p_grandScoreSignEffectStartSecDirectly = &background->fields.grandScoreSignEffectStartSecDirectly;
  }
  else
  {
    v14 = this->fields.background;
    if ( !v14 )
      goto LABEL_18;
    p_grandScoreSignEffectStartSecDirectly = &v14->fields.grandScoreSignEffectStartSec;
  }
  v17 = *p_grandScoreSignEffectStartSecDirectly;
  GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                 this,
                                                 this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !GrandBoardRoot
    || (ClassBoardFigureController__SetUIPanelAlpha((ClassBoardFigureController_o *)GrandBoardRoot, 0.0, 0),
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                        this,
                                                        this->klass->vtable._7_get_ClassBoardFigureController.method)) == 0) )
  {
LABEL_18:
    sub_1C71608(GrandBoardRoot, v7);
  }
  ClassBoardFigureController__ChangeDispServantFigure((ClassBoardFigureController_o *)GrandBoardRoot, 0, 0);
  v18 = this->fields.background;
  boardRootAnimation = this->fields.boardRootAnimation;
  grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
  v21 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass106_0__PlayTransitionAnimation_b__0__,
    0);
  if ( !this->fields.isDirectlyGrandBoard )
  {
    v23 = 0;
    if ( v18 )
      goto LABEL_16;
    goto LABEL_18;
  }
  v23 = !this->fields.isPlayEffectToGrandBoard;
  if ( !v18 )
    goto LABEL_18;
LABEL_16:
  ClassBoardBackground__PlayGrandTransitionAnimation(v18, boardRootAnimation, grandBoardRootAnimation, v21, v23, v22);
  v25 = ClassBoardController__PlayGrandSquareAndLine(this, v17, v24);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v25, 0);
}


void ClassBoardController__RefreshUi(
        ClassBoardController_o *this,
        int32_t currentBaseId,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  _BOOL8 v8; // x1
  _BOOL8 IsGrand; // x0
  const MethodInfo *v10; // x2
  _BOOL4 v11; // w21
  System_String_o *v12; // x22
  ClassBoardUIController_o *v13; // x23
  System_Collections_ICollection_o *grandUserSvtIds; // x0
  __int64 *v15; // x8
  System_String_o *v16; // x22
  ClassBoardUIController_o *v17; // x23
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x8
  bool v20; // w20
  Il2CppClass *klass; // x20
  ClassBoardUIController_o *v22; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = isClickedClassScoreButton;
  if ( (byte_4CCAEB4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6989/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/);
    sub_1C713B0(&StringLiteral_6988/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/);
    sub_1C713B0(&StringLiteral_20753/*"img_txt_grandscore"*/);
    sub_1C713B0(&StringLiteral_3394/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6987/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_4CCAEB4 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_53;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    currentBaseId,
    (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  IsGrand = ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
  v11 = IsGrand;
  v12 = IsGrand
      ? (System_String_o *)StringLiteral_20753/*"img_txt_grandscore"*/
      : ClassBoardController__GetHeaderSpriteName((ClassBoardController_o *)IsGrand, currentBaseId, v10);
  v13 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !v13 )
    goto LABEL_53;
  ClassBoardUIController__SetHeaderTitle(v13, (AtlasManagerUnit_o *)Master_object, v12, 0);
  if ( !v11 )
  {
LABEL_18:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_3394/*"CLASS_BOARD_HEADER_MESSAGE"*/;
    goto LABEL_27;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0) )
  {
    grandUserSvtIds = (System_Collections_ICollection_o *)this->fields.grandUserSvtIds;
    if ( grandUserSvtIds )
    {
      if ( BasicHelper__IsNullOrEmpty(grandUserSvtIds, 0) )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v15 = &StringLiteral_6988/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/;
        goto LABEL_27;
      }
      goto LABEL_18;
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_6989/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/;
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = &StringLiteral_6987/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/;
  }
LABEL_27:
  v16 = LocalizationManager__Get((System_String_o *)*v15, 0);
  v17 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)this->fields.grandUserSvtIds,
                                                                  0);
  if ( !v17 )
    goto LABEL_53;
  ClassBoardUIController__SetHeaderMessage(
    v17,
    UiAtlasManagerUnit,
    v16,
    v11,
    ((unsigned __int8)Master_object & 1) == 0,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_53;
  ClassBoardUIController__ActivateGrandScoreButton((ClassBoardUIController_o *)Master_object, !v11 && !v4, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_53;
  ClassBoardUIController__ActivateClassBoardResetButton((ClassBoardUIController_o *)Master_object, !v11, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_53;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)Master_object, v11, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( v11 )
    v19 = Master_object;
  else
    v19 = 0;
  if ( v11 && (this->fields.isDirectlyGrandBoard || v4) )
  {
    v8 = !this->fields.isPlayEffectToGrandBoard && this->fields.directlyBackAction != 0;
    Master_object = v19;
    if ( !v19 )
      goto LABEL_53;
  }
  else
  {
    v8 = 0;
    if ( !Master_object )
      goto LABEL_53;
  }
  ClassBoardUIController__ActivateClassScoreButton((ClassBoardUIController_o *)Master_object, v8, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_53;
  v20 = !v11 && v4;
  ClassBoardUIController__ActivateClassBoardSelectButton((ClassBoardUIController_o *)Master_object, v20, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_53;
  if ( v20 )
    ClassBoardUIController__SetBackButtonTextToReturn((ClassBoardUIController_o *)Master_object, 0);
  else
    ClassBoardUIController__SetBackButtonTextToClose((ClassBoardUIController_o *)Master_object, 0);
  if ( !entity )
    goto LABEL_53;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !entity
    || (klass = entity[4].klass,
        v22 = (ClassBoardUIController_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0),
        !v22) )
  {
LABEL_53:
    sub_1C71608(Master_object, v8);
  }
  ClassBoardUIController__SetItemList(v22, (System_Int32_array *)klass, (AtlasManagerUnit_o *)Master_object, v11, 0);
}


void ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x0
  __int64 v4; // x1
  UnityEngine_Transform_o *boardObjectsParent; // x20
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Object_o *v9; // x20
  System_Collections_Generic_IEnumerable_T__o *v10; // x0
  ClassBoardController___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Action_object__o *_9__70_0; // x21
  Il2CppObject *v14; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v24; // w9
  System_Collections_Generic_IEnumerable_T__o *v25; // x0
  ClassBoardController___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_T__o *v27; // x20
  System_Action_object__o *_9__70_1; // x21
  Il2CppObject *v29; // x22
  struct ClassBoardController___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v38; // w2
  int v39; // w9
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  ClassBoardController___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_T__o *v42; // x20
  System_Action_object__o *_9__70_2; // x21
  Il2CppObject *v44; // x22
  struct ClassBoardController___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x8
  int32_t v53; // w2
  int v54; // w9
  System_Collections_Generic_IEnumerable_T__o *v55; // x0
  ClassBoardController___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_T__o *v57; // x20
  System_Action_object__o *_9__70_3; // x21
  Il2CppObject *v59; // x22
  struct ClassBoardController___c_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x8
  int32_t v73; // w2
  int v74; // w9
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAE9A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1C713B0(&System_Action_ClassBoardLine__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ExcludeNull_ClassBoardLine___);
    sub_1C713B0(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
    sub_1C713B0(&Method_BasicHelper_ForEach_ClassBoardLine___);
    sub_1C713B0(&Method_BasicHelper_ForEach_ClassBoardSquare___);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__Release_b__70_0__);
    sub_1C713B0(&Method_ClassBoardController___c__Release_b__70_1__);
    sub_1C713B0(&Method_ClassBoardController___c__Release_b__70_2__);
    sub_1C713B0(&Method_ClassBoardController___c__Release_b__70_3__);
    sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAE9A = 1;
  }
  v87.fields.x = 0.0;
  v87.fields.y = 0.0;
  v87.fields.z = 0.0;
  TransformHelper__SetLocalPosition(this->fields.boardObjectsParent, v87, 0);
  boardObjectsParent = this->fields.boardObjectsParent;
  if ( !byte_4CC0D0E )
  {
    v3 = (UnityEngine_Component_o *)sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D0E = 1;
  }
  if ( !boardObjectsParent )
    goto LABEL_59;
  UnityEngine_Transform__set_localScale(boardObjectsParent, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v3 )
      goto LABEL_59;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(gameObject, 0);
  }
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                 this,
                                 this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
  {
    v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                      this,
                                      this->klass->vtable._7_get_ClassBoardFigureController.method);
    if ( !v3 )
      goto LABEL_59;
    v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71724608(v9, 0);
  }
  v10 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v11 = ClassBoardController___c_TypeInfo;
  v12 = v10;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v11 = ClassBoardController___c_TypeInfo;
  }
  _9__70_0 = (System_Action_object__o *)v11->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ClassBoardController___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__70_0 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__70_0, v14, Method_ClassBoardController___c__Release_b__70_0__, 0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Action_ClassBoardSquare__o *)_9__70_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__70_0,
      (int32_t)_9__70_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_59;
  size = squareViewList->fields._size;
  v24 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v24;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0);
  v25 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v26 = ClassBoardController___c_TypeInfo;
  v27 = v25;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v26 = ClassBoardController___c_TypeInfo;
  }
  _9__70_1 = (System_Action_object__o *)v26->static_fields->__9__70_1;
  if ( !_9__70_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = ClassBoardController___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__70_1 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__70_1, v29, Method_ClassBoardController___c__Release_b__70_1__, 0);
    v30 = ClassBoardController___c_TypeInfo->static_fields;
    v30->__9__70_1 = (struct System_Action_ClassBoardLine__o *)_9__70_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v30->__9__70_1, (int32_t)_9__70_1, v31, v32, v33, v34, v35, v36);
  }
  BasicHelper__ForEach_object_(
    v27,
    (System_Action_T__o *)_9__70_1,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_59;
  v38 = lineViewList->fields._size;
  v39 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v39;
  if ( v38 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v38, 0);
  v40 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandSquareViewList,
          (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v41 = ClassBoardController___c_TypeInfo;
  v42 = v40;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v41 = ClassBoardController___c_TypeInfo;
  }
  _9__70_2 = (System_Action_object__o *)v41->static_fields->__9__70_2;
  if ( !_9__70_2 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = ClassBoardController___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__70_2 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__70_2, v44, Method_ClassBoardController___c__Release_b__70_2__, 0);
    v45 = ClassBoardController___c_TypeInfo->static_fields;
    v45->__9__70_2 = (struct System_Action_ClassBoardSquare__o *)_9__70_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v45->__9__70_2, (int32_t)_9__70_2, v46, v47, v48, v49, v50, v51);
  }
  BasicHelper__ForEach_object_(
    v42,
    (System_Action_T__o *)_9__70_2,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  GrandSquareViewList = this->fields.GrandSquareViewList;
  if ( !GrandSquareViewList )
    goto LABEL_59;
  v53 = GrandSquareViewList->fields._size;
  v54 = GrandSquareViewList->fields._version + 1;
  GrandSquareViewList->fields._size = 0;
  GrandSquareViewList->fields._version = v54;
  if ( v53 >= 1 )
    System_Array__Clear((System_Array_o *)GrandSquareViewList->fields._items, 0, v53, 0);
  v55 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandLineViewList,
          (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v56 = ClassBoardController___c_TypeInfo;
  v57 = v55;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v56 = ClassBoardController___c_TypeInfo;
  }
  _9__70_3 = (System_Action_object__o *)v56->static_fields->__9__70_3;
  if ( !_9__70_3 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = ClassBoardController___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__70_3 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__70_3, v59, Method_ClassBoardController___c__Release_b__70_3__, 0);
    v60 = ClassBoardController___c_TypeInfo->static_fields;
    v60->__9__70_3 = (struct System_Action_ClassBoardLine__o *)_9__70_3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v60->__9__70_3, (int32_t)_9__70_3, v61, v62, v63, v64, v65, v66);
  }
  BasicHelper__ForEach_object_(
    v57,
    (System_Action_T__o *)_9__70_3,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  GrandLineViewList = this->fields.GrandLineViewList;
  if ( !GrandLineViewList )
    goto LABEL_59;
  v73 = GrandLineViewList->fields._size;
  v74 = GrandLineViewList->fields._version + 1;
  GrandLineViewList->fields._size = 0;
  GrandLineViewList->fields._version = v74;
  if ( v73 >= 1 )
    System_Array__Clear((System_Array_o *)GrandLineViewList->fields._items, 0, v73, 0);
  this->fields.effectController = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effectController, 0, v73, v67, v68, v69, v70, v71);
  this->fields.GrandEffectController = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.GrandEffectController, 0, v75, v76, v77, v78, v79, v80);
  this->fields.background = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.background, 0, v81, v82, v83, v84, v85, v86);
  v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._6_get_builder.methodPtr)(
                                    this,
                                    this->klass->vtable._6_get_builder.method);
  if ( !v3
    || (ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v3, 0),
        (v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._9_get_GrandBuilder.methodPtr)(
                                           this,
                                           this->klass->vtable._9_get_GrandBuilder.method)) == 0) )
  {
LABEL_59:
    sub_1C71608(v3, v4);
  }
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v3, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__ResetClassBoardCameraCoroutine(
        ClassBoardController_o *this,
        float sec,
        int32_t easingType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CCAEB6 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController__ResetClassBoardCameraCoroutine_d__105_TypeInfo);
    byte_4CCAEB6 = 1;
  }
  v9 = sub_1C715FC(ClassBoardController__ResetClassBoardCameraCoroutine_d__105_TypeInfo);
  ClassBoardController__ResetClassBoardCameraCoroutine_d__105___ctor(
    (ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C71608(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 40) = sec;
  *(_DWORD *)(v9 + 44) = easingType;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  return (System_Collections_IEnumerator_o *)v9;
}


void ClassBoardController__SetDirectlyBackAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.directlyBackAction = action;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.directlyBackAction,
    (int32_t)action,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController__SetIsGrandScoreDialogOpen(ClassBoardController_o *this, const MethodInfo *method)
{
  this->fields.isGrandScoreReleaseDialogOpen = 1;
}


void ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCAE9B & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAE9B = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
           this,
           this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v6 )
      sub_1C71608(0, v7);
    *(_QWORD *)(v6 + 168) = action;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 168), (int32_t)action, v8, v9, v10, v11, v12, v13);
  }
}


void ClassBoardController__SetOnClickToGrandServantList(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4CCAE9D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAE9D = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
           this,
           this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v6 )
      goto LABEL_14;
    *(_QWORD *)(v6 + 232) = action;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 232), (int32_t)action, v8, v9, v10, v11, v12, v13);
  }
  v14 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                  this,
                                  this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
           this,
           this->klass->vtable._7_get_ClassBoardFigureController.method);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 160) = action;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 160), (int32_t)action, v15, v16, v17, v18, v19, v20);
      return;
    }
LABEL_14:
    sub_1C71608(v6, v7);
  }
}


void ClassBoardController__SetToClassBoardSelectAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.toClassBoardSelectAction = action;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.toClassBoardSelectAction,
    (int32_t)action,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__Setup(
        ClassBoardController_o *this,
        IClassBoardResourceCatalog_o *setResourceCatalog,
        ClassBoardBackground_o *classBoardBackground,
        int32_t baseId,
        int32_t iconId,
        bool isDirectlyMoveGrandBoard,
        bool isPlayEffectGrandBoard,
        const MethodInfo *method)
{
  bool v14; // w27
  bool v15; // w26
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  char v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *Component_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  char v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x1
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v31; // x2
  UnityEngine_Texture_o *targetTexture; // x24
  const MethodInfo_393D900 *v33; // x2
  MapCamera_o *v34; // x24
  BalanceConfig_c *v35; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Nullable_float__o p_size; // x0
  float ClassBoard2DCameraDefaultSize; // s0
  System_Nullable_float__o v39; // x3
  System_Action_o *v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  char v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  struct UnityEngine_GameObject_o *boardRoot; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  char v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x23
  MapCamera_o *v60; // x24
  ClassBoardEffectController_o *v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  char v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  const MethodInfo *v68; // x2
  ClassBoardController_c *klass; // x8
  System_Nullable_Vector3__o v70; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v72; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isDirectlyMoveGrandBoard;
  v15 = isPlayEffectGrandBoard;
  if ( (byte_4CCAE97 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController_ShowBoard__);
    sub_1C713B0(&ClassBoardEffectController_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_ClassBoardRootComponent___);
    sub_1C713B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1C713B0(&Method_System_Nullable_float___ctor__);
    sub_1C713B0(&StringLiteral_12935/*"Sony SO-41B"*/);
    byte_4CCAE97 = 1;
  }
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (int32_t)classBoardBackground,
    baseId,
    *(System_String_o **)&iconId,
    isDirectlyMoveGrandBoard,
    isPlayEffectGrandBoard,
    (System_String_o *)method);
  this->fields.background = classBoardBackground;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.background,
    (int32_t)classBoardBackground,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.isPlayFullReleaseEffect = 0;
  this->fields.isDirectlyGrandBoard = v14;
  this->fields.CurrentBoardType = 1;
  this->fields.isPlayEffectToGrandBoard = v15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_ClassBoardRootComponent___);
  this->fields.classBoardRootComponent = (struct ClassBoardRootComponent_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.classBoardRootComponent,
    (int32_t)Component_object,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__Init(mapCamera, 0);
  if ( !classBoardBackground )
    goto LABEL_24;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v31);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.earthAccessoriesObject;
  if ( !mapCamera )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mapCamera, 1, 0);
  mapCamera = (MapCamera_o *)classBoardBackground->fields.currentCamera;
  if ( !mapCamera )
    goto LABEL_24;
  targetTexture = (UnityEngine_Texture_o *)UnityEngine_Camera__get_targetTexture((UnityEngine_Camera_o *)mapCamera, 0);
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_maxTextureSize(0);
  if ( (int)mapCamera <= 4096 )
    goto LABEL_10;
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_deviceModel(0);
  if ( !mapCamera )
    goto LABEL_24;
  mapCamera = (MapCamera_o *)System_String__Equals_64067044(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12935/*"Sony SO-41B"*/,
                               0);
  if ( ((unsigned __int8)mapCamera & 1) != 0 )
  {
LABEL_10:
    if ( !targetTexture )
      goto LABEL_24;
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, const MethodInfo *))targetTexture->klass->vtable._5_set_width.methodPtr)(
      targetTexture,
      4096,
      targetTexture->klass->vtable._5_set_width.method);
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, const MethodInfo *))targetTexture->klass->vtable._7_set_height.methodPtr)(
      targetTexture,
      2367,
      targetTexture->klass->vtable._7_set_height.method);
  }
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__SetMapTexture(mapCamera, targetTexture, 2491, 1440, 0);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__SetEnable(mapCamera, 1, 0);
  v34 = this->fields.mapCamera;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  *(_QWORD *)&v72.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v72.fields.hasValue = &v70;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v70.fields.hasValue = 0;
  *(_QWORD *)&v70.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v72, zeroVector, v33);
  v35 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v35 = BalanceConfig_TypeInfo;
  }
  static_fields = v35->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
  if ( !v34 )
    goto LABEL_24;
  v39 = size;
  MapCamera__StartAutoWork(v34, 0.0, v70, v39, 0, 0, 0);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0);
  v40 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0);
  classBoardBackground->fields.showBoardCallback = v40;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&classBoardBackground->fields.showBoardCallback,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v47);
  ClassBoardBackground__SetBoardParentAnimation(
    classBoardBackground,
    this->fields.boardParentAnimation,
    this->fields.isPlayEffectToGrandBoard,
    v48);
  boardRoot = this->fields.boardRoot;
  classBoardBackground->fields.boardRoot = boardRoot;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&classBoardBackground->fields.boardRoot,
    (int32_t)boardRoot,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._6_get_builder.methodPtr)(
                               this,
                               this->klass->vtable._6_get_builder.method);
  if ( !mapCamera )
LABEL_24:
    sub_1C71608(mapCamera, v29);
  ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0);
  ClassBoardController__CreateViews(this, 0, v56);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_SetupSquareOnClickListener.methodPtr)(
    this,
    0,
    this->klass->vtable._11_SetupSquareOnClickListener.method);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, const MethodInfo *))this->klass->vtable._10_SetupClassBoardUIController.methodPtr)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._10_SetupClassBoardUIController.method);
  ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, v57);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v60 = this->fields.mapCamera;
  v61 = (ClassBoardEffectController_o *)sub_1C715FC(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v61,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v60,
    classBoardBackground,
    0);
  this->fields.effectController = v61;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.effectController, (int32_t)v61, v62, v63, v64, v65, v66, v67);
  ClassBoardController__SetupGrandClassBoard(this, classBoardBackground, v68);
  klass = this->klass;
  if ( isDirectlyMoveGrandBoard )
    ((void (__fastcall *)(ClassBoardController_o *, const MethodInfo *))klass->vtable._14_PlayDirectlyGrandBoardOpenEffect.methodPtr)(
      this,
      klass->vtable._14_PlayDirectlyGrandBoardOpenEffect.method);
  else
    ((void (__fastcall *)(ClassBoardController_o *, const MethodInfo *))klass->vtable._13_PlayClassBoardStartEffect.methodPtr)(
      this,
      klass->vtable._13_PlayClassBoardStartEffect.method);
}


void ClassBoardController__SetupClassBoardFigureController(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardController_o *v2; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  int *p_offset; // x10
  __int64 v7; // x0
  Il2CppObject *effectController; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  bool IsNullOrEmpty; // w21
  ClassBoardController_o *v18; // x20

  v2 = this;
  if ( (byte_4CCAEC1 & 1) == 0 )
  {
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
    this = (ClassBoardController_o *)sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    byte_4CCAEC1 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_19;
  klass = resourceCatalog->klass;
  v5 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C47738(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(
                                     resourceCatalog,
                                     *(_QWORD *)(v7 + 8));
  if ( !this )
    goto LABEL_19;
  if ( !v2->fields.GrandBoardRoot )
    goto LABEL_19;
  effectController = (Il2CppObject *)this->fields.effectController;
  transform = UnityEngine_GameObject__get_transform(v2->fields.GrandBoardRoot, 0);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v2,
                    effectController,
                    transform,
                    0,
                    (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, const MethodInfo *))v2->klass->vtable._8_set_ClassBoardFigureController.methodPtr)(
    v2,
    Object_object,
    v2->klass->vtable._8_set_ClassBoardFigureController.method);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                     v2,
                                     v2->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !this )
    goto LABEL_19;
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v2;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.squareViewList, (int32_t)v2, v11, v12, v13, v14, v15, v16);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->fields.grandUserSvtIds, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                     v2,
                                     v2->klass->vtable._7_get_ClassBoardFigureController.method);
  v18 = this;
  if ( IsNullOrEmpty )
  {
    this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( v18 )
    {
      ClassBoardFigureController__SetServantSelectSprite(
        (ClassBoardFigureController_o *)v18,
        (AtlasManagerUnit_o *)this,
        0);
      this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                         v2,
                                         v2->klass->vtable._7_get_ClassBoardFigureController.method);
      if ( this )
      {
        ClassBoardFigureController__SetServantSelectObj(
          (ClassBoardFigureController_o *)this,
          v2->fields.baseId,
          v2->fields.grandUserSvtIds != 0,
          0);
        return;
      }
    }
LABEL_19:
    sub_1C71608(this, method);
  }
  if ( !this )
    goto LABEL_19;
  ClassBoardFigureController__SetSvtFigure((ClassBoardFigureController_o *)this, v2->fields.grandUserSvtIds, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__SetupClassBoardUIController(
        ClassBoardController_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardController_o *v4; // x19
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  Il2CppObject *Object_object; // x0
  __int64 v11; // x21
  System_Action_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  __int64 v19; // x21
  System_Action_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  __int64 v27; // x21
  System_Action_o *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x21
  System_Action_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x21
  System_Action_o *v44; // x22
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  __int64 v51; // x21
  System_Action_o *v52; // x22
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  ClassBoardUIController_o *v59; // x21
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x22
  const MethodInfo *v61; // x2
  ClassBoardUIController_o *v62; // x20
  AtlasManagerUnit_o *v63; // x21
  Il2CppClass *v64; // x20
  ClassBoardController_o *v65; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4CCAEA4 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
    sub_1C713B0(&Method_ClassBoardController_OnClickClassBoardResetButton__);
    sub_1C713B0(&Method_ClassBoardController_OnClickClassBoardSelectButton__);
    sub_1C713B0(&Method_ClassBoardController_OnClickClassScoreButton__);
    sub_1C713B0(&Method_ClassBoardController_OnClickEffectList__);
    sub_1C713B0(&Method_ClassBoardController_OnClickGrandScoreButton__);
    sub_1C713B0(&Method_ClassBoardController_OnClickHelp__);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    this = (ClassBoardController_o *)sub_1C713B0(&StringLiteral_3394/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_4CCAEA4 = 1;
  }
  entity = 0;
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_35;
  klass = resourceCatalog->klass;
  v7 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_1C47738(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                     resourceCatalog,
                                     *(_QWORD *)(v9 + 8));
  if ( !this )
    goto LABEL_35;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v4,
                    (Il2CppObject *)this->fields.lineViewList,
                    v4->fields.uiRoot,
                    0,
                    (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, const MethodInfo *))v4->klass->vtable._5_set_classBoardUIController.methodPtr)(
    v4,
    Object_object,
    v4->klass->vtable._5_set_classBoardUIController.method);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0);
  v11 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0);
  if ( !v11 )
    goto LABEL_35;
  *(_QWORD *)(v11 + 176) = v12;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v11 + 176), (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v20 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0);
  if ( !v19 )
    goto LABEL_35;
  *(_QWORD *)(v19 + 184) = v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 184), (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v27 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v28 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v4, Method_ClassBoardController_OnClickGrandScoreButton__, 0);
  if ( !v27 )
    goto LABEL_35;
  *(_QWORD *)(v27 + 192) = v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v27 + 192), (int32_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v36 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassScoreButton__, 0);
  if ( !v35 )
    goto LABEL_35;
  *(_QWORD *)(v35 + 200) = v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v35 + 200), (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v44 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassBoardSelectButton__, 0);
  if ( !v43 )
    goto LABEL_35;
  *(_QWORD *)(v43 + 208) = v44;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v43 + 208), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  v51 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v52 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v52, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassBoardResetButton__, 0);
  if ( !v51 )
    goto LABEL_35;
  *(_QWORD *)(v51 + 216) = v52;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v51 + 216), (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      v4,
                                      v4->klass->vtable._4_get_classBoardUIController.method);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  this = (ClassBoardController_o *)ClassBoardController__GetHeaderSpriteName(
                                     (ClassBoardController_o *)UiAtlasManagerUnit,
                                     baseId,
                                     v61);
  if ( !v59 )
    goto LABEL_35;
  ClassBoardUIController__SetHeaderTitle(v59, UiAtlasManagerUnit, (System_String_o *)this, 0);
  v62 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      v4,
                                      v4->klass->vtable._4_get_classBoardUIController.method);
  v63 = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3394/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0);
  if ( !v62 )
    goto LABEL_35;
  ClassBoardUIController__SetHeaderMessage(v62, v63, (System_String_o *)this, 0, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)this, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__ActivateClassScoreButton((ClassBoardUIController_o *)this, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_35;
  ClassBoardUIController__ActivateClassBoardSelectButton((ClassBoardUIController_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_35;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_35;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !entity
    || (v64 = entity[4].klass,
        v65 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0),
        !v65) )
  {
LABEL_35:
    sub_1C71608(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v65,
    (System_Int32_array *)v64,
    (AtlasManagerUnit_o *)this,
    0,
    0);
}


void ClassBoardController__SetupGrandClassBoard(
        ClassBoardController_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  ClassBoardBaseMaster_o *Master_object; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x21
  ClassBoardController_c *klass; // x9
  __int64 v10; // x0
  int32_t grandBaseId; // w22
  ClassBoardUIController_o *v12; // x23
  __int64 v13; // x0
  int32_t baseId; // w22
  ClassBoardUIController_o *v15; // x23
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x23
  MapCamera_o *mapCamera; // x24
  ClassBoardEffectController_o *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CCAE98 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardEffectController_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    byte_4CCAE98 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(Master_object, this->fields.baseId, 0);
  if ( GrandClassBoardBaseEntity )
  {
    klass = this->klass;
    this->fields.grandBaseId = GrandClassBoardBaseEntity->fields.id;
    v10 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))klass->vtable._4_get_classBoardUIController.methodPtr)(
            this,
            klass->vtable._4_get_classBoardUIController.method);
    grandBaseId = this->fields.grandBaseId;
    v12 = (ClassBoardUIController_o *)v10;
    Master_object = (ClassBoardBaseMaster_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( v12 )
    {
      ClassBoardUIController__SetGrandScoreButton(v12, grandBaseId, (AtlasManagerUnit_o *)Master_object, 0);
      v13 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
              this,
              this->klass->vtable._4_get_classBoardUIController.method);
      baseId = this->fields.baseId;
      v15 = (ClassBoardUIController_o *)v13;
      Master_object = (ClassBoardBaseMaster_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
      if ( v15 )
      {
        ClassBoardUIController__SetClassScoreButton(v15, baseId, (AtlasManagerUnit_o *)Master_object, 0);
        if ( !ClassBoardBaseEntity__IsOpen(GrandClassBoardBaseEntity, 0) )
        {
          LOBYTE(GrandClassBoardBaseEntity) = 1;
          goto LABEL_14;
        }
        Master_object = (ClassBoardBaseMaster_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._9_get_GrandBuilder.methodPtr)(
                                                    this,
                                                    this->klass->vtable._9_get_GrandBuilder.method);
        if ( Master_object )
        {
          ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)Master_object, this->fields.grandBaseId, 0);
          ClassBoardController__CreateViews(this, 1, v16);
          ClassBoardController__SetupGrandUserSvt(this, v17);
          ClassBoardController__SetupClassBoardFigureController(this, v18);
          if ( classBoardBackground )
          {
            ClassBoardBackground__SetGrandClassIcon(
              classBoardBackground,
              this->fields.grandBaseId,
              GrandClassBoardBaseEntity->fields.iconId,
              v19);
            LOBYTE(GrandClassBoardBaseEntity) = 1;
            ((void (__fastcall *)(ClassBoardController_o *, __int64, const MethodInfo *))this->klass->vtable._11_SetupSquareOnClickListener.methodPtr)(
              this,
              1,
              this->klass->vtable._11_SetupSquareOnClickListener.method);
            GrandSquareViewList = this->fields.GrandSquareViewList;
            GrandLineViewList = this->fields.GrandLineViewList;
            mapCamera = this->fields.mapCamera;
            v23 = (ClassBoardEffectController_o *)sub_1C715FC(ClassBoardEffectController_TypeInfo);
            ClassBoardEffectController___ctor(
              v23,
              (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)GrandSquareViewList,
              (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)GrandLineViewList,
              mapCamera,
              classBoardBackground,
              0);
            this->fields.GrandEffectController = v23;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.GrandEffectController,
              (int32_t)v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            goto LABEL_14;
          }
        }
      }
    }
LABEL_15:
    sub_1C71608(Master_object, v6);
  }
LABEL_14:
  ClassBoardController__HideGrandBoardObj(this, (bool)GrandClassBoardBaseEntity, v7);
}


void ClassBoardController__SetupGrandUserSvt(ClassBoardController_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_grandUserSvtIds; // x19
  void *Master_object; // x0
  int64_t userSvtId; // x1
  int v12; // w8
  void *v13; // x21
  __int64 v14; // x8
  UserServantGrandEntity_o *EntityFromGrandGraphId; // x0
  UserServantGrandEntity_o *v16; // x20
  System_Collections_Generic_List_long__o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x25
  __int64 v28; // x22
  UserServantGrandEntity_o *v29; // x22
  System_Collections_Generic_List_long__o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  System_Collections_Generic_List_long__o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7

  if ( (byte_4CCAE99 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_long__TypeInfo);
    byte_4CCAE99 = 1;
  }
  this->fields.grandUserSvtIds = 0;
  p_grandUserSvtIds = (GrandQuestFolderBoardItem_o *)&this->fields.grandUserSvtIds;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.grandUserSvtIds, 0, v2, v3, v4, v5, v6, v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = GrandGraphMaster__GetEntitiesByParentClassBoardBaseId(
                    (GrandGraphMaster_o *)Master_object,
                    this->fields.baseId,
                    0);
  if ( !Master_object )
    return;
  v12 = *((_DWORD *)Master_object + 6);
  v13 = Master_object;
  if ( v12 != 1 )
  {
    if ( v12 < 1 )
      return;
    v27 = 0;
    while ( (unsigned int)v27 < v12 )
    {
      v28 = *((_QWORD *)v13 + v27 + 4);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      if ( !v28 || !Master_object )
        goto LABEL_44;
      Master_object = UserServantGrandMaster__GetEntityFromGrandGraphId(
                        (UserServantGrandMaster_o *)Master_object,
                        *(_DWORD *)(v28 + 16),
                        0);
      if ( Master_object )
      {
        v29 = (UserServantGrandEntity_o *)Master_object;
        if ( UserServantGrandEntity__IsMatchClassBoard(
               (UserServantGrandEntity_o *)Master_object,
               this->fields.baseId,
               0) )
        {
          Master_object = p_grandUserSvtIds->klass;
          if ( !p_grandUserSvtIds->klass )
          {
            v30 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
            System_Collections_Generic_List_long____ctor(
              v30,
              (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
            p_grandUserSvtIds->klass = (GrandQuestFolderBoardItem_c *)v30;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.grandUserSvtIds,
              (int32_t)v30,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            Master_object = p_grandUserSvtIds->klass;
            if ( !p_grandUserSvtIds->klass )
              goto LABEL_44;
          }
          userSvtId = v29->fields.userSvtId;
          v37 = *((_QWORD *)Master_object + 2);
          v38 = Method_System_Collections_Generic_List_long__Add__;
          ++*((_DWORD *)Master_object + 7);
          if ( !v37 )
            goto LABEL_44;
          v39 = *((int *)Master_object + 6);
          if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              userSvtId,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v39 + 1;
            *(_QWORD *)(v37 + 8 * v39 + 32) = userSvtId;
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
          if ( !Master_object )
            goto LABEL_44;
          Master_object = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                            (ClassBoardBaseMaster_o *)Master_object,
                            this->fields.baseId,
                            0);
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (void *)UserServantGrandEntity__ContainsClassBoardBaseId(
                                    v29,
                                    *((_DWORD *)Master_object + 4),
                                    0);
          if ( ((unsigned __int8)Master_object & 1) != 0 && !p_grandUserSvtIds->klass )
          {
            v40 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
            System_Collections_Generic_List_long____ctor(
              v40,
              (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
            p_grandUserSvtIds->klass = (GrandQuestFolderBoardItem_c *)v40;
            sub_1C71354(
              (GrandQuestFolderBoardItem_o *)&this->fields.grandUserSvtIds,
              (int32_t)v40,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
          }
        }
      }
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v27 >= v12 )
        return;
    }
LABEL_45:
    sub_1C71610(Master_object);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !*((_DWORD *)v13 + 6) )
    goto LABEL_45;
  v14 = *((_QWORD *)v13 + 4);
  if ( !v14 || !Master_object )
    goto LABEL_44;
  EntityFromGrandGraphId = UserServantGrandMaster__GetEntityFromGrandGraphId(
                             (UserServantGrandMaster_o *)Master_object,
                             *(_DWORD *)(v14 + 16),
                             0);
  if ( EntityFromGrandGraphId )
  {
    v16 = EntityFromGrandGraphId;
    v17 = (System_Collections_Generic_List_long__o *)sub_1C715FC(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v17,
      (const MethodInfo_37F7EF8 *)Method_System_Collections_Generic_List_long___ctor__);
    p_grandUserSvtIds->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C71354(p_grandUserSvtIds, (int32_t)v17, v18, v19, v20, v21, v22, v23);
    userSvtId = v16->fields.userSvtId;
    if ( userSvtId >= 1 )
    {
      Master_object = p_grandUserSvtIds->klass;
      if ( p_grandUserSvtIds->klass )
      {
        v24 = *((_QWORD *)Master_object + 2);
        v25 = Method_System_Collections_Generic_List_long__Add__;
        ++*((_DWORD *)Master_object + 7);
        if ( v24 )
        {
          v26 = *((int *)Master_object + 6);
          if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              userSvtId,
              *(const MethodInfo_37F874C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v26 + 1;
            *(_QWORD *)(v24 + 8 * v26 + 32) = userSvtId;
          }
          return;
        }
      }
LABEL_44:
      sub_1C71608(Master_object, userSvtId);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_Collections_Generic_List_object__o *v6; // x0
  Il2CppObject *current; // x20
  System_Action_object__o *v8; // x0
  __int64 v9; // x1
  System_Action_ClassBoardSquare__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CCAEA6 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_4CCAEA6 = 1;
  }
  v5 = 112;
  memset(&v13, 0, sizeof(v13));
  if ( isGrand )
    v5 = 248;
  v6 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v5);
  if ( !v6 )
    sub_1C71608(0, isGrand);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    v6,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v13.fields._current;
    v8 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardSquare__TypeInfo);
    if ( !this )
      sub_1C71608(v8, v9);
    v10 = (System_Action_ClassBoardSquare__o *)v8;
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._12_SetupSquareOnClickListener.method,
      0);
    if ( !current )
      sub_1C71608(v11, v12);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, v10, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
}


void ClassBoardController__SetupSquareOnClickListener_48254584(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 *v21; // x22
  __int64 v22; // x8
  __int64 v23; // x9
  IClassBoardSquareModel_c **v24; // x10
  __int64 v25; // x0
  _QWORD *v26; // x8
  __int64 naturalAligment; // x11
  __int64 *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x9
  IClassBoardSquareModel_c **v31; // x10
  __int64 v32; // x0
  __int64 *v33; // x22
  __int64 v34; // x8
  __int64 v35; // x9
  IClassBoardSquareModel_c **v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 *v39; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  IClassBoardSquareModel_c **v42; // x10
  __int64 v43; // x0
  char v44; // w0
  const MethodInfo *v45; // x3
  ClassBoardSquare_o *v46; // x21
  System_Action_o *v47; // x22
  const MethodInfo *v48; // x3

  if ( (byte_4CCAEA7 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&ClassBoardLock_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__1__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass88_0_TypeInfo);
    byte_4CCAEA7 = 1;
  }
  v5 = sub_1C715FC(ClassBoardController___c__DisplayClass88_0_TypeInfo);
  ClassBoardController___c__DisplayClass88_0___ctor((ClassBoardController___c__DisplayClass88_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_50;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 32) = square;
  v14 = (__int64 *)(v5 + 32);
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)square, v15, v16, v17, v18, v19, v20);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_50;
  v21 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 184LL);
  if ( !v21 )
    goto LABEL_50;
  v22 = *v21;
  v23 = *(unsigned __int16 *)(*v21 + 302);
  if ( *(_WORD *)(*v21 + 302) )
  {
    v24 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v22 + 176) + 8LL);
    while ( *(v24 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v23;
      v24 += 2;
      if ( !v23 )
        goto LABEL_10;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 15) + 312;
  }
  else
  {
LABEL_10:
    v25 = sub_1C47738(v21, IClassBoardSquareModel_TypeInfo, 15);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v25)(v21, 0, *(_QWORD *)(v25 + 8));
  *(_DWORD *)(v5 + 16) = v6;
  if ( (v6 & 1) != 0 )
  {
    v26 = (_QWORD *)*v14;
    if ( *v14 )
    {
      naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*v26 + 304LL) >= (unsigned int)naturalAligment
        && *(ClassBoardLock_c **)(*(_QWORD *)(*v26 + 200LL) + 8 * naturalAligment - 8) == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v26 = (_QWORD *)*v14;
  }
  if ( !v26 )
    goto LABEL_50;
LABEL_19:
  v28 = (__int64 *)v26[23];
  if ( !v28 )
    goto LABEL_50;
  v29 = *v28;
  v30 = *(unsigned __int16 *)(*v28 + 302);
  if ( *(_WORD *)(*v28 + 302) )
  {
    v31 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_24;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 5) + 312;
  }
  else
  {
LABEL_24:
    v32 = sub_1C47738(v28, IClassBoardSquareModel_TypeInfo, 5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8));
  if ( (v6 & 1) == 0 )
  {
    if ( *v14 )
    {
      v33 = *(__int64 **)(*v14 + 184);
      if ( v33 )
      {
        v34 = *v33;
        v35 = *(unsigned __int16 *)(*v33 + 302);
        if ( *(_WORD *)(*v33 + 302) )
        {
          v36 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *(v36 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v35;
            v36 += 2;
            if ( !v35 )
              goto LABEL_34;
          }
          v37 = v34 + 16LL * (*(_DWORD *)v36 + 12) + 312;
        }
        else
        {
LABEL_34:
          v37 = sub_1C47738(v33, IClassBoardSquareModel_TypeInfo, 12);
        }
        if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) != 0
          && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0) )
        {
          return;
        }
        v6 = *v14;
        if ( *v14 )
        {
          ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)v6, 1, 0);
          v38 = *v14;
          if ( *v14 )
          {
            v39 = *(__int64 **)(v38 + 184);
            *(_BYTE *)(v38 + 177) = 1;
            if ( v39 )
            {
              v40 = *v39;
              v41 = *(unsigned __int16 *)(*v39 + 302);
              if ( *(_WORD *)(*v39 + 302) )
              {
                v42 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *(v42 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v41;
                  v42 += 2;
                  if ( !v41 )
                    goto LABEL_45;
                }
                v43 = v40 + 16LL * (*(_DWORD *)v42 + 12) + 312;
              }
              else
              {
LABEL_45:
                v43 = sub_1C47738(v39, IClassBoardSquareModel_TypeInfo, 12);
              }
              v44 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
              v46 = (ClassBoardSquare_o *)*v14;
              if ( (v44 & 1) != 0 )
              {
                ClassBoardController__CallbackSquareOnClick(this, v46, *(_DWORD *)(v5 + 16), v45);
              }
              else
              {
                v47 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                System_Action___ctor(
                  v47,
                  (Il2CppObject *)v5,
                  Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__1__,
                  0);
                ClassBoardController__PlayMoveCamera(this, v46, v47, v48);
              }
              return;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C71608(v6, v7);
  }
}


void ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCAEB3 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController__ShowBoardCoroutine_d__102_TypeInfo);
    byte_4CCAEB3 = 1;
  }
  v3 = sub_1C715FC(ClassBoardController__ShowBoardCoroutine_d__102_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__102___ctor((ClassBoardController__ShowBoardCoroutine_d__102_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__ShowGrandBoard(
        ClassBoardController_o *this,
        bool isClickedClassScoreButton,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v6; // x1
  MapCamera_o *mapCamera; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  const MethodInfo_393D900 *v12; // x2
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w21
  MapCamera_o *v16; // x22
  BalanceConfig_c *v17; // x0
  struct BalanceConfig_StaticFields *v18; // x8
  System_Nullable_float__o p_size; // x0
  float ClassBoard2DCameraDefaultSize; // s0
  System_Nullable_float__o v21; // x3
  System_Nullable_Vector3__o v22; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CCAEB5 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1C713B0(&Method_System_Nullable_float___ctor__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CCAEB5 = 1;
  }
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method,
               method);
  if ( !Instance )
    goto LABEL_24;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
               this,
               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_24;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  mapCamera = this->fields.mapCamera;
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  Instance = (__int64)BalanceConfig_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !mapCamera )
    goto LABEL_24;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  Instance = MapCamera__IsMatchPosAndZoomSize(
               mapCamera,
               v25,
               BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize,
               0);
  if ( (Instance & 1) == 0 )
  {
    background = this->fields.background;
    if ( this->fields.isDirectlyGrandBoard )
    {
      cameraResetSec = 0.0;
      if ( !background )
        goto LABEL_24;
    }
    else
    {
      if ( !background )
        goto LABEL_24;
      cameraResetSec = background->fields.cameraResetSec;
    }
    cameraResetEasingType = background->fields.cameraResetEasingType;
    v16 = this->fields.mapCamera;
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    *(_QWORD *)&v24.fields.hasValue = &v22;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v24, zeroVector, v12);
    v17 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v17 = BalanceConfig_TypeInfo;
    }
    v18 = v17->static_fields;
    p_size = (System_Nullable_float__o)&size;
    ClassBoard2DCameraDefaultSize = v18->ClassBoard2DCameraDefaultSize;
    size = 0;
    System_Nullable_float____ctor(
      p_size,
      ClassBoard2DCameraDefaultSize,
      (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
    if ( v16 )
    {
      v21 = size;
      MapCamera__StartAutoWork(v16, cameraResetSec, v22, v21, cameraResetEasingType, 0, 0);
      goto LABEL_23;
    }
LABEL_24:
    sub_1C71608(Instance, v6);
  }
LABEL_23:
  ClassBoardController__PlayTransitionAnimation(this, isClickedClassScoreButton, (const MethodInfo *)v12);
}


void ClassBoardController__Update(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *ClassBoardController__WaitFinishedClassBoardStartEffect(
        ClassBoardController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CCAEAC & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_TypeInfo);
    byte_4CCAEAC = 1;
  }
  v5 = sub_1C715FC(ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_TypeInfo);
  ClassBoardController__WaitFinishedClassBoardStartEffect_d__94___ctor(
    (ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void ClassBoardController___EndPlayGrandReturnTransitionAnimation_b__114_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C71608(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___OnClickClassScoreButton_b__78_0(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardController__ShowGrandBoard(this, 1, v2);
}


void ClassBoardController___OnClickEffectList_b__76_0(ClassBoardController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CCAEC6 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCAEC6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0);
}


void ClassBoardController___OnClickGrandScoreButton_b__77_0(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ClassBoardController__HideGrandBoard(this, 0, v2);
}


void ClassBoardController___OnClickHelp_b__74_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C71608(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___OnClickHelp_b__74_1(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C71608(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___PlayDirectlyGrandBoardOpenEffect_b__93_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x0
  struct ClassBoardBackground_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  background = this->fields.background;
  if ( !background
    || (ClassBoardBackground__CallAnimationEventBoardParent(background, method), (v4 = this->fields.background) == 0) )
  {
    sub_1C71608(background, method);
  }
  ActionExtensions__Call(v4->fields.showBoardCallback, 0);
  v4->fields.showBoardCallback = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.showBoardCallback, 0, v5, v6, v7, v8, v9, v10);
  this->fields.isFinishedClassScoreAnimation = 1;
}


void ClassBoardController___ShowBoardCoroutine_b__102_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C71608(0, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


int32_t ClassBoardController__get_BaseId(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.baseId;
}


UnityEngine_GameObject_o *ClassBoardController__get_BoardRoot(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.boardRoot;
}


ClassBoardFigureController_o *ClassBoardController__get_ClassBoardFigureController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassBoardFigureController_k__BackingField;
}


ClassBoardModelBuilder_o *ClassBoardController__get_GrandBuilder(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBuilder_k__BackingField;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *ClassBoardController__get_LineViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)this->fields.lineViewList;
}


MapCamera_o *ClassBoardController__get_MapCamera(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.mapCamera;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *ClassBoardController__get_SquareViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)this->fields.squareViewList;
}


ClassBoardModelBuilder_o *ClassBoardController__get_builder(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields._builder_k__BackingField;
}


ClassBoardUIController_o *ClassBoardController__get_classBoardUIController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardUIController_k__BackingField;
}


void ClassBoardController__set_ClassBoardFigureController(
        ClassBoardController_o *this,
        ClassBoardFigureController_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClassBoardFigureController_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassBoardFigureController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController__set_classBoardUIController(
        ClassBoardController_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController__DelayCheckGrandScoreTutorial_d__115___ctor(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__DelayCheckGrandScoreTutorial_d__115__MoveNext(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x22
  Il2CppObject *v5; // x21
  struct ClassBoardController___c__DisplayClass115_0_o **p__8__1; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct ClassBoardController___c__DisplayClass115_0_o *IsTutorialAvailable; // x0
  struct ClassBoardController_o *v21; // x1
  struct ClassBoardController___c__DisplayClass115_0_o *v22; // x21
  struct ClassBoardController___c__DisplayClass115_0_o *_8__1; // x20
  struct ClassBoardBackground_o *background; // x8
  float grandScoreDialogViewDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v26; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  bool result; // w0
  System_Action_o *v35; // x19

  if ( (byte_4CCAFA5 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass115_0__DelayCheckGrandScoreTutorial_b__0__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass115_0_TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CCAFA5 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    _8__1 = this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v5 = (Il2CppObject *)sub_1C715FC(ClassBoardController___c__DisplayClass115_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct ClassBoardController___c__DisplayClass115_0_o *)v5;
    p__8__1 = &this->fields.__8__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__8__1, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    IsTutorialAvailable = this->fields.__8__1;
    if ( !IsTutorialAvailable )
      goto LABEL_17;
    v21 = this->fields.__4__this;
    IsTutorialAvailable->fields.__4__this = v21;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&IsTutorialAvailable->fields, (int32_t)v21, v14, v15, v16, v17, v18, v19);
    v22 = *p__8__1;
    IsTutorialAvailable = (struct ClassBoardController___c__DisplayClass115_0_o *)EventTutorialMaster__IsTutorialAvailable(
                                                                                    0,
                                                                                    100,
                                                                                    0,
                                                                                    0,
                                                                                    0,
                                                                                    0,
                                                                                    0);
    if ( !v22 )
      goto LABEL_17;
    v22->fields.isGrandScoreTutorialAvailable = (unsigned __int8)IsTutorialAvailable & 1;
    _8__1 = *p__8__1;
    if ( !_8__1 )
      goto LABEL_17;
    if ( _8__1->fields.isGrandScoreTutorialAvailable )
    {
      if ( !_4__this )
        goto LABEL_17;
      if ( !_4__this->fields.isGrandScoreReleaseDialogOpen )
      {
        background = _4__this->fields.background;
        if ( background )
        {
          grandScoreDialogViewDelayTime = background->fields.grandScoreDialogViewDelayTime;
          v26 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v26, grandScoreDialogViewDelayTime, 0);
          this->fields.__2__current = (Il2CppObject *)v26;
          p__2__current = &this->fields.__2__current;
          sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)v26, v28, v29, v30, v31, v32, v33);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_17:
        sub_1C71608(IsTutorialAvailable, v13);
      }
    }
  }
  v35 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)_8__1,
    Method_ClassBoardController___c__DisplayClass115_0__DelayCheckGrandScoreTutorial_b__0__,
    0);
  if ( !_4__this )
    goto LABEL_17;
  EventTutorialMaster__CheckTutorial(0, 100, v35, _4__this->fields.grandBaseId, 0, 0, 0, 0);
  return 0;
}


Il2CppObject *ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_Collections_IEnumerator_Reset(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardController__DelayCheckGrandScoreTutorial_d__115_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_Collections_IEnumerator_get_Current(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__DelayCheckGrandScoreTutorial_d__115__System_IDisposable_Dispose(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__115_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__PlayExClassGrandScoreRelease_d__112___ctor(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__PlayExClassGrandScoreRelease_d__112__MoveNext(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x8
  struct ClassBoardBackground_o *background; // x8
  float GrandScoreExReleaseEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  bool result; // w0
  SceneJumpInfo_o *v16; // x19

  v2 = this;
  if ( (byte_4CCAFA6 & 1) == 0 )
  {
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCAFA6 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    v16 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41756288(v16, (System_String_o *)StringLiteral_1/*""*/, 9, 1, 0);
    this = (ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_11;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 91, 1, (Il2CppObject *)v16, 0);
  }
  else if ( !_1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      background = _4__this->fields.background;
      if ( background )
      {
        GrandScoreExReleaseEffectDelayTime = background->fields.GrandScoreExReleaseEffectDelayTime;
        v7 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v7, GrandScoreExReleaseEffectDelayTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
    }
LABEL_11:
    sub_1C71608(this, method);
  }
  return 0;
}


Il2CppObject *ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardController__PlayExClassGrandScoreRelease_d__112_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__PlayExClassGrandScoreRelease_d__112__System_IDisposable_Dispose(
        ClassBoardController__PlayExClassGrandScoreRelease_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__PlayGrandSquareAndLine_d__107___ctor(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__PlayGrandSquareAndLine_d__107__MoveNext(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayGrandSquareAndLine_d__107_o *v2; // x20
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x19
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x19
  GrandQuestFolderBoardItem_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  bool result; // w0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x20
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4CCAFA7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)sub_1C713B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4CCAFA7 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v26, 0, sizeof(v26));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      goto LABEL_14;
    case 1:
      v2->fields.__1__state = -1;
LABEL_9:
      if ( !_4__this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandBoardObjectsParent;
      if ( !this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_14:
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandBoardObjectsParent;
      if ( !this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
      if ( !this )
        goto LABEL_35;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, 0, v15, v16, v17, v18, v19, v20);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 2;
        return result;
      }
      if ( !ClassBoardController__IsNeverSetGrandServant(_4__this, 0) )
      {
        this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandSquareViewList;
        if ( !this )
          goto LABEL_35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v25;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              i.fields._current->klass->vtable[7].methodPtr() )
        {
          if ( !i.fields._current )
            sub_1C71608(0, v21);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)_4__this->fields.GrandLineViewList;
        if ( !this )
          goto LABEL_35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v26,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v26,
                  (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
        {
          if ( !v26.fields._current )
            sub_1C71608(0, v23);
          ClassBoardLine__PlayTransition((ClassBoardLine_o *)v26.fields._current, 0, v24);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v26,
          (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
      }
      this = (ClassBoardController__PlayGrandSquareAndLine_d__107_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                                        _4__this,
                                                                        _4__this->klass->vtable._7_get_ClassBoardFigureController.method);
      if ( this )
      {
        ClassBoardFigureController__StartSwitchServantCoroutine((ClassBoardFigureController_o *)this, method);
        return 0;
      }
LABEL_35:
      sub_1C71608(this, method);
    case 0:
      waitTime = v2->fields.waitTime;
      v2->fields.__1__state = -1;
      if ( waitTime > 0.0 )
      {
        v6 = (UnityEngine_WaitForSeconds_o *)sub_1C715FC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v6;
        v7 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(v7, (int32_t)v6, v8, v9, v10, v11, v12, v13);
        result = 1;
        LODWORD(v7[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
      goto LABEL_9;
  }
  return 0;
}


Il2CppObject *ClassBoardController__PlayGrandSquareAndLine_d__107__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__PlayGrandSquareAndLine_d__107__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardController__PlayGrandSquareAndLine_d__107_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardController__PlayGrandSquareAndLine_d__107__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__PlayGrandSquareAndLine_d__107__System_IDisposable_Dispose(
        ClassBoardController__PlayGrandSquareAndLine_d__107_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__ResetClassBoardCameraCoroutine_d__105___ctor(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__ResetClassBoardCameraCoroutine_d__105__MoveNext(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  const MethodInfo_393D900 *v2; // x2
  ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *v3; // x19
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x21
  MapCamera_o *mapCamera; // x20
  float sec; // s8
  BalanceConfig_c *v8; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Nullable_float__o p_size; // x0
  float ClassBoard2DCameraDefaultSize; // s0
  System_Nullable_float__o v12; // x3
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  System_Nullable_float__o size; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector3__o v22; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v23; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4CCAFA8 & 1) == 0 )
  {
    sub_1C713B0(&BalanceConfig_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_Vector3___ctor__);
    this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *)sub_1C713B0(&Method_System_Nullable_float___ctor__);
    byte_4CCAFA8 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_18;
    mapCamera = _4__this->fields.mapCamera;
    sec = v3->fields.sec;
    if ( !byte_4CC0D09 )
    {
      sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
      byte_4CC0D09 = 1;
    }
    *(_QWORD *)&v23.fields.hasValue = &v22;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v23.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v22.fields.hasValue = 0;
    *(_QWORD *)&v22.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v23, zeroVector, v2);
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    static_fields = v8->static_fields;
    p_size = (System_Nullable_float__o)&size;
    ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
    size = 0;
    System_Nullable_float____ctor(
      p_size,
      ClassBoard2DCameraDefaultSize,
      (const MethodInfo_393B43C *)Method_System_Nullable_float___ctor__);
    if ( !mapCamera )
LABEL_18:
      sub_1C71608(this, method);
    v12 = size;
    MapCamera__StartAutoWork(mapCamera, sec, v22, v12, v3->fields.easingType, 0, 0);
  }
  this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *)_4__this->fields.mapCamera;
  if ( !this )
    goto LABEL_18;
  if ( MapCamera__IsAutoWork((MapCamera_o *)this, 0) )
  {
    v3->fields.__2__current = 0;
    p__2__current = (GrandQuestFolderBoardItem_o *)&v3->fields.__2__current;
    sub_1C71354(p__2__current, 0, v13, v14, v15, v16, v17, v18);
    result = 1;
    LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
    return result;
  }
  ActionExtensions__Call(v3->fields.callback, 0);
  return 0;
}


Il2CppObject *ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_Collections_IEnumerator_Reset(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardController__ResetClassBoardCameraCoroutine_d__105_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__ResetClassBoardCameraCoroutine_d__105__System_IDisposable_Dispose(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__105_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__ShowBoardCoroutine_d__102___ctor(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__ShowBoardCoroutine_d__102__MoveNext(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  ClassBoardController__ShowBoardCoroutine_d__102_o *v2; // x20
  struct ClassBoardController_o *_4__this; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x20
  bool result; // w0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4CCAFA9 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController__ShowBoardCoroutine_b__102_0__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_4CCAFA9 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v17, 0, sizeof(v17));
  if ( v2->fields.__1__state < 2u )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)_4__this->fields.boardObjectsParent;
    if ( !this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
    if ( !this )
      goto LABEL_26;
    if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
      sub_1C71354(p__2__current, 0, v4, v5, v6, v7, v8, v9);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)_4__this->fields.squareViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v16;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          i.fields._current->klass->vtable[7].methodPtr() )
    {
      if ( !i.fields._current )
        sub_1C71608(0, v10);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)_4__this->fields.lineViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v17.fields._current )
        sub_1C71608(0, v13);
      ClassBoardLine__PlayTransition(
        (ClassBoardLine_o *)v17.fields._current,
        _4__this->fields.isDirectlyGrandBoard,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__102_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  _4__this,
                                                                  _4__this->klass->vtable._4_get_classBoardUIController.method);
    if ( !this )
LABEL_26:
      sub_1C71608(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    if ( !_4__this->fields.isDirectlyGrandBoard )
    {
      v15 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__102_0__, 0);
      EventTutorialMaster__CheckTutorial(0, 82, v15, 0, 0, 0, 0, 0);
    }
  }
  return 0;
}


Il2CppObject *ClassBoardController__ShowBoardCoroutine_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__ShowBoardCoroutine_d__102__System_Collections_IEnumerator_Reset(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardController__ShowBoardCoroutine_d__102_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardController__ShowBoardCoroutine_d__102__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__ShowBoardCoroutine_d__102__System_IDisposable_Dispose(
        ClassBoardController__ShowBoardCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__WaitFinishedClassBoardStartEffect_d__94___ctor(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__MoveNext(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct ClassBoardController_o *_4__this; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C71608(0, method);
  if ( _4__this->fields.isFinishedClassScoreAnimation )
  {
    ClassBoardController__FinishedClassBoardStartEffect(_4__this, this->fields.callback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_Collections_IEnumerator_Reset(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_Collections_IEnumerator_get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__WaitFinishedClassBoardStartEffect_d__94__System_IDisposable_Dispose(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__94_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCAF87 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAF87 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ClassBoardController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardController___c___ctor(ClassBoardController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c___CallbackSquareOnClick_b__90_3(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___CallbackSquareOnClick_b__90_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool ClassBoardController___c___CheckOpenMissionClearDialogSave_b__97_0(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0
  int v8; // w1
  const MethodInfo *v9; // x2
  IClassBoardLockModel_c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  IClassBoardLockModel_c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  IClassBoardLockModel_c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  char v22; // w8
  __int64 v24; // [xsp+0h] [xbp-30h] BYREF
  int v25; // [xsp+8h] [xbp-28h]
  ClassBoardCondData_o v26; // 0:x0.12

  if ( (byte_4CCAF90 & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCAF90 = 1;
  }
  v25 = 0;
  v24 = 0;
  if ( !x )
    sub_1C71608(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C47738(x, IClassBoardLockModel_TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
  v25 = v8;
  *(_QWORD *)&v26.fields.Type = &v24;
  v26.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v26, v9) )
    goto LABEL_30;
  v10 = x->klass;
  v11 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    v12 = &v10->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v12 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_15;
    }
    v13 = (__int64)&v10->vtable[*v12 + 15];
  }
  else
  {
LABEL_15:
    v13 = sub_1C47738(x, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v13)(x, 0, *(_QWORD *)(v13 + 8)) & 2) != 0 )
    goto LABEL_30;
  v14 = x->klass;
  v15 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    v16 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_22;
    }
    v17 = (__int64)&v14->vtable[*v16 + 15];
  }
  else
  {
LABEL_22:
    v17 = sub_1C47738(x, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v17)(x, 0, *(_QWORD *)(v17 + 8)) & 4) != 0 )
  {
LABEL_30:
    v22 = 0;
  }
  else
  {
    v18 = x->klass;
    v19 = *(unsigned __int16 *)&x->klass->_2.rank;
    if ( *(_WORD *)&x->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v20 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_29;
      }
      v21 = (__int64)&v18->vtable[*v20 + 1];
    }
    else
    {
LABEL_29:
      v21 = sub_1C47738(x, IClassBoardLockModel_TypeInfo, 1);
    }
    v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v21)(x, *(_QWORD *)(v21 + 8)) ^ 1;
  }
  return v22 & 1;
}


int32_t ClassBoardController___c___CheckOpenMissionClearDialogSave_b__97_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4CCAF91 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCAF91 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C47738(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


bool ClassBoardController___c___PlayClassBoardStartEffect_b__92_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  ClassBoardController___c_c *v12; // x8
  ClassBoardController___c_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  ClassBoardController___c_c *v18; // x8
  ClassBoardController___c_o *v19; // x20
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  ClassBoardController___c_c *v24; // x8
  ClassBoardController___c_o *v25; // x19
  __int64 v26; // x9
  IClassBoardLockModel_c **v27; // x10
  __int64 v28; // x0
  char v29; // w8
  __int64 v31; // [xsp+0h] [xbp-40h] BYREF
  int v32; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v33; // 0:x0.12

  if ( (byte_4CCAF8C & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCAF8C = 1;
  }
  v32 = 0;
  v31 = 0;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(this, IClassBoardLockModel_TypeInfo, 0);
  }
  v31 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v32 = v9;
  *(_QWORD *)&v33.fields.Type = &v31;
  v33.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v33, v10) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v11);
  if ( !this )
    goto LABEL_38;
  v12 = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_17;
    }
    v16 = (__int64)&(&v12[1]._1.interfaceOffsets)[2 * *v15];
  }
  else
  {
LABEL_17:
    v16 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v16)(v13, 0, *(_QWORD *)(v16 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v17);
  if ( !this )
    goto LABEL_38;
  v18 = this->klass;
  v19 = this;
  v20 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_25;
    }
    v22 = (__int64)&(&v18[1]._1.interfaceOffsets)[2 * *v21];
  }
  else
  {
LABEL_25:
    v22 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v22)(v19, 0, *(_QWORD *)(v22 + 8)) & 4) != 0 )
  {
LABEL_34:
    v29 = 0;
    return v29 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v23);
  if ( !this )
LABEL_38:
    sub_1C71608(this, x);
  v24 = this->klass;
  v25 = this;
  v26 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v27 = (IClassBoardLockModel_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_33;
    }
    v28 = (__int64)(&v24->vtable._1_Finalize + *(_DWORD *)v27);
  }
  else
  {
LABEL_33:
    v28 = sub_1C47738(this, IClassBoardLockModel_TypeInfo, 1);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8)) ^ 1;
  return v29 & 1;
}


int32_t ClassBoardController___c___PlayClassBoardStartEffect_b__92_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4CCAF8D & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCAF8D = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x)) == 0 )
    sub_1C71608(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


bool ClassBoardController___c___PlayClassBoardStartEffect_b__92_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x1
  ClassBoardController___c_c *v12; // x8
  ClassBoardController___c_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  ClassBoardController___c_c *v18; // x8
  ClassBoardController___c_o *v19; // x20
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  ClassBoardController___c_c *v24; // x8
  ClassBoardController___c_o *v25; // x19
  __int64 v26; // x9
  IClassBoardLockModel_c **v27; // x10
  __int64 v28; // x0
  char v29; // w8
  __int64 v31; // [xsp+0h] [xbp-40h] BYREF
  int v32; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v33; // 0:x0.12

  if ( (byte_4CCAF8E & 1) == 0 )
  {
    sub_1C713B0(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCAF8E = 1;
  }
  v32 = 0;
  v31 = 0;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(this, IClassBoardLockModel_TypeInfo, 0);
  }
  v31 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v32 = v9;
  *(_QWORD *)&v33.fields.Type = &v31;
  v33.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v33, v10) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v11);
  if ( !this )
    goto LABEL_38;
  v12 = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_17;
    }
    v16 = (__int64)&(&v12[1]._1.interfaceOffsets)[2 * *v15];
  }
  else
  {
LABEL_17:
    v16 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v16)(v13, 0, *(_QWORD *)(v16 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v17);
  if ( !this )
    goto LABEL_38;
  v18 = this->klass;
  v19 = this;
  v20 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_25;
    }
    v22 = (__int64)&(&v18[1]._1.interfaceOffsets)[2 * *v21];
  }
  else
  {
LABEL_25:
    v22 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 15);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v22)(v19, 0, *(_QWORD *)(v22 + 8)) & 4) != 0 )
  {
LABEL_34:
    v29 = 0;
    return v29 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, v23);
  if ( !this )
LABEL_38:
    sub_1C71608(this, x);
  v24 = this->klass;
  v25 = this;
  v26 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    v27 = (IClassBoardLockModel_c **)&v24->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_33;
    }
    v28 = (__int64)(&v24->vtable._1_Finalize + *(_DWORD *)v27);
  }
  else
  {
LABEL_33:
    v28 = sub_1C47738(this, IClassBoardLockModel_TypeInfo, 1);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8)) ^ 1;
  return v29 & 1;
}


int32_t ClassBoardController___c___PlayClassBoardStartEffect_b__92_3(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4CCAF8F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    byte_4CCAF8F = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x)) == 0 )
    sub_1C71608(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *ClassBoardController___c___PlayClassBoardStartEffect_b__92_4(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
}


IClassBoardLockModel_o *ClassBoardController___c___PlayClassBoardStartEffect_b__92_5(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  return ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  x->fields.isUpdateLine = 1;
}


void ClassBoardController___c___PlayReleaseEffect_b__91_3(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__91_4(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  x->fields.isUpdateLine = 1;
}


void ClassBoardController___c___Release_b__70_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAF88 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF88 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAF89 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF89 = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_2(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAF8A & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF8A = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_3(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CCAF8B & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAF8B = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}


void ClassBoardController___c___SetupSquareOnClickListener_b__88_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___SetupSquareOnClickListener_b__88_7(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c__DisplayClass100_0___ctor(
        ClassBoardController___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass100_0___PlayMoveCamera_b__0(
        ClassBoardController___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0),
        (callback = this->fields.callback) == 0) )
  {
    sub_1C71608(_4__this, method);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void ClassBoardController___c__DisplayClass106_0___ctor(
        ClassBoardController___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass106_0___PlayTransitionAnimation_b__0(
        ClassBoardController___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__EndPlayGrandTransitionAnimation(_4__this, this->fields.isClickedClassScoreButton, 0);
}


void ClassBoardController___c__DisplayClass113_0___ctor(
        ClassBoardController___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass113_0___HideGrandBoard_b__0(
        ClassBoardController___c__DisplayClass113_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__EndPlayGrandReturnTransitionAnimation(_4__this, this->fields.isClickedClassScoreButton, 0);
}


void ClassBoardController___c__DisplayClass115_0___ctor(
        ClassBoardController___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass115_0___DelayCheckGrandScoreTutorial_b__0(
        ClassBoardController___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x19
  _BOOL4 isGrandScoreTutorialAvailable; // w22
  System_Action_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4CCAF92 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController_PlayGrandExClassReleaseEffect__);
    byte_4CCAF92 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  isGrandScoreTutorialAvailable = this->fields.isGrandScoreTutorialAvailable;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, _4__this, Method_ClassBoardController_PlayGrandExClassReleaseEffect__, 0);
  if ( !_4__this )
    sub_1C71608(v6, v7);
  ClassBoardController__CheckUMedalCreateEventTutorial(
    (ClassBoardController_o *)_4__this,
    isGrandScoreTutorialAvailable,
    v5,
    0);
}


void ClassBoardController___c__DisplayClass117_0___ctor(
        ClassBoardController___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardController___c__DisplayClass117_0___OnClickClassBoardResetButton_b__0(
        ClassBoardController___c__DisplayClass117_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *commonUI; // x20
  ClassBoardUIController_o *_4__this; // x0
  float v7; // s8
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CCAF93 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__1__);
    byte_4CCAF93 = 1;
  }
  if ( isDecide )
  {
    commonUI = this->fields.commonUI;
    _4__this = (ClassBoardUIController_o *)AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      _4__this = (ClassBoardUIController_o *)AvalonSceneManager_TypeInfo;
    }
    v7 = *(float *)&_4__this->fields.onClickEffectList->klass;
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass117_0__OnClickClassBoardResetButton_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10, v11, v12, v13, v14);
    }
    if ( !commonUI )
LABEL_14:
      sub_1C71608(_4__this, isDecide);
    CommonUI__maskFadeout(commonUI, 1, v7, _9__1, 0);
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *, const MethodInfo *))_4__this->klass[1]._1.image)(
                                           _4__this,
                                           _4__this->klass[1]._1.gc_desc,
                                           method);
  if ( !_4__this )
    goto LABEL_14;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0);
  _4__this = (ClassBoardUIController_o *)this->fields.commonUI;
  if ( !_4__this )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0);
}


void ClassBoardController___c__DisplayClass117_0___OnClickClassBoardResetButton_b__1(
        ClassBoardController___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass117_0_o *v2; // x20
  struct ClassBoardController_o *_4__this; // x8
  int32_t baseId; // w21
  __int64 v5; // x19
  SceneJumpInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct ClassBoardController_o *v13; // x8
  struct ClassBoardRootComponent_o *classBoardRootComponent; // x8
  struct ClassBoardPageSwitcher_o *pageSwitcher; // x8
  struct SceneJumpInfo_o *SceneJumpInfo_k__BackingField; // x8

  v2 = this;
  if ( (byte_4CCAF94 & 1) == 0 )
  {
    sub_1C713B0(&SceneJumpInfo_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardController___c__DisplayClass117_0_o *)sub_1C713B0(&StringLiteral_4467/*"ClassBoardReset"*/);
    byte_4CCAF94 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  baseId = _4__this->fields.baseId;
  v5 = sub_1C715FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor_41756228((SceneJumpInfo_o *)v5, (System_String_o *)StringLiteral_4467/*"ClassBoardReset"*/, baseId, 0);
  if ( !v5 )
    goto LABEL_15;
  SceneJumpInfo__SetReturnNowScene((SceneJumpInfo_o *)v5, 0);
  v6 = (SceneJumpInfo_o *)sub_1C715FC(SceneJumpInfo_TypeInfo);
  SceneJumpInfo___ctor(v6, 0);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_15;
  classBoardRootComponent = v13->fields.classBoardRootComponent;
  if ( !classBoardRootComponent )
    goto LABEL_15;
  pageSwitcher = classBoardRootComponent->fields.pageSwitcher;
  if ( !pageSwitcher )
    goto LABEL_15;
  SceneJumpInfo_k__BackingField = pageSwitcher->fields._SceneJumpInfo_k__BackingField;
  if ( SceneJumpInfo_k__BackingField )
    LODWORD(SceneJumpInfo_k__BackingField) = SceneJumpInfo_k__BackingField->fields.num;
  if ( !v6 )
    goto LABEL_15;
  if ( (_DWORD)SceneJumpInfo_k__BackingField == 1 )
    LODWORD(SceneJumpInfo_k__BackingField) = 0;
  v6->fields.num = (int)SceneJumpInfo_k__BackingField;
  *(_QWORD *)(v5 + 56) = v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)v6, v7, v8, v9, v10, v11, v12);
  this = (ClassBoardController___c__DisplayClass117_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_15:
    sub_1C71608(this, method);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 22, 1, (Il2CppObject *)v5, 0);
}


void ClassBoardController___c__DisplayClass119_0___ctor(
        ClassBoardController___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass119_0___CheckUMedalCreateEventTutorial_b__0(
        ClassBoardController___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  ClassBoardRootComponent_c *v3; // x0
  int32_t U_MEDAL_CREATE_EVENT_ID; // w20
  NetworkManager_ResultCallbackFunc_o *_9__1; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CCAF95 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardRootComponent_TypeInfo);
    sub_1C713B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__1__);
    byte_4CCAF95 = 1;
  }
  v3 = ClassBoardRootComponent_TypeInfo;
  if ( !ClassBoardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo);
    v3 = ClassBoardRootComponent_TypeInfo;
  }
  U_MEDAL_CREATE_EVENT_ID = v3->static_fields->U_MEDAL_CREATE_EVENT_ID;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C715FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass119_0__CheckUMedalCreateEventTutorial_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  EventTutorialMaster__RequestTutorialEventSet(U_MEDAL_CREATE_EVENT_ID, 96, _9__1, 0);
}


void ClassBoardController___c__DisplayClass119_0___CheckUMedalCreateEventTutorial_b__1(
        ClassBoardController___c__DisplayClass119_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct System_Action_o *endAction; // x8

  endAction = this->fields.endAction;
  if ( endAction )
    ((void (__fastcall *)(intptr_t, intptr_t))endAction->fields.invoke_impl)(
      endAction->fields.method_code,
      endAction->fields.method);
}


void ClassBoardController___c__DisplayClass88_0___ctor(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__0(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v2; // x19
  int32_t acquireFlag; // w8
  struct ClassBoardSquare_o *v4; // x8
  __int64 naturalAligment; // x11
  struct ClassBoardSquare_o *v6; // x22
  BaseMonoBehaviour_o *_4__this; // x20
  BaseMonoBehaviour_c *klass; // x21
  _QWORD *image; // x8
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0
  BaseMonoBehaviour_o *v13; // x20
  BaseMonoBehaviour_c *v14; // x21
  _QWORD *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  struct ClassBoardController_o *v19; // x8
  ClassBoardController___c__DisplayClass88_0_o *v20; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *square; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  BaseMonoBehaviour_o *v29; // x20
  BaseMonoBehaviour_c *v30; // x21
  _QWORD *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  struct ClassBoardController_o *v35; // x8
  ClassBoardController___c__DisplayClass88_0_o *v36; // x20
  const MethodInfo *v37; // x3
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  BaseMonoBehaviour_o *v46; // x20
  BaseMonoBehaviour_c *v47; // x21
  _QWORD *v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  struct ClassBoardController_o *v52; // x8
  ClassBoardController___c__DisplayClass88_0_o *v53; // x20
  const MethodInfo *v54; // x4
  System_Action_o *_9__4; // x23
  ClassBoardSquare_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  BaseMonoBehaviour_o *v63; // x20
  BaseMonoBehaviour_c *v64; // x21
  _QWORD *v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  struct ClassBoardController_o *v69; // x8
  ClassBoardController___c__DisplayClass88_0_o *v70; // x20
  const MethodInfo *v71; // x5
  ClassBoardSquare_o *v72; // x21
  ClassBoardController___c_c *v73; // x0
  System_Action_o *_9__88_5; // x22
  Il2CppObject *v75; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Action_o *_9__6; // x24
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  ClassBoardLockOpenConfirmDialog_o *v90; // x0
  ClassBoardSquare_o *v91; // x1
  bool v92; // w2
  struct ClassBoardController_o *v93; // x8
  ClassBoardController___c__DisplayClass88_0_o *v94; // x20
  ClassBoardSquare_o *v95; // x21
  ClassBoardController___c_c *v96; // x0
  System_Action_o *_9__88_7; // x22
  Il2CppObject *v98; // x23
  struct ClassBoardController___c_StaticFields *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  System_Action_o *_9__8; // x23
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  ClassBoardSquareOpenConfirmDialog_o *v113; // x0
  ClassBoardSquare_o *v114; // x1
  bool v115; // w2
  BaseMonoBehaviour_o *v116; // x20
  BaseMonoBehaviour_c *v117; // x21
  _QWORD *v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  struct ClassBoardController_o *v122; // x8
  ClassBoardController___c__DisplayClass88_0_o *v123; // x20
  ClassBoardSquare_o *v124; // x21
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  int32_t v131; // w2
  int32_t v132; // w3
  System_String_o *v133; // x4
  int32_t v134; // w5
  int64_t v135; // x6
  System_String_o *v136; // x7
  ClassBoardController___c__DisplayClass88_0_o *v137; // x20
  ClassBoardSquare_o *v138; // x21
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7

  v2 = this;
  if ( (byte_4CCAF96 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C713B0(&ClassBoardLock_TypeInfo);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_5__);
    sub_1C713B0(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_7__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__10__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__13__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__14__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__2__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__3__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__4__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__6__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__8__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__9__);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAF96 = 1;
  }
  acquireFlag = v2->fields.acquireFlag;
  if ( (acquireFlag & 1) != 0 )
  {
    _4__this = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !_4__this )
      goto LABEL_136;
    klass = _4__this[3].klass;
    if ( !klass )
      goto LABEL_136;
    image = klass->_1.image;
    v10 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v11 = (int *)(image[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v11 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_17;
      }
      v12 = (__int64)&image[2 * *v11 + 39];
    }
    else
    {
LABEL_17:
      v12 = sub_1C47738(_4__this[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v12)(
                                                             klass,
                                                             *(_QWORD *)(v12 + 8));
    if ( !this )
      goto LABEL_136;
    v19 = v2->fields.__4__this;
    if ( !v19 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__16,
                                                             v19->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v20 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, 0);
    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__2 = v2->fields.__9__2;
    square = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__2__,
        0);
      v2->fields.__9__2 = _9__2;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v23, v24, v25, v26, v27, v28);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v20, square, _9__2, 0);
  }
  else if ( (acquireFlag & 2) != 0 )
  {
    v13 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v13 )
      goto LABEL_136;
    v14 = v13[3].klass;
    if ( !v14 )
      goto LABEL_136;
    v15 = v14->_1.image;
    v16 = *((unsigned __int16 *)v14->_1.image + 151);
    if ( *((_WORD *)v14->_1.image + 151) )
    {
      v17 = (int *)(v15[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v17 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_24;
      }
      v18 = (__int64)&v15[2 * *v17 + 39];
    }
    else
    {
LABEL_24:
      v18 = sub_1C47738(v13[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v18)(
                                                             v14,
                                                             *(_QWORD *)(v18 + 8));
    if ( !this )
      goto LABEL_136;
    v35 = v2->fields.__4__this;
    if ( !v35 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v13,
                                                             (Il2CppObject *)this->fields.__9__12,
                                                             v35->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v36 = this;
    LOBYTE(this[3].fields.__9__2) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__3 = v2->fields.__9__3;
    v39 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__3__,
        0);
      v2->fields.__9__3 = _9__3;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v40, v41, v42, v43, v44, v45);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v36, v39, _9__3, v37);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v29 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v29 )
      goto LABEL_136;
    v30 = v29[3].klass;
    if ( !v30 )
      goto LABEL_136;
    v31 = v30->_1.image;
    v32 = *((unsigned __int16 *)v30->_1.image + 151);
    if ( *((_WORD *)v30->_1.image + 151) )
    {
      v33 = (int *)(v31[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v33 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_40;
      }
      v34 = (__int64)&v31[2 * *v33 + 39];
    }
    else
    {
LABEL_40:
      v34 = sub_1C47738(v29[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v34)(
                                                             v30,
                                                             *(_QWORD *)(v34 + 8));
    if ( !this )
      goto LABEL_136;
    v52 = v2->fields.__4__this;
    if ( !v52 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v29,
                                                             (Il2CppObject *)this->fields.__9__10,
                                                             v52->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v53 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__4 = v2->fields.__9__4;
    v56 = v2->fields.square;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v57, v58, v59, v60, v61, v62);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v53, v56, 0, _9__4, v54);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v46 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v46 )
      {
        v47 = v46[3].klass;
        if ( v47 )
        {
          v48 = v47->_1.image;
          v49 = *((unsigned __int16 *)v47->_1.image + 151);
          if ( *((_WORD *)v47->_1.image + 151) )
          {
            v50 = (int *)(v48[22] + 8LL);
            while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_56;
            }
            v51 = (__int64)&v48[2 * *v50 + 39];
          }
          else
          {
LABEL_56:
            v51 = sub_1C47738(v46[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v51)(
                                                                   v47,
                                                                   *(_QWORD *)(v51 + 8));
          if ( this )
          {
            v69 = v2->fields.__4__this;
            if ( v69 )
            {
              this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v46,
                                                                       (Il2CppObject *)this->fields.__9__9,
                                                                       v69->fields.uiRoot,
                                                                       0,
                                                                       (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v70 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
                this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                                           this,
                                                                           this->klass[1]._1.gc_desc);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
                    v72 = v2->fields.square;
                    v73 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v73 = ClassBoardController___c_TypeInfo;
                    }
                    _9__88_5 = v73->static_fields->__9__88_5;
                    if ( !_9__88_5 )
                    {
                      if ( !v73->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v73);
                        v73 = ClassBoardController___c_TypeInfo;
                      }
                      v75 = (Il2CppObject *)v73->static_fields->__9;
                      _9__88_5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__88_5,
                        v75,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_5__,
                        0);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__88_5 = _9__88_5;
                      sub_1C71354(
                        (GrandQuestFolderBoardItem_o *)&static_fields->__9__88_5,
                        (int32_t)_9__88_5,
                        v77,
                        v78,
                        v79,
                        v80,
                        v81,
                        v82);
                    }
                    _9__6 = v2->fields.__9__6;
                    if ( !_9__6 )
                    {
                      _9__6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__6,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__6__,
                        0);
                      v2->fields.__9__6 = _9__6;
                      sub_1C71354(
                        (GrandQuestFolderBoardItem_o *)&v2->fields.__9__6,
                        (int32_t)_9__6,
                        v84,
                        v85,
                        v86,
                        v87,
                        v88,
                        v89);
                    }
                    v90 = (ClassBoardLockOpenConfirmDialog_o *)v70;
                    v91 = v72;
                    v92 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1C71608(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v63 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v63 )
        goto LABEL_136;
      v64 = v63[3].klass;
      if ( !v64 )
        goto LABEL_136;
      v65 = v64->_1.image;
      v66 = *((unsigned __int16 *)v64->_1.image + 151);
      if ( *((_WORD *)v64->_1.image + 151) )
      {
        v67 = (int *)(v65[22] + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v67 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_72;
        }
        v68 = (__int64)&v65[2 * *v67 + 39];
      }
      else
      {
LABEL_72:
        v68 = sub_1C47738(v63[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v68)(
                                                               v64,
                                                               *(_QWORD *)(v68 + 8));
      if ( !this )
        goto LABEL_136;
      v93 = v2->fields.__4__this;
      if ( !v93 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v63,
                                                               (Il2CppObject *)this->fields.__9__11,
                                                               v93->fields.uiRoot,
                                                               0,
                                                               (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v94 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0);
      this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                               this,
                                                               this->klass[1]._1.gc_desc);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
      v95 = v2->fields.square;
      v96 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v96 = ClassBoardController___c_TypeInfo;
      }
      _9__88_7 = v96->static_fields->__9__88_7;
      if ( !_9__88_7 )
      {
        if ( !v96->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v96);
          v96 = ClassBoardController___c_TypeInfo;
        }
        v98 = (Il2CppObject *)v96->static_fields->__9;
        _9__88_7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(_9__88_7, v98, Method_ClassBoardController___c__SetupSquareOnClickListener_b__88_7__, 0);
        v99 = ClassBoardController___c_TypeInfo->static_fields;
        v99->__9__88_7 = _9__88_7;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v99->__9__88_7,
          (int32_t)_9__88_7,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
      }
      _9__8 = v2->fields.__9__8;
      if ( !_9__8 )
      {
        _9__8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__8,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__8__,
          0);
        v2->fields.__9__8 = _9__8;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v2->fields.__9__8,
          (int32_t)_9__8,
          v107,
          v108,
          v109,
          v110,
          v111,
          v112);
      }
      v113 = (ClassBoardSquareOpenConfirmDialog_o *)v94;
      v114 = v95;
      v115 = 0;
    }
    else
    {
      v4 = v2->fields.square;
      if ( v4
        && (naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment,
            v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        if ( (ClassBoardLock_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLock_TypeInfo )
          v6 = v2->fields.square;
        else
          v6 = 0;
      }
      else
      {
        v6 = 0;
      }
      v116 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v116 )
        goto LABEL_136;
      v117 = v116[3].klass;
      if ( !v117 )
        goto LABEL_136;
      v118 = v117->_1.image;
      v119 = *((unsigned __int16 *)v117->_1.image + 151);
      if ( *((_WORD *)v117->_1.image + 151) )
      {
        v120 = (int *)(v118[22] + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v120 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v119;
          v120 += 4;
          if ( !v119 )
            goto LABEL_112;
        }
        v121 = (__int64)&v118[2 * *v120 + 39];
      }
      else
      {
LABEL_112:
        v121 = sub_1C47738(v116[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v121)(
                                                               v117,
                                                               *(_QWORD *)(v121 + 8));
      if ( !this )
        goto LABEL_136;
      v122 = v2->fields.__4__this;
      if ( v6 )
      {
        if ( v122 )
        {
          this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v116,
                                                                   (Il2CppObject *)this->fields.__9__9,
                                                                   v122->fields.uiRoot,
                                                                   0,
                                                                   (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v123 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, method);
            this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                                       this,
                                                                       this->klass[1]._1.gc_desc);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
                _9__88_5 = v2->fields.__9__9;
                v124 = v2->fields.square;
                if ( !_9__88_5 )
                {
                  _9__88_5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__88_5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__9__,
                    0);
                  v2->fields.__9__9 = _9__88_5;
                  sub_1C71354(
                    (GrandQuestFolderBoardItem_o *)&v2->fields.__9__9,
                    (int32_t)_9__88_5,
                    v125,
                    v126,
                    v127,
                    v128,
                    v129,
                    v130);
                }
                _9__6 = v2->fields.__9__10;
                if ( !_9__6 )
                {
                  _9__6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__6,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__10__,
                    0);
                  v2->fields.__9__10 = _9__6;
                  sub_1C71354(
                    (GrandQuestFolderBoardItem_o *)&v2->fields.__9__10,
                    (int32_t)_9__6,
                    v131,
                    v132,
                    v133,
                    v134,
                    v135,
                    v136);
                }
                v92 = 1;
                v90 = (ClassBoardLockOpenConfirmDialog_o *)v123;
                v91 = v124;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v90, v91, v92, _9__88_5, _9__6, v71);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v122 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass88_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v116,
                                                               (Il2CppObject *)this->fields.__9__11,
                                                               v122->fields.uiRoot,
                                                               0,
                                                               (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v137 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0);
      this = (ClassBoardController___c__DisplayClass88_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass88_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass88_0_o *, void *))this->klass[1]._1.image)(
                                                               this,
                                                               this->klass[1]._1.gc_desc);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
      _9__88_7 = v2->fields.__9__13;
      v138 = v2->fields.square;
      if ( !_9__88_7 )
      {
        _9__88_7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__88_7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__13__,
          0);
        v2->fields.__9__13 = _9__88_7;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v2->fields.__9__13,
          (int32_t)_9__88_7,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
      }
      _9__8 = v2->fields.__9__14;
      if ( !_9__8 )
      {
        _9__8 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__8,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__14__,
          0);
        v2->fields.__9__14 = _9__8;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&v2->fields.__9__14,
          (int32_t)_9__8,
          v145,
          v146,
          v147,
          v148,
          v149,
          v150);
      }
      v115 = 1;
      v113 = (ClassBoardSquareOpenConfirmDialog_o *)v137;
      v114 = v138;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v113, v114, v115, _9__88_7, _9__8, 0);
  }
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__CallbackSquareOnClick(_4__this, this->fields.square, this->fields.acquireFlag, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass88_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v3; // x19
  System_Action_o *_9__12; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CCAF98 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__12__);
    byte_4CCAF98 = 1;
  }
  _9__12 = v3->fields.__9__12;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__12,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__12__,
      0);
    v3->fields.__9__12 = _9__12;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__12, (int32_t)_9__12, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C71608(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__12, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0),
        (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__15; // x21
  ClassBoardController___c__DisplayClass88_0_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ClassBoardController___c__DisplayClass88_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_4CCAF99 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__15__);
    byte_4CCAF99 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__15 = (System_Action_object__o *)v2->fields.__9__15;
  v10 = this;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_object__o *)sub_1C715FC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__15,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__15__,
      0);
    v2->fields.__9__15 = (struct System_Action_IClassBoardSquareUser__o *)_9__15;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__15, (int32_t)_9__15, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
LABEL_21:
    sub_1C71608(this, method);
  v17 = v10->klass;
  v18 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_1C47738(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass88_0_o *, System_Action_object__o *, _QWORD))v20)(
    v10,
    _9__15,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass88_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v3; // x19
  System_Action_o *_9__16; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CCAF9A & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__16__);
    byte_4CCAF9A = 1;
  }
  _9__16 = v3->fields.__9__16;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__16 )
  {
    _9__16 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__16,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__16__,
      0);
    v3->fields.__9__16 = _9__16;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__16, (int32_t)_9__16, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C71608(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__16, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__16(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0),
        (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__4(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__6(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass88_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass88_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__11; // x21
  ClassBoardController___c__DisplayClass88_0_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ClassBoardController___c__DisplayClass88_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_4CCAF97 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass88_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__11__);
    byte_4CCAF97 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass88_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__11 = (System_Action_object__o *)v2->fields.__9__11;
  v10 = this;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_object__o *)sub_1C715FC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__11,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass88_0__SetupSquareOnClickListener_b__11__,
      0);
    v2->fields.__9__11 = (struct System_Action_IClassBoardSquareUser__o *)_9__11;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__11, (int32_t)_9__11, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
LABEL_21:
    sub_1C71608(this, method);
  v17 = v10->klass;
  v18 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_1C47738(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass88_0_o *, System_Action_object__o *, _QWORD))v20)(
    v10,
    _9__11,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass90_0___ctor(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__0(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__1(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__10(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0), (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__11(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass90_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__13; // x21
  ClassBoardController___c__DisplayClass90_0_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ClassBoardController___c__DisplayClass90_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_4CCAF9D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__13__);
    byte_4CCAF9D = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass90_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__13 = (System_Action_object__o *)v2->fields.__9__13;
  v10 = this;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_object__o *)sub_1C715FC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__13,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__13__,
      0);
    v2->fields.__9__13 = (struct System_Action_IClassBoardSquareUser__o *)_9__13;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__13, (int32_t)_9__13, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
LABEL_21:
    sub_1C71608(this, method);
  v17 = v10->klass;
  v18 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_1C47738(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass90_0_o *, System_Action_object__o *, _QWORD))v20)(
    v10,
    _9__13,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__12(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__13(
        ClassBoardController___c__DisplayClass90_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass90_0_o *v3; // x19
  System_Action_o *_9__14; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CCAF9E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__14__);
    byte_4CCAF9E = 1;
  }
  _9__14 = v3->fields.__9__14;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__14__,
      0);
    v3->fields.__9__14 = _9__14;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__14, (int32_t)_9__14, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C71608(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__14, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__14(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0), (square = this->fields.square) == 0)
    || (_4__this = this->fields.__4__this) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__2(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__4(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__6(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__7(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass90_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__9; // x21
  ClassBoardController___c__DisplayClass90_0_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ClassBoardController___c__DisplayClass90_0_c *v17; // x8
  __int64 v18; // x9
  IClassBoardSquareUser_c **v19; // x10
  __int64 v20; // x0

  v2 = this;
  if ( (byte_4CCAF9B & 1) == 0 )
  {
    sub_1C713B0(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__9__);
    byte_4CCAF9B = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v6 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 2;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14];
  }
  else
  {
LABEL_9:
    v8 = sub_1C47738(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass90_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__9 = (System_Action_object__o *)v2->fields.__9__9;
  v10 = this;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_object__o *)sub_1C715FC(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__9,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__9__,
      0);
    v2->fields.__9__9 = (struct System_Action_IClassBoardSquareUser__o *)_9__9;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
LABEL_21:
    sub_1C71608(this, method);
  v17 = v10->klass;
  v18 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v19 = (IClassBoardSquareUser_c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v19 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_18;
    }
    v20 = (__int64)(&v17->vtable._2_GetHashCode + *(_DWORD *)v19);
  }
  else
  {
LABEL_18:
    v20 = sub_1C47738(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass90_0_o *, System_Action_object__o *, _QWORD))v20)(
    v10,
    _9__9,
    *(_QWORD *)(v20 + 8));
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__8(
        ClassBoardController___c__DisplayClass90_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__OnEndClickProcess(_4__this, this->fields.square, 0);
}


void ClassBoardController___c__DisplayClass90_0___CallbackSquareOnClick_b__9(
        ClassBoardController___c__DisplayClass90_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass90_0_o *v3; // x19
  System_Action_o *_9__10; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v3 = this;
  if ( (byte_4CCAF9C & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass90_0_o *)sub_1C713B0(&Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__10__);
    byte_4CCAF9C = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass90_0__CallbackSquareOnClick_b__10__,
      0);
    v3->fields.__9__10 = _9__10;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v3->fields.__9__10, (int32_t)_9__10, v7, v8, v9, v10, v11, v12);
  }
  if ( !_4__this )
    sub_1C71608(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__10, 0);
}


void ClassBoardController___c__DisplayClass91_0___ctor(
        ClassBoardController___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass91_0___PlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0
  struct ClassBoardController_o *v4; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v6; // x21
  Il2CppObject *v7; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct ClassBoardController_o *v15; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v17; // x21
  Il2CppObject *v18; // x22
  struct ClassBoardController___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  struct ClassBoardController_o *v26; // x8
  System_Collections_Generic_List_object__o *GrandSquareViewList; // x20
  System_Action_object__o *v28; // x21
  Il2CppObject *v29; // x22
  struct ClassBoardController___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  struct ClassBoardController_o *v37; // x8
  System_Collections_Generic_List_object__o *GrandLineViewList; // x20
  System_Action_object__o *v39; // x21
  Il2CppObject *v40; // x22
  struct ClassBoardController___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  if ( (byte_4CCAF9F & 1) == 0 )
  {
    sub_1C713B0(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1C713B0(&System_Action_ClassBoardLine__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_1__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_2__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_3__);
    sub_1C713B0(&Method_ClassBoardController___c__PlayReleaseEffect_b__91_4__);
    sub_1C713B0(&ClassBoardController___c_TypeInfo);
    byte_4CCAF9F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_40;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_40;
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_40;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_40;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_40;
  squareViewList = (System_Collections_Generic_List_object__o *)v4->fields.squareViewList;
  _4__this = ClassBoardController___c_TypeInfo;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v6 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 72LL);
  if ( !v6 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v7 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v6 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v6, v7, Method_ClassBoardController___c__PlayReleaseEffect_b__91_1__, 0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__91_1 = (struct System_Action_ClassBoardSquare__o *)v6;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__91_1, (int32_t)v6, v9, v10, v11, v12, v13, v14);
  }
  if ( !squareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v6,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v15->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v17 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 80LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v17 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v17, v18, Method_ClassBoardController___c__PlayReleaseEffect_b__91_2__, 0);
    v19 = ClassBoardController___c_TypeInfo->static_fields;
    v19->__9__91_2 = (struct System_Action_ClassBoardLine__o *)v17;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v19->__9__91_2, (int32_t)v17, v20, v21, v22, v23, v24, v25);
  }
  if ( !lineViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v17,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  v26 = this->fields.__4__this;
  if ( !v26 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandSquareViewList = (System_Collections_Generic_List_object__o *)v26->fields.GrandSquareViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v28 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 88LL);
  if ( !v28 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v29 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v28 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v28, v29, Method_ClassBoardController___c__PlayReleaseEffect_b__91_3__, 0);
    v30 = ClassBoardController___c_TypeInfo->static_fields;
    v30->__9__91_3 = (struct System_Action_ClassBoardSquare__o *)v28;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v30->__9__91_3, (int32_t)v28, v31, v32, v33, v34, v35, v36);
  }
  if ( !GrandSquareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    GrandSquareViewList,
    (System_Action_T__o *)v28,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v37 = this->fields.__4__this;
  if ( !v37 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandLineViewList = (System_Collections_Generic_List_object__o *)v37->fields.GrandLineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v39 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 96LL);
  if ( !v39 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v40 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v39 = (System_Action_object__o *)sub_1C715FC(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v39, v40, Method_ClassBoardController___c__PlayReleaseEffect_b__91_4__, 0);
    v41 = ClassBoardController___c_TypeInfo->static_fields;
    v41->__9__91_4 = (struct System_Action_ClassBoardLine__o *)v39;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v41->__9__91_4, (int32_t)v39, v42, v43, v44, v45, v46, v47);
  }
  if ( !GrandLineViewList )
LABEL_40:
    sub_1C71608(_4__this, method);
  System_Collections_Generic_List_object___ForEach(
    GrandLineViewList,
    (System_Action_T__o *)v39,
    (const MethodInfo_3811158 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void ClassBoardController___c__DisplayClass92_0___ctor(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass92_0___PlayClassBoardStartEffect_b__6(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v5; // x20
  System_Action_o *_9__7; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCAFA0 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__7__);
    byte_4CCAFA0 = 1;
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  isLockCondReleased = this->fields.isLockCondReleased;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *))_4__this->klass[1]._1.image)(
                                           _4__this,
                                           _4__this->klass[1]._1.gc_desc);
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__TouchEnable(_4__this, 0);
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, void *))_4__this->klass[1]._1.image)(
                                           _4__this,
                                           _4__this->klass[1]._1.gc_desc);
  v5 = _4__this;
  if ( isLockCondReleased )
  {
    _9__7 = this->fields.__9__7;
    if ( !_9__7 )
    {
      _9__7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__7,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass92_0__PlayClassBoardStartEffect_b__7__,
        0);
      this->fields.__9__7 = _9__7;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__7, (int32_t)_9__7, v7, v8, v9, v10, v11, v12);
    }
    if ( v5 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v5, _9__7, 0);
      goto LABEL_13;
    }
LABEL_15:
    sub_1C71608(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void ClassBoardController___c__DisplayClass92_0___PlayClassBoardStartEffect_b__7(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass95_0___ctor(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass95_0___FinishedClassBoardStartEffect_b__0(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0
  System_Action_o *v4; // x1
  struct ClassBoardController_o *v5; // x8
  System_Action_o *_9__1; // x21
  struct ClassBoardController_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct ClassBoardController_o *v14; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CCAFA1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__1__);
    byte_4CCAFA1 = 1;
  }
  entity = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  v4 = (System_Action_o *)*((_QWORD *)_4__this + 20);
  if ( !v4 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    _4__this = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    v5 = this->fields.__4__this;
    if ( !v5 || !_4__this )
      goto LABEL_25;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)_4__this,
            &entity,
            v5->fields.baseId,
            (const MethodInfo_3408ECC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
      goto LABEL_16;
    _4__this = entity;
    if ( !entity )
      goto LABEL_25;
    _4__this = (void *)ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)entity, 0);
    if ( ((unsigned __int8)_4__this & 1) != 0 )
    {
      _9__1 = this->fields.__9__1;
      v7 = this->fields.__4__this;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__1,
          (Il2CppObject *)this,
          Method_ClassBoardController___c__DisplayClass95_0__FinishedClassBoardStartEffect_b__1__,
          0);
        this->fields.__9__1 = _9__1;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
      }
      if ( !v7 )
        goto LABEL_25;
      _4__this = v7;
      v4 = _9__1;
    }
    else
    {
LABEL_16:
      _4__this = this->fields.__4__this;
      if ( !_4__this )
        goto LABEL_25;
      v4 = (System_Action_o *)*((_QWORD *)_4__this + 19);
    }
  }
  ClassBoardController__SetOnClickBack((ClassBoardController_o *)_4__this, v4, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  ClassBoardController__ShowGrandBoard((ClassBoardController_o *)_4__this, 0, 0);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  if ( !v14->fields.isPlayEffectToGrandBoard || v14->fields.baseId != 8 )
  {
    _4__this = SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( _4__this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
      goto LABEL_24;
    }
LABEL_25:
    sub_1C71608(_4__this, method);
  }
LABEL_24:
  ActionExtensions__Call(this->fields.callback, 0);
}


void ClassBoardController___c__DisplayClass95_0___FinishedClassBoardStartEffect_b__1(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, method);
  ClassBoardController__HideGrandBoard(_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass96_0___ctor(
        ClassBoardController___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass96_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, f);
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, this->fields.squareModel, f, 0);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass96_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, f);
  ClassBoardController__CheckQuestOpenDialog(_4__this, this->fields.squareModel, f, 0);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__2(
        ClassBoardController___c__DisplayClass96_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C71608(0, f);
  ClassBoardController__PlayFullReleaseEffect(_4__this, this->fields.squareModel, f, 0);
}


void ClassBoardController___c__DisplayClass96_0___EndPlayReleaseEffect_b__3(
        ClassBoardController___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass96_0_o *v2; // x19
  struct ClassBoardController_o *_4__this; // x8

  v2 = this;
  if ( (byte_4CCAFA2 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass96_0_o *)sub_1C713B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4CCAFA2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isPlayFullReleaseEffect = 0,
        (this = (ClassBoardController___c__DisplayClass96_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A5F648 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C71608(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
}


void ClassBoardController___c__DisplayClass97_0___ctor(
        ClassBoardController___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass97_0___CheckOpenMissionClearDialogSave_b__2(
        ClassBoardController___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C71608(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ClassBoardController___c__DisplayClass98_0___ctor(
        ClassBoardController___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass98_0___CheckQuestOpenDialog_b__0(
        ClassBoardController___c__DisplayClass98_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass98_0_Fields *p_transitionAction; // x8
  ClassBoardQuestOpenConfirmDialog_o *questOpenConfirmDialog; // x0

  if ( isDecide )
  {
    p_transitionAction = (ClassBoardController___c__DisplayClass98_0_Fields *)&this->fields.transitionAction;
  }
  else
  {
    questOpenConfirmDialog = this->fields.questOpenConfirmDialog;
    if ( !questOpenConfirmDialog )
      sub_1C71608(0, isDecide);
    ClassBoardQuestOpenConfirmDialog__Close_48447768(questOpenConfirmDialog, 0, method);
    p_transitionAction = &this->fields;
  }
  ActionExtensions__Call(p_transitionAction->callback, 0);
}


void ClassBoardController___c__DisplayClass99_0___ctor(
        ClassBoardController___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass99_0___PlayFullReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 m_CachedPtr; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct IClassBoardSquareModel_o *squareModel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v14; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v16; // x0
  struct ClassBoardController_o *_4__this; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *v19; // x8
  char v20; // w21
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x9
  UnityEngine_Object_o *v25; // x21
  BaseMonoBehaviour_o *v26; // x22
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  struct IClassBoardSquareModel_o *v35; // x22
  IClassBoardSquareModel_c *v36; // x8
  ClassBoardFullReleaseEffectComponent_o *v37; // x21
  __int64 v38; // x9
  IClassBoardSquareModel_c **v39; // x10
  __int64 v40; // x0
  const MethodInfo *v41; // x2
  struct ClassBoardController_o *v42; // x8
  __int64 v43; // x9
  ClassBoardFullReleaseEffectComponent_o *v44; // x19
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x2

  if ( (byte_4CCAFA3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
    sub_1C713B0(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C713B0(&IClassBoardSquareModel_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_ClassBoardController___c__DisplayClass99_1__PlayFullReleaseEffect_b__1__);
    sub_1C713B0(&ClassBoardController___c__DisplayClass99_1_TypeInfo);
    byte_4CCAFA3 = 1;
  }
  v3 = sub_1C715FC(ClassBoardController___c__DisplayClass99_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_41;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  squareModel = this->fields.squareModel;
  if ( !squareModel )
    goto LABEL_41;
  klass = squareModel->klass;
  v14 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      p_offset += 2;
      if ( !v14 )
        goto LABEL_9;
    }
    v16 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v16 = sub_1C47738(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v16)(
                  squareModel,
                  *(_QWORD *)(v16 + 8));
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_41;
  resourceCatalog = _4__this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_41;
  v19 = resourceCatalog->klass;
  v20 = m_CachedPtr;
  v21 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v22 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_17;
    }
    v23 = (__int64)&v19->vtable[*v22];
  }
  else
  {
LABEL_17:
    v23 = sub_1C47738(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v23)(
                  resourceCatalog,
                  *(_QWORD *)(v23 + 8));
  if ( !m_CachedPtr )
    goto LABEL_41;
  v24 = 144;
  if ( (v20 & 1) != 0 )
    v24 = 152;
  v25 = *(UnityEngine_Object_o **)(m_CachedPtr + v24);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_CachedPtr = UnityEngine_Object__op_Equality(v25, 0, 0);
  if ( (m_CachedPtr & 1) != 0 )
  {
    ActionExtensions__Call(this->fields.callback, 0);
    return;
  }
  v26 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v26 )
    goto LABEL_41;
  m_CachedPtr = v26[2].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_41;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)m_CachedPtr, 0);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    v26,
                    (Il2CppObject *)v25,
                    transform,
                    0,
                    (const MethodInfo_3133AAC *)Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
  *(_QWORD *)(v3 + 16) = Object_object;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)Object_object, v29, v30, v31, v32, v33, v34);
  v35 = this->fields.squareModel;
  if ( !v35 )
    goto LABEL_41;
  v36 = v35->klass;
  v37 = *(ClassBoardFullReleaseEffectComponent_o **)(v3 + 16);
  v38 = *(unsigned __int16 *)&v35->klass->_2.rank;
  if ( *(_WORD *)&v35->klass->_2.rank )
  {
    v39 = (IClassBoardSquareModel_c **)&v36->_1.interfaceOffsets->offset;
    while ( *(v39 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_33;
    }
    v40 = (__int64)&(&v36->rgctx_data)[2 * *(_DWORD *)v39 + 39];
  }
  else
  {
LABEL_33:
    v40 = sub_1C47738(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v40)(v35, *(_QWORD *)(v40 + 8));
  v42 = this->fields.__4__this;
  if ( !v42 || !v37 )
    goto LABEL_41;
  v43 = 144;
  if ( (m_CachedPtr & 1) != 0 )
    v43 = 224;
  ClassBoardFullReleaseEffectComponent__SetClassIcon(v37, *(_DWORD *)((char *)&v42->klass + v43), v41);
  v44 = *(ClassBoardFullReleaseEffectComponent_o **)(v3 + 16);
  v45 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass99_1__PlayFullReleaseEffect_b__1__,
    0);
  if ( !v44 )
LABEL_41:
    sub_1C71608(m_CachedPtr, v5);
  ClassBoardFullReleaseEffectComponent__Play(v44, v45, v46);
}


void ClassBoardController___c__DisplayClass99_1___ctor(
        ClassBoardController___c__DisplayClass99_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass99_1___PlayFullReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass99_1_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass99_1_o *v2; // x19
  struct ClassBoardController___c__DisplayClass99_0_o *CS___8__locals1; // x8
  struct ClassBoardController___c__DisplayClass99_0_o *v4; // x8
  struct ClassBoardController___c__DisplayClass99_0_o *v5; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4CCAFA4 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass99_1_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCAFA4 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_14;
  this = (ClassBoardController___c__DisplayClass99_1_o *)v4->fields.__4__this;
  if ( !this
    || (this = (ClassBoardController___c__DisplayClass99_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass99_1_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 0, 0),
        (v5 = v2->fields.CS___8__locals1) == 0)
    || (this = (ClassBoardController___c__DisplayClass99_1_o *)v5->fields.__4__this) == 0
    || (this = (ClassBoardController___c__DisplayClass99_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass99_1_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc)) == 0
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)this, 0),
        (this = (ClassBoardController___c__DisplayClass99_1_o *)v2->fields.fullReleaseEffect) == 0) )
  {
LABEL_14:
    sub_1C71608(this, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(gameObject, 0);
}