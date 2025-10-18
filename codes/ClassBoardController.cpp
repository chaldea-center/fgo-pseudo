void ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardModelBuilder_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ClassBoardModelBuilder_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C469AA & 1) == 0 )
  {
    sub_1C37058(&ClassBoardModelBuilder_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardLine__TypeInfo);
    byte_4C469AA = 1;
  }
  v3 = (ClassBoardModelBuilder_o *)sub_1C372A4(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v3, 0);
  this->fields._builder_k__BackingField = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._builder_k__BackingField, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.squareViewList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.lineViewList, (int32_t)v9, v10, v11);
  v12 = (ClassBoardModelBuilder_o *)sub_1C372A4(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v12, 0);
  this->fields._GrandBuilder_k__BackingField = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._GrandBuilder_k__BackingField, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.GrandSquareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.GrandSquareViewList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.GrandLineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v18;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.GrandLineViewList, (int32_t)v18, v19, v20);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ClassBoardSquare_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ClassBoardSquare_o *v14; // x8
  __int64 naturalAligment; // x10
  bool v16; // w22
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  struct IClassBoardResourceCatalog_o *v22; // x21
  IClassBoardResourceCatalog_c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  ClassBoardSquareDetailDialog_o *v27; // x21
  ClassBoardSquare_o *v28; // x20
  System_Action_o *v29; // x22
  struct IClassBoardResourceCatalog_o *v30; // x21
  IClassBoardResourceCatalog_c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  ClassBoardDisableOpenDialog_o *v35; // x21
  ClassBoardSquare_o *v36; // x20
  System_Action_o *v37; // x22
  struct IClassBoardResourceCatalog_o *v38; // x22
  IClassBoardResourceCatalog_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  ClassBoardLockReleaseConditionDialog_o *v43; // x21
  ClassBoardSquare_o *v44; // x20
  System_Action_o *v45; // x22
  struct IClassBoardResourceCatalog_o *v46; // x22
  IClassBoardResourceCatalog_c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  Il2CppObject *v51; // x22
  ClassBoardSquare_o *v52; // x20
  ClassBoardController___c_c *v53; // x0
  System_Action_o *_9__87_3; // x21
  Il2CppObject *v55; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_Action_o *v59; // x23
  ClassBoardLockOpenConfirmDialog_o *v60; // x0
  ClassBoardSquare_o *v61; // x1
  bool v62; // w2
  System_Action_o *v63; // x3
  Il2CppObject *v64; // x22
  ClassBoardSquare_o *v65; // x20
  ClassBoardController___c_c *v66; // x0
  System_Action_o *_9__87_5; // x21
  Il2CppObject *v68; // x23
  struct ClassBoardController___c_StaticFields *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Action_o *v72; // x23
  ClassBoardSquareOpenConfirmDialog_o *v73; // x0
  ClassBoardSquare_o *v74; // x1
  bool v75; // w2
  System_Action_o *v76; // x3
  struct IClassBoardResourceCatalog_o *v77; // x21
  IClassBoardResourceCatalog_c *v78; // x8
  __int64 v79; // x9
  int32_t *v80; // x10
  __int64 v81; // x0
  Il2CppObject *v82; // x21
  ClassBoardSquare_o *v83; // x20
  System_Action_o *v84; // x22
  Il2CppObject *v85; // x21
  ClassBoardSquare_o *v86; // x20
  System_Action_o *v87; // x22

  v4 = acquireFlag;
  if ( (byte_4C4698D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C37058(&ClassBoardLock_TypeInfo);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__CallbackSquareOnClick_b__87_3__);
    sub_1C37058(&Method_ClassBoardController___c__CallbackSquareOnClick_b__87_5__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__0__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__11__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__12__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__1__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__2__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__4__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__6__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__7__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__8__);
    sub_1C37058(&ClassBoardController___c__DisplayClass87_0_TypeInfo);
    sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C4698D = 1;
  }
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass87_0_TypeInfo);
  ClassBoardController___c__DisplayClass87_0___ctor((ClassBoardController___c__DisplayClass87_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_97;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = square;
  v11 = (ClassBoardSquare_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)square, v12, v13);
  if ( (v4 & 1) != 0 )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v19 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
      if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_17;
        }
        v21 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_17:
        v21 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v21)(
                                        resourceCatalog,
                                        *(_QWORD *)(v21 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[7].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
        if ( Object_object )
        {
          v27 = (ClassBoardSquareDetailDialog_o *)Object_object;
          ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v28 = *(ClassBoardSquare_o **)(v7 + 24);
            v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v29,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__0__,
              0);
            ClassBoardSquareDetailDialog__Open(v27, v28, v29, 0);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 2) != 0 )
  {
    v22 = this->fields.resourceCatalog;
    if ( v22 )
    {
      v23 = v22->klass;
      v24 = *(unsigned __int16 *)&v22->klass->_2.rank;
      if ( *(_WORD *)&v22->klass->_2.rank )
      {
        v25 = &v23->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v25 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_23;
        }
        v26 = (__int64)&v23->vtable[*v25];
      }
      else
      {
LABEL_23:
        v26 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v26)(
                                        v22,
                                        *(_QWORD *)(v26 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[5].klass,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
        if ( Object_object )
        {
          v35 = (ClassBoardDisableOpenDialog_o *)Object_object;
          ClassBoardDisableOpenDialog__Init((ClassBoardDisableOpenDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v36 = *(ClassBoardSquare_o **)(v7 + 24);
            v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v37,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__1__,
              0);
            ClassBoardDisableOpenDialog__Open(v35, v36, v37, 0);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 4) != 0 )
  {
    v30 = this->fields.resourceCatalog;
    if ( v30 )
    {
      v31 = v30->klass;
      v32 = *(unsigned __int16 *)&v30->klass->_2.rank;
      if ( *(_WORD *)&v30->klass->_2.rank )
      {
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v33 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_34;
        }
        v34 = (__int64)&v31->vtable[*v33];
      }
      else
      {
LABEL_34:
        v34 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v34)(
                                        v30,
                                        *(_QWORD *)(v34 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[6].monitor,
                          this->fields.uiRoot,
                          0,
                          (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
        if ( Object_object )
        {
          v43 = (ClassBoardLockReleaseConditionDialog_o *)Object_object;
          ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)Object_object, 0);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
            v44 = *(ClassBoardSquare_o **)(v7 + 24);
            v45 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              v45,
              (Il2CppObject *)v7,
              Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__2__,
              0);
            ClassBoardLockReleaseConditionDialog__Open(v43, v44, 0, v45, 0);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v38 = this->fields.resourceCatalog;
    if ( !v38 )
      goto LABEL_97;
    v39 = v38->klass;
    v40 = *(unsigned __int16 *)&v38->klass->_2.rank;
    if ( *(_WORD *)&v38->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v41 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_45;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_45:
      v42 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v42)(
                                      v38,
                                      *(_QWORD *)(v42 + 8));
    if ( !Object_object )
      goto LABEL_97;
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      (Il2CppObject *)Object_object[6].klass,
                      this->fields.uiRoot,
                      0,
                      (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    if ( !Object_object )
      goto LABEL_97;
    v51 = Object_object;
    ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0);
    Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !Object_object )
      goto LABEL_97;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
    v52 = *v11;
    v53 = ClassBoardController___c_TypeInfo;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v53 = ClassBoardController___c_TypeInfo;
    }
    _9__87_3 = v53->static_fields->__9__87_3;
    if ( !_9__87_3 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = ClassBoardController___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__87_3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(_9__87_3, v55, Method_ClassBoardController___c__CallbackSquareOnClick_b__87_3__, 0);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
      static_fields->__9__87_3 = _9__87_3;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__87_3, (int32_t)_9__87_3, v57, v58);
    }
    v59 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__4__,
      0);
    v60 = (ClassBoardLockOpenConfirmDialog_o *)v51;
    v61 = v52;
    v62 = 0;
    v63 = _9__87_3;
  }
  else
  {
    if ( (v4 & 8) != 0 )
    {
      v46 = this->fields.resourceCatalog;
      if ( v46 )
      {
        v47 = v46->klass;
        v48 = *(unsigned __int16 *)&v46->klass->_2.rank;
        if ( *(_WORD *)&v46->klass->_2.rank )
        {
          v49 = &v47->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v49 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_56;
          }
          v50 = (__int64)&v47->vtable[*v49];
        }
        else
        {
LABEL_56:
          v50 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v50)(
                                          v46,
                                          *(_QWORD *)(v50 + 8));
        if ( Object_object )
        {
          Object_object = BaseMonoBehaviour__createObject_object_(
                            (BaseMonoBehaviour_o *)this,
                            (Il2CppObject *)Object_object[5].monitor,
                            this->fields.uiRoot,
                            0,
                            (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
          if ( Object_object )
          {
            v64 = Object_object;
            ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0);
            Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                              this,
                                              this->klass->vtable._4_get_classBoardUIController.method);
            if ( Object_object )
            {
              ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
              v65 = *v11;
              v66 = ClassBoardController___c_TypeInfo;
              if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                v66 = ClassBoardController___c_TypeInfo;
              }
              _9__87_5 = v66->static_fields->__9__87_5;
              if ( !_9__87_5 )
              {
                if ( !v66->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v66);
                  v66 = ClassBoardController___c_TypeInfo;
                }
                v68 = (Il2CppObject *)v66->static_fields->__9;
                _9__87_5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                System_Action___ctor(_9__87_5, v68, Method_ClassBoardController___c__CallbackSquareOnClick_b__87_5__, 0);
                v69 = ClassBoardController___c_TypeInfo->static_fields;
                v69->__9__87_5 = _9__87_5;
                sub_1C36FFC((CGThumbnailListItem_o *)&v69->__9__87_5, (int32_t)_9__87_5, v70, v71);
              }
              v72 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(
                v72,
                (Il2CppObject *)v7,
                Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__6__,
                0);
              v73 = (ClassBoardSquareOpenConfirmDialog_o *)v64;
              v74 = v65;
              v75 = 0;
              v76 = _9__87_5;
              goto LABEL_92;
            }
          }
        }
      }
LABEL_97:
      sub_1C372B4(Object_object);
    }
    v14 = *v11;
    v16 = !*v11
       || (naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment,
           v14->klass->_2.naturalAligment < (unsigned int)naturalAligment)
       || v14->klass->_2.typeHierarchy[naturalAligment - 1] != (Il2CppClass *)ClassBoardLock_TypeInfo;
    v77 = this->fields.resourceCatalog;
    if ( !v77 )
      goto LABEL_97;
    v78 = v77->klass;
    v79 = *(unsigned __int16 *)&v77->klass->_2.rank;
    if ( *(_WORD *)&v77->klass->_2.rank )
    {
      v80 = &v78->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v80 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v79;
        v80 += 4;
        if ( !v79 )
          goto LABEL_85;
      }
      v81 = (__int64)&v78->vtable[*v80];
    }
    else
    {
LABEL_85:
      v81 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v81)(
                                      v77,
                                      *(_QWORD *)(v81 + 8));
    if ( !Object_object )
      goto LABEL_97;
    if ( v16 )
    {
      Object_object = BaseMonoBehaviour__createObject_object_(
                        (BaseMonoBehaviour_o *)this,
                        (Il2CppObject *)Object_object[5].monitor,
                        this->fields.uiRoot,
                        0,
                        (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( Object_object )
      {
        v82 = Object_object;
        ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0);
        Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                          this,
                                          this->klass->vtable._4_get_classBoardUIController.method);
        if ( Object_object )
        {
          ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
          v83 = *(ClassBoardSquare_o **)(v7 + 24);
          v84 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v84,
            (Il2CppObject *)v7,
            Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__11__,
            0);
          v72 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v72,
            (Il2CppObject *)v7,
            Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__12__,
            0);
          v75 = 1;
          v73 = (ClassBoardSquareOpenConfirmDialog_o *)v82;
          v74 = v83;
          v76 = v84;
LABEL_92:
          ClassBoardSquareOpenConfirmDialog__Open(v73, v74, v75, v76, v72, 0);
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
                      (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    if ( !Object_object )
      goto LABEL_97;
    v85 = Object_object;
    ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0);
    Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !Object_object )
      goto LABEL_97;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0);
    v86 = *(ClassBoardSquare_o **)(v7 + 24);
    v87 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v87,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__7__,
      0);
    v59 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v59,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__8__,
      0);
    v62 = 1;
    v60 = (ClassBoardLockOpenConfirmDialog_o *)v85;
    v61 = v86;
    v63 = v87;
  }
  ClassBoardLockOpenConfirmDialog__Open(v60, v61, v62, v63, v59, 0);
}


void ClassBoardController__CheckOpenMissionClearDialogSave(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  ClassBoardUIController_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  ClassBoardController___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Func_object__bool__o *_9__94_0; // x23
  Il2CppObject *v22; // x24
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  ClassBoardController___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  System_Func_object__int__o *_9__94_1; // x23
  Il2CppObject *v30; // x24
  struct ClassBoardController___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  ClassBoardUIController_o *v35; // x19
  System_Action_o *v36; // x21
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v37; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46994 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
    sub_1C37058(&System_Func_IClassBoardLockModel__int__TypeInfo);
    sub_1C37058(&System_Func_IClassBoardLockModel__bool__TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C37058(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__94_0__);
    sub_1C37058(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__94_1__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass94_0__CheckOpenMissionClearDialogSave_b__2__);
    sub_1C37058(&ClassBoardController___c__DisplayClass94_0_TypeInfo);
    sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C46994 = 1;
  }
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass94_0_TypeInfo);
  ClassBoardController___c__DisplayClass94_0___ctor((ClassBoardController___c__DisplayClass94_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v13;
  if ( !squareModel )
    goto LABEL_29;
  klass = squareModel->klass;
  v15 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_9;
    }
    v17 = (__int64)&klass->vtable[*p_offset + 17];
  }
  else
  {
LABEL_9:
    v17 = sub_1C87870(squareModel, IClassBoardSquareModel_TypeInfo, 17);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))v17)(
    squareModel,
    &source,
    *(_QWORD *)(v17 + 8));
  v18 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v19 = ClassBoardController___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v19 = ClassBoardController___c_TypeInfo;
  }
  _9__94_0 = (System_Func_object__bool__o *)v19->static_fields->__9__94_0;
  if ( !_9__94_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = ClassBoardController___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__94_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__94_0,
      v22,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__94_0__,
      0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__94_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__94_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__94_0, (int32_t)_9__94_0, v24, v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          v20,
          (System_Func_TSource__bool__o *)_9__94_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v27 = ClassBoardController___c_TypeInfo;
  v28 = v26;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v27 = ClassBoardController___c_TypeInfo;
  }
  _9__94_1 = (System_Func_object__int__o *)v27->static_fields->__9__94_1;
  if ( !_9__94_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ClassBoardController___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__94_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__94_1,
      v30,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__94_1__,
      0);
    v31 = ClassBoardController___c_TypeInfo->static_fields;
    v31->__9__94_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__94_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v31->__9__94_1, (int32_t)_9__94_1, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__94_1,
                                                               (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( !System_Linq_Enumerable__Any_object_(
          v34,
          (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    goto LABEL_28;
  }
  v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v8
    || (ClassBoardUIController__SetCameraWorkBlock(v8, 1, 0),
        v35 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method),
        v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v36,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass94_0__CheckOpenMissionClearDialogSave_b__2__,
          0),
        !v35) )
  {
LABEL_29:
    sub_1C372B4(v8);
  }
  ClassBoardUIController__OpenMissionClearDialog(v35, v36, 0);
LABEL_28:
  v37 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v34,
                                                                                    (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v37, 0);
}


void ClassBoardController__CheckQuestOpenDialog(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  IClassBoardSquareModel_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  Il2CppObject *Object_object; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *Instance; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  Il2CppObject *v32; // x24
  System_String_o *v33; // x22
  System_Action_o *v34; // x23
  ClassBoardQuestOpenConfirmDialog_o *v35; // x21
  int32_t grandBaseId; // w19
  ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *v37; // x22
  int32_t v38; // [xsp+8h] [xbp-38h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C46995 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
    sub_1C37058(&Method_ClassBoardQuestOpenConfirmDialog_Close__);
    sub_1C37058(&ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass95_0__CheckQuestOpenDialog_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass95_0_TypeInfo);
    sub_1C37058(&StringLiteral_13692/*"Terminal/Quest/{0}"*/);
    byte_4C46995 = 1;
  }
  questId = 0;
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass95_0_TypeInfo);
  ClassBoardController___c__DisplayClass95_0___ctor((ClassBoardController___c__DisplayClass95_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v9, v10);
  if ( !squareModel )
    goto LABEL_28;
  klass = squareModel->klass;
  v12 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)&(&klass->rgctx_data)[2 * *p_offset + 39];
  }
  else
  {
LABEL_9:
    v14 = sub_1C87870(squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v14)(squareModel, *(_QWORD *)(v14 + 8)) & 1) == 0 )
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
  v16 = resourceCatalog->klass;
  v17 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v18 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v18 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v17;
      v18 += 4;
      if ( !v17 )
        goto LABEL_20;
    }
    v19 = (__int64)&v16->vtable[*v18];
  }
  else
  {
LABEL_20:
    v19 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v19)(
         resourceCatalog,
         *(_QWORD *)(v19 + 8));
  if ( !v8 )
    goto LABEL_28;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)this,
                    *(Il2CppObject **)(v8 + 136),
                    this->fields.uiRoot,
                    0,
                    (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
  *(_QWORD *)(v7 + 32) = Object_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)Object_object, v21, v22);
  v8 = *(_QWORD *)(v7 + 32);
  if ( !v8 )
    goto LABEL_28;
  ClassBoardQuestOpenConfirmDialog__Init((ClassBoardQuestOpenConfirmDialog_o *)v8, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v38 = questId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v24, v25, v26, v27, v28, v29);
  v31 = System_String__Format((System_String_o *)StringLiteral_13692/*"Terminal/Quest/{0}"*/, v30, 0);
  v32 = *(Il2CppObject **)(v7 + 32);
  v33 = v31;
  v34 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v34, v32, Method_ClassBoardQuestOpenConfirmDialog_Close__, 0);
  if ( !Instance
    || (CommonUI__TryGetSceneTransitionAction((CommonUI_o *)Instance, (System_Action_o **)(v7 + 24), v33, 0, v34, 0),
        v35 = *(ClassBoardQuestOpenConfirmDialog_o **)(v7 + 32),
        grandBaseId = this->fields.grandBaseId,
        v37 = (ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *)sub_1C372A4(ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo),
        ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
          v37,
          (Il2CppObject *)v7,
          Method_ClassBoardController___c__DisplayClass95_0__CheckQuestOpenDialog_b__0__,
          0),
        !v35) )
  {
LABEL_28:
    sub_1C372B4(v8);
  }
  ClassBoardQuestOpenConfirmDialog__Open(v35, grandBaseId, v37, 0);
}


void ClassBoardController__CheckUMedalCreateEventTutorial(
        ClassBoardController_o *this,
        bool isGrandScoreTutorialDisplayed,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x23
  ClassBoardRootComponent_c *v12; // x0
  bool v13; // w0
  ClassBoardRootComponent_c *v14; // x0
  _BOOL4 isGrandScoreReleaseDialogOpen; // w8
  ClassBoardRootComponent_o *classBoardRootComponent; // x20
  bool v17; // w25
  System_String_o *U_MEDAL_CREATE_BG_MOVIE_NAME; // x22
  System_Action_o *v19; // x23

  if ( (byte_4C469A9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ClassBoardRootComponent_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass116_0__CheckUMedalCreateEventTutorial_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass116_0_TypeInfo);
    byte_4C469A9 = 1;
  }
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass116_0_TypeInfo);
  ClassBoardController___c__DisplayClass116_0___ctor((ClassBoardController___c__DisplayClass116_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = endAction;
  v11 = v7 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)endAction, v9, v10);
  v12 = ClassBoardRootComponent_TypeInfo;
  if ( !ClassBoardRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo);
    v12 = ClassBoardRootComponent_TypeInfo;
  }
  v13 = EventTutorialMaster__CheckShouldPlayOpenTypeNoneEventTutorial(
          v12->static_fields->U_MEDAL_CREATE_EVENT_ID,
          96,
          0);
  if ( this->fields.baseId == 9 && v13 )
  {
    v14 = ClassBoardRootComponent_TypeInfo;
    isGrandScoreReleaseDialogOpen = this->fields.isGrandScoreReleaseDialogOpen;
    classBoardRootComponent = this->fields.classBoardRootComponent;
    v17 = !isGrandScoreReleaseDialogOpen;
    if ( !ClassBoardRootComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardRootComponent_TypeInfo);
      v14 = ClassBoardRootComponent_TypeInfo;
    }
    U_MEDAL_CREATE_BG_MOVIE_NAME = v14->static_fields->U_MEDAL_CREATE_BG_MOVIE_NAME;
    v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)v7,
      Method_ClassBoardController___c__DisplayClass116_0__CheckUMedalCreateEventTutorial_b__0__,
      0);
    if ( classBoardRootComponent )
    {
      ClassBoardRootComponent__PlayMovie(
        classBoardRootComponent,
        U_MEDAL_CREATE_BG_MOVIE_NAME,
        v17 && !isGrandScoreTutorialDisplayed,
        v19,
        0);
      return;
    }
LABEL_15:
    sub_1C372B4(v8);
  }
  if ( *(_QWORD *)v11 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
      *(_QWORD *)(*(_QWORD *)v11 + 64LL),
      *(_QWORD *)(*(_QWORD *)v11 + 40LL));
}


ClassBoardSquare_o *ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        UnityEngine_Transform_o *parent,
        bool isGrand,
        const MethodInfo *method)
{
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
  Il2CppObject *v21; // x1

  v10 = (BaseMonoBehaviour_o *)this;
  if ( (byte_4C46988 & 1) == 0 )
  {
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    this = (ClassBoardController_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46988 = 1;
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
        v17 = sub_1C87870(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 7);
      }
      this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v17)(
                                         klass,
                                         (unsigned int)assetId,
                                         *(_QWORD *)(v17 + 8));
      v21 = (Il2CppObject *)this;
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
        v20 = sub_1C87870(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 4);
      }
      this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v20)(
                                         klass,
                                         (unsigned int)assetId,
                                         *(_QWORD *)(v20 + 8));
      v21 = (Il2CppObject *)this;
    }
    if ( !v12 )
LABEL_34:
      sub_1C372B4(this);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v12,
                      v21,
                      parent,
                      0,
                      (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
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
                                   (Il2CppObject *)defaultPrefab,
                                   parent,
                                   0,
                                   (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


void ClassBoardController__CreateViews(ClassBoardController_o *this, bool isGrand, const MethodInfo *method)
{
  ClassBoardController_c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x10
  __int64 v8; // x9
  __int64 v9; // x11
  __int64 *v10; // x24
  __int64 v11; // x8
  System_Collections_Generic_List_object__o *v12; // x25
  System_Collections_Generic_List_object__o *v13; // x21
  UnityEngine_Transform_o *v14; // x22
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x24
  ClassBoardController_o *v19; // x23
  ClassBoardController_o *v20; // x29
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  IClassBoardSquareModel_o *v29; // x26
  __int64 v30; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x27
  IClassBoardResourceCatalog_c *v32; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  IClassBoardSquareModel_c *v36; // x8
  __int64 v37; // x9
  IClassBoardSquareModel_c **v38; // x10
  __int64 v39; // x0
  IClassBoardResourceCatalog_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  struct IClassBoardResourceCatalog_o *v45; // x27
  ClassBoardController_o *v46; // x10
  ClassBoardController_o *v47; // x9
  IClassBoardResourceCatalog_c *v48; // x8
  __int64 v49; // x9
  int32_t *v50; // x10
  __int64 v51; // x0
  struct IClassBoardResourceCatalog_o *v52; // x27
  ClassBoardController_o *v53; // x10
  ClassBoardController_o *v54; // x9
  IClassBoardResourceCatalog_c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x0
  ClassBoardSquare_o **v60; // x9
  ClassBoardController_o *v61; // x27
  IClassBoardSquareModel_c *v62; // x8
  ClassBoardSquare_o *v63; // x28
  __int64 v64; // x9
  IClassBoardSquareModel_c **v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  const MethodInfo *v68; // x5
  IClassBoardResourceCatalog_c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  IClassBoardResourceCatalog_c *v73; // x8
  __int64 v74; // x9
  int32_t *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x0
  ClassBoardSquare_o **v78; // x9
  __int64 v79; // x0
  ClassBoardSquare_o **v80; // x9
  __int64 v81; // x0
  IClassBoardSquareModel_c *v82; // x8
  __int64 v83; // x9
  IClassBoardSquareModel_c **v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  IClassBoardSquareModel_c *v87; // x8
  __int64 v88; // x9
  IClassBoardSquareModel_c **v89; // x10
  __int64 v90; // x0
  ClassBoardSquare_o *v91; // x0
  Il2CppObject *v92; // x27
  __int64 v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  __int64 v100; // x8
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 *v104; // x23
  __int64 v105; // x8
  __int64 v106; // x9
  int *v107; // x10
  __int64 v108; // x0
  __int64 v109; // x23
  ClassBoardController_o *v110; // x26
  ClassBoardController_o *v111; // x27
  __int64 v112; // x8
  __int64 v113; // x9
  int *v114; // x10
  __int64 v115; // x0
  __int64 v116; // x8
  __int64 v117; // x9
  int *v118; // x10
  __int64 v119; // x0
  __int64 v120; // x0
  struct IClassBoardResourceCatalog_o *v121; // x25
  IClassBoardLineModel_o *v122; // x24
  IClassBoardResourceCatalog_c *v123; // x8
  __int64 v124; // x9
  int32_t *v125; // x10
  __int64 v126; // x0
  IClassBoardResourceCatalog_c *v127; // x8
  __int64 v128; // x9
  int32_t *v129; // x10
  __int64 v130; // x0
  __int64 v131; // x0
  Il2CppObject **v132; // x8
  BaseMonoBehaviour_o *v133; // x0
  __int64 v134; // x0
  Il2CppObject *Object_object; // x0
  Il2CppObject *v136; // x25
  __int64 v137; // x0
  int32_t v138; // w2
  const MethodInfo *v139; // x3
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  __int64 v144; // x8
  __int64 v145; // x9
  int *v146; // x10
  __int64 v147; // x0
  __int64 v148; // [xsp+0h] [xbp-90h]
  ClassBoardController_o *v149; // [xsp+8h] [xbp-88h]
  ClassBoardController_o *v150; // [xsp+10h] [xbp-80h]
  ClassBoardController_o *v151; // [xsp+18h] [xbp-78h]
  ClassBoardController_o *v152; // [xsp+20h] [xbp-70h]

  if ( (byte_4C46987 & 1) == 0 )
  {
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    sub_1C37058(&IClassBoardLockModel_TypeInfo);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine__Add__);
    byte_4C46987 = 1;
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
    v7 = 248;
  else
    v7 = 112;
  if ( isGrand )
    v8 = 256;
  else
    v8 = 120;
  if ( isGrand )
    v9 = 200;
  else
    v9 = 40;
  if ( !v6 )
    goto LABEL_239;
  v10 = *(__int64 **)(v6 + 24);
  v148 = v6;
  if ( !v10 )
    goto LABEL_239;
  v11 = *v10;
  v12 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v7);
  v13 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v8);
  v14 = *(UnityEngine_Transform_o **)((char *)&this->klass + v9);
  v15 = *(unsigned __int16 *)(*v10 + 302);
  if ( *(_WORD *)(*v10 + 302) )
  {
    v16 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v16 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v15;
      v16 += 4;
      if ( !v15 )
        goto LABEL_21;
    }
    v17 = v11 + 16LL * *v16 + 312;
  }
  else
  {
LABEL_21:
    v17 = sub_1C87870(v10, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v17)(v10, *(_QWORD *)(v17 + 8));
  if ( !v18 )
    sub_1C372B4(0);
  v19 = 0;
  v20 = 0;
  v151 = 0;
  v152 = 0;
  v149 = 0;
  v150 = 0;
  while ( 1 )
  {
    v21 = *(_QWORD *)v18;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_29;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_29:
      v24 = sub_1C87870(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v18, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v18;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_36;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_36:
      v28 = sub_1C87870(v18, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0);
    }
    v29 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v18, *(_QWORD *)(v28 + 8));
    v30 = sub_1C37194(v29, IClassBoardLockModel_TypeInfo);
    if ( v30 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( isGrand )
        v19 = this;
      else
        v20 = this;
      if ( isGrand )
      {
        if ( !resourceCatalog )
          sub_1C372B4(v30);
        v32 = resourceCatalog->klass;
        v33 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
        if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
        {
          p_offset = &v32->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v33;
            p_offset += 4;
            if ( !v33 )
              goto LABEL_48;
          }
          v35 = (__int64)&v32->vtable[*p_offset];
        }
        else
        {
LABEL_48:
          v35 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        v59 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v35)(
                resourceCatalog,
                *(_QWORD *)(v35 + 8));
        if ( !v59 )
          sub_1C372B4(0);
        v60 = (ClassBoardSquare_o **)(v59 + 64);
        v61 = v19;
      }
      else
      {
        if ( !resourceCatalog )
          sub_1C372B4(v30);
        v40 = resourceCatalog->klass;
        v41 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
        if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
        {
          v42 = &v40->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v42 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_60;
          }
          v43 = (__int64)&v40->vtable[*v42];
        }
        else
        {
LABEL_60:
          v43 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
        }
        v59 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v43)(
                resourceCatalog,
                *(_QWORD *)(v43 + 8));
        if ( !v59 )
          sub_1C372B4(0);
        v60 = (ClassBoardSquare_o **)(v59 + 32);
        v61 = v20;
      }
      if ( !v29 )
        sub_1C372B4(v59);
      v62 = v29->klass;
      v63 = *v60;
      v64 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        v65 = (IClassBoardSquareModel_c **)&v62->_1.interfaceOffsets->offset;
        while ( *(v65 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v64;
          v65 += 2;
          if ( !v64 )
            goto LABEL_98;
        }
        v66 = (__int64)&v62->vtable[*(_DWORD *)v65 + 10];
      }
      else
      {
LABEL_98:
        v66 = sub_1C87870(v29, IClassBoardSquareModel_TypeInfo, 10);
      }
      v67 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v66)(v29, *(_QWORD *)(v66 + 8));
      if ( !v61 )
        sub_1C372B4(v67);
    }
    else
    {
      if ( !v29 )
        sub_1C372B4(0);
      v36 = v29->klass;
      v37 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        v38 = (IClassBoardSquareModel_c **)&v36->_1.interfaceOffsets->offset;
        while ( *(v38 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v37;
          v38 += 2;
          if ( !v37 )
            goto LABEL_54;
        }
        v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 5];
      }
      else
      {
LABEL_54:
        v39 = sub_1C87870(v29, IClassBoardSquareModel_TypeInfo, 5);
      }
      v44 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v39)(v29, *(_QWORD *)(v39 + 8));
      if ( (v44 & 1) != 0 )
      {
        v45 = this->fields.resourceCatalog;
        if ( isGrand )
          v46 = v151;
        else
          v46 = this;
        v47 = v152;
        if ( isGrand )
          v47 = this;
        v151 = v46;
        v152 = v47;
        if ( isGrand )
        {
          if ( !v45 )
            sub_1C372B4(v44);
          v48 = v45->klass;
          v49 = *(unsigned __int16 *)&v45->klass->_2.rank;
          if ( *(_WORD *)&v45->klass->_2.rank )
          {
            v50 = &v48->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v50 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_74;
            }
            v51 = (__int64)&v48->vtable[*v50];
          }
          else
          {
LABEL_74:
            v51 = sub_1C87870(v45, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v77 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v51)(
                  v45,
                  *(_QWORD *)(v51 + 8));
          if ( !v77 )
            sub_1C372B4(0);
          v61 = v152;
          v78 = (ClassBoardSquare_o **)(v77 + 72);
        }
        else
        {
          if ( !v45 )
            sub_1C372B4(v44);
          v69 = v45->klass;
          v70 = *(unsigned __int16 *)&v45->klass->_2.rank;
          if ( *(_WORD *)&v45->klass->_2.rank )
          {
            v71 = &v69->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v71 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v70;
              v71 += 4;
              if ( !v70 )
                goto LABEL_107;
            }
            v72 = (__int64)&v69->vtable[*v71];
          }
          else
          {
LABEL_107:
            v72 = sub_1C87870(v45, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v81 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v72)(
                  v45,
                  *(_QWORD *)(v72 + 8));
          if ( !v81 )
            sub_1C372B4(0);
          v61 = v151;
          v78 = (ClassBoardSquare_o **)(v81 + 40);
        }
        v82 = v29->klass;
        v63 = *v78;
        v83 = *(unsigned __int16 *)&v29->klass->_2.rank;
        if ( *(_WORD *)&v29->klass->_2.rank )
        {
          v84 = (IClassBoardSquareModel_c **)&v82->_1.interfaceOffsets->offset;
          while ( *(v84 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v83;
            v84 += 2;
            if ( !v83 )
              goto LABEL_127;
          }
          v85 = (__int64)&v82->vtable[*(_DWORD *)v84 + 10];
        }
        else
        {
LABEL_127:
          v85 = sub_1C87870(v29, IClassBoardSquareModel_TypeInfo, 10);
        }
        v67 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v85)(v29, *(_QWORD *)(v85 + 8));
        if ( !v61 )
          sub_1C372B4(v67);
      }
      else
      {
        v52 = this->fields.resourceCatalog;
        if ( isGrand )
          v53 = v149;
        else
          v53 = this;
        v54 = v150;
        if ( isGrand )
          v54 = this;
        v149 = v53;
        v150 = v54;
        if ( isGrand )
        {
          if ( !v52 )
            sub_1C372B4(v44);
          v55 = v52->klass;
          v56 = *(unsigned __int16 *)&v52->klass->_2.rank;
          if ( *(_WORD *)&v52->klass->_2.rank )
          {
            v57 = &v55->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v57 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v56;
              v57 += 4;
              if ( !v56 )
                goto LABEL_86;
            }
            v58 = (__int64)&v55->vtable[*v57];
          }
          else
          {
LABEL_86:
            v58 = sub_1C87870(v52, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v79 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v58)(
                  v52,
                  *(_QWORD *)(v58 + 8));
          if ( !v79 )
            sub_1C372B4(0);
          v61 = v150;
          v80 = (ClassBoardSquare_o **)(v79 + 48);
        }
        else
        {
          if ( !v52 )
            sub_1C372B4(v44);
          v73 = v52->klass;
          v74 = *(unsigned __int16 *)&v52->klass->_2.rank;
          if ( *(_WORD *)&v52->klass->_2.rank )
          {
            v75 = &v73->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v75 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v74;
              v75 += 4;
              if ( !v74 )
                goto LABEL_113;
            }
            v76 = (__int64)&v73->vtable[*v75];
          }
          else
          {
LABEL_113:
            v76 = sub_1C87870(v52, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          v86 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v76)(
                  v52,
                  *(_QWORD *)(v76 + 8));
          if ( !v86 )
            sub_1C372B4(0);
          v61 = v149;
          v80 = (ClassBoardSquare_o **)(v86 + 16);
        }
        v87 = v29->klass;
        v63 = *v80;
        v88 = *(unsigned __int16 *)&v29->klass->_2.rank;
        if ( *(_WORD *)&v29->klass->_2.rank )
        {
          v89 = (IClassBoardSquareModel_c **)&v87->_1.interfaceOffsets->offset;
          while ( *(v89 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v88;
            v89 += 2;
            if ( !v88 )
              goto LABEL_138;
          }
          v90 = (__int64)&v87->vtable[*(_DWORD *)v89 + 10];
        }
        else
        {
LABEL_138:
          v90 = sub_1C87870(v29, IClassBoardSquareModel_TypeInfo, 10);
        }
        v67 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v90)(v29, *(_QWORD *)(v90 + 8));
        if ( !v61 )
          sub_1C372B4(v67);
      }
    }
    v91 = ClassBoardController__CloneSquareObject(v61, v63, v67, v14, isGrand, v68);
    v92 = (Il2CppObject *)v91;
    if ( !v91 )
      sub_1C372B4(0);
    ClassBoardSquare__Setup(v91, v29, 0);
    if ( !v12 )
      sub_1C372B4(v93);
    items = v12->fields._items;
    v97 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++v12->fields._version;
    if ( !items )
      sub_1C372B4(v93);
    size = v12->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        v92,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else
    {
      v99 = &items->obj.klass + size;
      v12->fields._size = size + 1;
      v99[4] = (Il2CppClass *)v92;
      sub_1C36FFC((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v92, v94, v95);
    }
  }
  v100 = *(_QWORD *)v18;
  v101 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
    {
      --v101;
      v102 += 4;
      if ( !v101 )
        goto LABEL_151;
    }
    v103 = v100 + 16LL * *v102 + 312;
  }
  else
  {
LABEL_151:
    v103 = sub_1C87870(v18, System_IDisposable_TypeInfo, 0);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v18, *(_QWORD *)(v103 + 8));
  v104 = *(__int64 **)(v148 + 16);
  if ( !v104 )
LABEL_239:
    sub_1C372B4(v6);
  v105 = *v104;
  v106 = *(unsigned __int16 *)(*v104 + 302);
  if ( *(_WORD *)(*v104 + 302) )
  {
    v107 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v107 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v106;
      v107 += 4;
      if ( !v106 )
        goto LABEL_158;
    }
    v108 = v105 + 16LL * *v107 + 312;
  }
  else
  {
LABEL_158:
    v108 = sub_1C87870(*(_QWORD *)(v148 + 16), System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, 0);
  }
  v109 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v108)(v104, *(_QWORD *)(v108 + 8));
  if ( !v109 )
    sub_1C372B4(0);
  v110 = 0;
  v111 = 0;
  while ( 1 )
  {
    v112 = *(_QWORD *)v109;
    v113 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
    {
      v114 = (int *)(*(_QWORD *)(v112 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v114 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v113;
        v114 += 4;
        if ( !v113 )
          goto LABEL_166;
      }
      v115 = v112 + 16LL * *v114 + 312;
    }
    else
    {
LABEL_166:
      v115 = sub_1C87870(v109, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v115)(v109, *(_QWORD *)(v115 + 8)) & 1) == 0 )
      break;
    v116 = *(_QWORD *)v109;
    v117 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
    {
      v118 = (int *)(*(_QWORD *)(v116 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v118 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v117;
        v118 += 4;
        if ( !v117 )
          goto LABEL_173;
      }
      v119 = v116 + 16LL * *v118 + 312;
    }
    else
    {
LABEL_173:
      v119 = sub_1C87870(v109, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0);
    }
    v120 = (*(__int64 (__fastcall **)(__int64, _QWORD))v119)(v109, *(_QWORD *)(v119 + 8));
    v121 = this->fields.resourceCatalog;
    v122 = (IClassBoardLineModel_o *)v120;
    if ( isGrand )
      v110 = this;
    else
      v111 = this;
    if ( isGrand )
    {
      if ( !v121 )
        sub_1C372B4(v120);
      v123 = v121->klass;
      v124 = *(unsigned __int16 *)&v121->klass->_2.rank;
      if ( *(_WORD *)&v121->klass->_2.rank )
      {
        v125 = &v123->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v125 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v124;
          v125 += 4;
          if ( !v124 )
            goto LABEL_184;
        }
        v126 = (__int64)&v123->vtable[*v125];
      }
      else
      {
LABEL_184:
        v126 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v131 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v126)(
               v121,
               *(_QWORD *)(v126 + 8));
      if ( !v131 )
        sub_1C372B4(0);
      v132 = (Il2CppObject **)(v131 + 56);
      v133 = (BaseMonoBehaviour_o *)v110;
    }
    else
    {
      if ( !v121 )
        sub_1C372B4(v120);
      v127 = v121->klass;
      v128 = *(unsigned __int16 *)&v121->klass->_2.rank;
      if ( *(_WORD *)&v121->klass->_2.rank )
      {
        v129 = &v127->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v129 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v128;
          v129 += 4;
          if ( !v128 )
            goto LABEL_190;
        }
        v130 = (__int64)&v127->vtable[*v129];
      }
      else
      {
LABEL_190:
        v130 = sub_1C87870(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      v134 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v130)(
               v121,
               *(_QWORD *)(v130 + 8));
      if ( !v134 )
        sub_1C372B4(0);
      v132 = (Il2CppObject **)(v134 + 24);
      v133 = (BaseMonoBehaviour_o *)v111;
    }
    if ( !v133 )
      sub_1C372B4(0);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v133,
                      *v132,
                      v14,
                      0,
                      (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v136 = Object_object;
    if ( !Object_object )
      sub_1C372B4(0);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v122, 0);
    if ( !v13 )
      sub_1C372B4(v137);
    v140 = v13->fields._items;
    v141 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++v13->fields._version;
    if ( !v140 )
      sub_1C372B4(v137);
    v142 = v13->fields._size;
    if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        v136,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
    }
    else
    {
      v143 = &v140->obj.klass + v142;
      v13->fields._size = v142 + 1;
      v143[4] = (Il2CppClass *)v136;
      sub_1C36FFC((CGThumbnailListItem_o *)(v143 + 4), (int32_t)v136, v138, v139);
    }
  }
  v144 = *(_QWORD *)v109;
  v145 = *(unsigned __int16 *)(*(_QWORD *)v109 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v109 + 302LL) )
  {
    v146 = (int *)(*(_QWORD *)(v144 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v146 - 1) != System_IDisposable_TypeInfo )
    {
      --v145;
      v146 += 4;
      if ( !v145 )
        goto LABEL_208;
    }
    v147 = v144 + 16LL * *v146 + 312;
  }
  else
  {
LABEL_208:
    v147 = sub_1C87870(v109, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v147)(v109, *(_QWORD *)(v147 + 8));
}


System_Collections_IEnumerator_o *ClassBoardController__DelayCheckGrandScoreTutorial(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C469A5 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController__DelayCheckGrandScoreTutorial_d__112_TypeInfo);
    byte_4C469A5 = 1;
  }
  v3 = sub_1C372A4(ClassBoardController__DelayCheckGrandScoreTutorial_d__112_TypeInfo);
  ClassBoardController__DelayCheckGrandScoreTutorial_d__112___ctor(
    (ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__DispGrandScoreAddClassDialog(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C469A0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_EndGrandBoardTransition__);
    byte_4C469A0 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardController_EndGrandBoardTransition__, 0);
  EventTutorialMaster__CheckTutorial(0, 105, v3, this->fields.grandBaseId, 0, 0, 0, 0);
}


void ClassBoardController__EndGrandBoardTransition(ClassBoardController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C469A1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C469A1 = 1;
  }
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)Instance, 0),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0),
        this->fields.isGrandScoreReleaseDialogOpen = 0,
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  MissionNotifyManager__CancelPause((MissionNotifyManager_o *)Instance, 0);
}


void ClassBoardController__EndPlayGrandReturnTransitionAnimation(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  const MethodInfo *v6; // x1
  ClassBoardController_c *klass; // x8
  System_Action_o *v8; // x20

  if ( (byte_4C469A4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__111_0__);
    byte_4C469A4 = 1;
  }
  ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, v2);
  ClassBoardController__RefreshUi(this, this->fields.baseId, v4);
  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( !GrandBoardRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0);
  GrandBoardRoot = (UnityEngine_GameObject_o *)this->fields.GrandBoardObjectsParent;
  if ( !GrandBoardRoot )
    goto LABEL_11;
  GrandBoardRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)GrandBoardRoot, 0);
  if ( !GrandBoardRoot )
    goto LABEL_11;
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
LABEL_11:
    sub_1C372B4(GrandBoardRoot);
  }
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)GrandBoardRoot, 0);
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__111_0__,
    0);
  EventTutorialMaster__CheckTutorial(0, 82, v8, 0, 0, 0, 0, 0);
}


void ClassBoardController__EndPlayGrandTransitionAnimation(ClassBoardController_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_IEnumerator_o *v4; // x0
  UnityEngine_Component_o *gameObject; // x0
  int32_t grandBaseId; // w8
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ClassBoardBaseEntity_o *v17; // x0
  ClassBoardBaseEntity_o *v18; // x22
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C4699E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__getEntityList__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C4699E = 1;
  }
  if ( !this->fields.isDirectlyGrandBoard )
  {
    if ( !this->fields.isPlayEffectToGrandBoard )
    {
LABEL_12:
      ClassBoardController__RefreshUi(this, this->fields.grandBaseId, v2);
      goto LABEL_13;
    }
LABEL_8:
    gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                              this,
                                              this->klass->vtable._4_get_classBoardUIController.method);
    if ( !gameObject )
      goto LABEL_51;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_51;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    MainMenuBar__setMenuActive(1, 0, 0);
    if ( this->fields.isDirectlyGrandBoard && !this->fields.isPlayEffectToGrandBoard )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( this->fields.isPlayEffectToGrandBoard )
  {
    if ( this->fields.baseId == 8 )
    {
      v4 = ClassBoardController__PlayExClassGrandScoreRelease(this, method);
LABEL_47:
      UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v4, 0);
      return;
    }
    goto LABEL_8;
  }
LABEL_13:
  grandBaseId = this->fields.grandBaseId;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 0;
  if ( grandBaseId != 10001 || EventTutorialMaster__IsTutorialAvailable(0, 100, 0, 0, 0, 0, 0) )
  {
LABEL_46:
    v4 = ClassBoardController__DelayCheckGrandScoreTutorial(this, method);
    goto LABEL_47;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  gameObject = (UnityEngine_Component_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !gameObject )
    goto LABEL_51;
  gameObject = (UnityEngine_Component_o *)gameObject[1].fields.m_CachedPtr;
  if ( !gameObject )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)gameObject,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ClassBoardBaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_24;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_24:
      v11 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8));
    if ( (v12 & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_31;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_31:
      v16 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ClassBoardBaseEntity__TypeInfo, 0);
    }
    v17 = (ClassBoardBaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                      Enumerator,
                                      *(_QWORD *)(v16 + 8));
    v18 = v17;
    if ( !v17 )
      sub_1C372B4(0);
    if ( ClassBoardBaseEntity__IsGrand(v17, 0) && v18->fields.id != 10001 && ClassBoardBaseEntity__IsOpen(v18, 0) )
      goto LABEL_39;
  }
  v12 = 0;
LABEL_39:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_43;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_43:
    v22 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  if ( (v12 & 1) != 0 )
    goto LABEL_46;
  gameObject = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method);
  if ( !gameObject )
LABEL_51:
    sub_1C372B4(gameObject);
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)gameObject, 0);
}


void ClassBoardController__EndPlayReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        const MethodInfo *method)
{
  __int64 v5; // x19
  MissionNotifyManager_o *IsNullOrEmpty; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 **v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  ClassBoardController_o *v12; // x23
  __int64 *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x9
  IClassBoardSquareModel_c **v16; // x10
  __int64 v17; // x0
  int32_t v18; // w21
  __int64 v19; // x20
  System_Action_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_object__o *v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Action_object__o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  ActionChain_o *v29; // x21
  __int64 v30; // x20
  System_Action_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  if ( (byte_4C46993 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__0__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__1__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__2__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__3__);
    sub_1C37058(&ClassBoardController___c__DisplayClass93_0_TypeInfo);
    byte_4C46993 = 1;
  }
  v5 = sub_1C372A4(ClassBoardController___c__DisplayClass93_0_TypeInfo);
  ClassBoardController___c__DisplayClass93_0___ctor((ClassBoardController___c__DisplayClass93_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_31;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = squareModel;
  v9 = (__int64 **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)squareModel, v10, v11);
  IsNullOrEmpty = (MissionNotifyManager_o *)BasicHelper__IsNullOrEmpty(
                                              (System_Collections_ICollection_o *)this->fields.squareViewList,
                                              0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    v12 = 0;
  else
    v12 = this;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    LOBYTE(IsNullOrEmpty) = 0;
    v12 = this;
  }
  else
  {
    v13 = *v9;
    if ( !*v9 )
      goto LABEL_31;
    v14 = *v13;
    v15 = *(unsigned __int16 *)(*v13 + 302);
    if ( *(_WORD *)(*v13 + 302) )
    {
      v16 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *(v16 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_14;
      }
      v17 = v14 + 16LL * (*(_DWORD *)v16 + 1) + 312;
    }
    else
    {
LABEL_14:
      v17 = sub_1C87870(*v9, IClassBoardSquareModel_TypeInfo, 1);
    }
    v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v17)(v13, *(_QWORD *)(v17 + 8));
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsNullOrEmpty = (MissionNotifyManager_o *)CondType__IsClassBoardSquareAllReleased(v18, 0);
    if ( !v12 )
      goto LABEL_31;
  }
  v12->fields.isPlayFullReleaseEffect = (unsigned __int8)IsNullOrEmpty & 1;
  if ( !this->fields.isPlayFullReleaseEffect )
  {
    IsNullOrEmpty = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !IsNullOrEmpty )
      goto LABEL_31;
    MissionNotifyManager__EndPause(IsNullOrEmpty, 0);
  }
  v19 = sub_1C37100(System_Action_Action____TypeInfo, 3);
  v20 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__0__,
    0);
  if ( !v19 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_32;
  *(_QWORD *)(v19 + 32) = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v20, v21, v22);
  v23 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__1__,
    0);
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_32;
  *(_QWORD *)(v19 + 40) = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 40), (int32_t)v23, v24, v25);
  v26 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__2__,
    0);
  if ( *(_DWORD *)(v19 + 24) <= 2u )
    goto LABEL_32;
  *(_QWORD *)(v19 + 48) = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 48), (int32_t)v26, v27, v28);
  v29 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
  ActionChain___ctor_49040972(v29, (System_Action_Action__array *)v19, 0);
  v30 = sub_1C37100(System_Action___TypeInfo, 1);
  v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass93_0__EndPlayReleaseEffect_b__3__,
    0);
  if ( !v30 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v30 + 24) )
LABEL_32:
    sub_1C372BC(IsNullOrEmpty);
  *(_QWORD *)(v30 + 32) = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)(v30 + 32), (int32_t)v31, v32, v33);
  if ( !v29
    || (IsNullOrEmpty = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                                    (ChainableActionBase_o *)v29,
                                                    (System_Action_array *)v30,
                                                    0)) == 0 )
  {
LABEL_31:
    sub_1C372B4(IsNullOrEmpty);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4C46992 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass92_0__FinishedClassBoardStartEffect_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass92_0_TypeInfo);
    byte_4C46992 = 1;
  }
  v5 = sub_1C372A4(ClassBoardController___c__DisplayClass92_0_TypeInfo);
  ClassBoardController___c__DisplayClass92_0___ctor((ClassBoardController___c__DisplayClass92_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8),
        *(_QWORD *)(v5 + 24) = callback,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v9, v10),
        (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method)) == 0)
    || (ClassBoardUIController__TouchEnable(v6, 0),
        (v6 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                            this,
                                            this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
LABEL_12:
    sub_1C372B4(v6);
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
  v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_ClassBoardController___c__DisplayClass92_0__FinishedClassBoardStartEffect_b__0__,
    0);
  v16 = ClassBoardController__ResetClassBoardCameraCoroutine(this, cameraResetSec, cameraResetEasingType, v14, v15);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v16, 0);
}


System_String_o *ClassBoardController__GetHeaderSpriteName(
        ClassBoardController_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C4698A & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_20634/*"img_txt_classscore_{0}"*/);
    byte_4C4698A = 1;
  }
  v11 = id;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4, v5, v6, v7);
  return System_String__Format((System_String_o *)StringLiteral_20634/*"img_txt_classscore_{0}"*/, v9, 0);
}


void ClassBoardController__HideGrandBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *GrandSquareViewList; // x0
  ClassBoardBackground_o *background; // x20
  SimpleAnimation_o *boardRootAnimation; // x21
  SimpleAnimation_o *grandBoardRootAnimation; // x22
  System_Action_o *v7; // x23
  const MethodInfo *v8; // x5
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4C469A3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_EndPlayGrandReturnTransitionAnimation__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_4C469A3 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.CurrentBoardType == 2 )
  {
    GrandSquareViewList = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                        this,
                                                        this->klass->vtable._4_get_classBoardUIController.method);
    if ( !GrandSquareViewList )
      goto LABEL_22;
    ClassBoardUIController__TouchDisable(GrandSquareViewList, 0);
    if ( this->fields.grandUserSvtIds )
    {
      GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandSquareViewList;
      if ( !GrandSquareViewList )
        goto LABEL_22;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v9,
        (System_Collections_Generic_List_object__o *)GrandSquareViewList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
      for ( i = v9;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
            i.fields._current->klass->vtable[8].methodPtr() )
      {
        if ( !i.fields._current )
          sub_1C372B4(0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
      GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandLineViewList;
      if ( !GrandSquareViewList )
        goto LABEL_22;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        (System_Collections_Generic_List_object__o *)GrandSquareViewList,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
      {
        if ( !v10.fields._current )
          sub_1C372B4(0);
        ClassBoardLine__PlayGrandToClassTransition((ClassBoardLine_o *)v10.fields._current, 0, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    }
    background = this->fields.background;
    boardRootAnimation = this->fields.boardRootAnimation;
    grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
    v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ClassBoardController_EndPlayGrandReturnTransitionAnimation__,
      0);
    if ( background )
    {
      ClassBoardBackground__PlayGrandReturnTransitionAnimation(
        background,
        boardRootAnimation,
        grandBoardRootAnimation,
        v7,
        0,
        v8);
      return;
    }
LABEL_22:
    sub_1C372B4(GrandSquareViewList);
  }
}


void ClassBoardController__HideGrandBoardObj(ClassBoardController_o *this, bool isDispButton, const MethodInfo *method)
{
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  UnityEngine_GameObject_o *GrandBoardUnderMask; // x0
  UnityEngine_Component_o *GrandBoardObjectsParent; // x0
  UnityEngine_GameObject_o *gameObject; // x0

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
    sub_1C372B4(gameObject);
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

  if ( (byte_4C469A8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C469A8 = 1;
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
    sub_1C372B4(0);
  return ClassBoardUIController__get_IsTouchEnable(v4, 0);
}


void ClassBoardController__OnClickClassBoardResetButton(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  ClassBoardUIController_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *Instance; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CommonUI_o *v10; // x20
  System_String_o *v11; // x21
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  CommonConfirmDialog_ClickDelegate_o *v14; // x24

  if ( (byte_4C469A7 & 1) == 0 )
  {
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass114_0__OnClickClassBoardResetButton_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass114_0_TypeInfo);
    sub_1C37058(&StringLiteral_113/*" "*/);
    sub_1C37058(&StringLiteral_13512/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_13513/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_13514/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DIALOG_MSG"*/);
    byte_4C469A7 = 1;
  }
  v3 = sub_1C372A4(ClassBoardController___c__DisplayClass114_0_TypeInfo);
  ClassBoardController___c__DisplayClass114_0___ctor((ClassBoardController___c__DisplayClass114_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_9;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  *(_QWORD *)(v3 + 16) = Instance;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Instance, v8, v9);
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v4 )
    goto LABEL_9;
  ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0);
  v10 = *(CommonUI_o **)(v3 + 16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_13514/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DIALOG_MSG"*/, 0);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_13513/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_DECIDE"*/, 0);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13512/*"TRANSITION_CLASS_BOARD_RESET_CONFIRM_CANCEL"*/, 0);
  v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v14,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass114_0__OnClickClassBoardResetButton_b__0__,
    0);
  if ( !v10 )
LABEL_9:
    sub_1C372B4(v4);
  CommonUI__OpenConfirmDialog_31207916(
    v10,
    (System_String_o *)StringLiteral_113/*" "*/,
    v11,
    v12,
    v13,
    0,
    v14,
    0,
    30,
    0.0,
    36.0,
    1,
    0,
    0);
}


void ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassStatisticsInfo_array *classStatisticsInfos; // x0
  __int64 v5; // x8
  int32_t v6; // w20
  Il2CppObject *Instance; // x21
  System_Action_o *v8; // x22

  if ( (byte_4C46984 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController__OnClickEffectList_b__76_0__);
    sub_1C37058(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46984 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v3, 0, 0) )
  {
    classStatisticsInfos = (ClassStatisticsInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !classStatisticsInfos )
      goto LABEL_19;
    if ( CommonUI__IsOpenClassBoardEffectListDialog((CommonUI_o *)classStatisticsInfos, 0) )
      return;
    v5 = this->fields.CurrentBoardType == 1 ? 144LL : 224LL;
    v6 = *(_DWORD *)((char *)&this->klass + v5);
    classStatisticsInfos = (ClassStatisticsInfo_array *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                          this,
                                                          this->klass->vtable._4_get_classBoardUIController.method);
    if ( !classStatisticsInfos )
      goto LABEL_19;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)classStatisticsInfos, 1, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__76_0__, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                               0);
    if ( !Instance )
LABEL_19:
      sub_1C372B4(classStatisticsInfos);
    CommonUI__OpenClassBoardEffectListDialog(
      (CommonUI_o *)Instance,
      0,
      v6,
      1,
      v8,
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
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  if ( (byte_4C46985 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_HideGrandBoard__);
    byte_4C46985 = 1;
  }
  if ( this->fields.CurrentBoardType == 1 )
  {
    v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardController_HideGrandBoard__, 0);
    ClassBoardController__SetOnClickBack(this, v3, v4);
    ClassBoardController__ShowGrandBoard(this, v5);
  }
  else
  {
    ClassBoardController__HideGrandBoard(this, method);
  }
}


void ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  int32_t CurrentBoardType; // w20
  System_Action_o *v6; // x0
  bool v7; // zf
  System_Action_o *v8; // x20
  int32_t v9; // w1
  bool v10; // w3
  System_Action_o *v11; // x2

  if ( (byte_4C46982 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController__OnClickHelp_b__74_0__);
    sub_1C37058(&Method_ClassBoardController__OnClickHelp_b__74_1__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46982 = 1;
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
      sub_1C372B4(0);
    ClassBoardUIController__SetCameraWorkBlock(v4, 1, 0);
    CurrentBoardType = this->fields.CurrentBoardType;
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    v7 = CurrentBoardType == 1;
    v8 = v6;
    if ( v7 )
    {
      System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__74_0__, 0);
      v9 = 82;
      v11 = v8;
      v10 = 0;
    }
    else
    {
      System_Action___ctor(v6, (Il2CppObject *)this, Method_ClassBoardController__OnClickHelp_b__74_1__, 0);
      v9 = 100;
      v10 = 1;
      v11 = v8;
    }
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, v9, v11, v10, 0);
  }
}


void ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v5; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C46986 & 1) == 0 )
  {
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
    byte_4C46986 = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_39ED760 *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
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
      v7 = sub_1C87870(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v7)(resourceCatalog, *(_QWORD *)(v7 + 8));
  }
}


void ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *Instance; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Transform_o *boardObjectsParent; // x0
  UnityEngine_Transform_o *v8; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v9; // x0
  ClassBoardController___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x21
  System_Func_object__bool__o *_9__89_0; // x22
  Il2CppObject *v13; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  ClassBoardController___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_object__int__o *_9__89_1; // x22
  Il2CppObject *v21; // x23
  struct ClassBoardController___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  ClassBoardController___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x22
  System_Func_object__bool__o *_9__89_2; // x23
  Il2CppObject *v30; // x24
  struct ClassBoardController___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  ClassBoardController___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_object__int__o *_9__89_3; // x23
  Il2CppObject *v38; // x24
  struct ClassBoardController___c_StaticFields *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x22
  System_Object_array *v44; // x0
  ClassBoardController___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Func_object__object__o *_9__89_4; // x23
  Il2CppObject *v48; // x24
  struct ClassBoardController___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v53; // x0
  System_Object_array *v54; // x0
  ClassBoardController___c_c *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  System_Func_object__object__o *_9__89_5; // x22
  Il2CppObject *v58; // x23
  CGThumbnailListItem_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v63; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v65; // x21
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4698F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_ClassBoardLock___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_ClassBoardLock___);
    sub_1C37058(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
    sub_1C37058(&System_Func_ClassBoardLock__int__TypeInfo);
    sub_1C37058(&System_Func_ClassBoardLock__bool__TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_0__);
    sub_1C37058(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_1__);
    sub_1C37058(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_2__);
    sub_1C37058(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_3__);
    sub_1C37058(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_4__);
    sub_1C37058(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_5__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass89_0__PlayClassBoardStartEffect_b__6__);
    sub_1C37058(&ClassBoardController___c__DisplayClass89_0_TypeInfo);
    sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C4698F = 1;
  }
  v3 = sub_1C372A4(ClassBoardController___c__DisplayClass89_0_TypeInfo);
  ClassBoardController___c__DisplayClass89_0___ctor((ClassBoardController___c__DisplayClass89_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_52;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  boardObjectsParent = this->fields.boardObjectsParent;
  v66.fields.x = 0.0;
  v66.fields.y = 0.0;
  v66.fields.z = 0.0;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 256;
  TransformHelper__SetLocalPosition(boardObjectsParent, v66, 0);
  v8 = this->fields.boardObjectsParent;
  if ( !byte_4C3C926 )
  {
    Instance = (Il2CppObject *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !v8 )
    goto LABEL_52;
  UnityEngine_Transform__set_localScale(v8, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0);
  Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                               this,
                               this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v9 = System_Linq_Enumerable__OfType_object_(
         (System_Collections_IEnumerable_o *)this->fields.squareViewList,
         (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v10 = ClassBoardController___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v9;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v10 = ClassBoardController___c_TypeInfo;
  }
  _9__89_0 = (System_Func_object__bool__o *)v10->static_fields->__9__89_0;
  if ( !_9__89_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ClassBoardController___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__89_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__89_0,
      v13,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_0__,
      0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__89_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__89_0, (int32_t)_9__89_0, v15, v16);
  }
  v17 = System_Linq_Enumerable__Where_object_(
          v11,
          (System_Func_TSource__bool__o *)_9__89_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v18 = ClassBoardController___c_TypeInfo;
  v19 = v17;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v18 = ClassBoardController___c_TypeInfo;
  }
  _9__89_1 = (System_Func_object__int__o *)v18->static_fields->__9__89_1;
  if ( !_9__89_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ClassBoardController___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__89_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_1,
      v21,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_1__,
      0);
    v22 = ClassBoardController___c_TypeInfo->static_fields;
    v22->__9__89_1 = (struct System_Func_ClassBoardLock__int__o *)_9__89_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v22->__9__89_1, (int32_t)_9__89_1, v23, v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TKey__o *)_9__89_1,
                                                               (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  v26 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.GrandSquareViewList,
          (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v27 = ClassBoardController___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v26;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v27 = ClassBoardController___c_TypeInfo;
  }
  _9__89_2 = (System_Func_object__bool__o *)v27->static_fields->__9__89_2;
  if ( !_9__89_2 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = ClassBoardController___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__89_2 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__89_2,
      v30,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_2__,
      0);
    v31 = ClassBoardController___c_TypeInfo->static_fields;
    v31->__9__89_2 = (struct System_Func_ClassBoardLock__bool__o *)_9__89_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v31->__9__89_2, (int32_t)_9__89_2, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_object_(
          v28,
          (System_Func_TSource__bool__o *)_9__89_2,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v35 = ClassBoardController___c_TypeInfo;
  v36 = v34;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v35 = ClassBoardController___c_TypeInfo;
  }
  _9__89_3 = (System_Func_object__int__o *)v35->static_fields->__9__89_3;
  if ( !_9__89_3 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ClassBoardController___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__89_3 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__89_3,
      v38,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_3__,
      0);
    v39 = ClassBoardController___c_TypeInfo->static_fields;
    v39->__9__89_3 = (struct System_Func_ClassBoardLock__int__o *)_9__89_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v39->__9__89_3, (int32_t)_9__89_3, v40, v41);
  }
  v42 = System_Linq_Enumerable__OrderBy_object__int_(
          v36,
          (System_Func_TSource__TKey__o *)_9__89_3,
          (const MethodInfo_31173AC *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v3 + 16) = 0;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v42;
  if ( System_Linq_Enumerable__Any_object_(
         v25,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v44 = System_Linq_Enumerable__ToArray_object_(
            v25,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v45 = ClassBoardController___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v45 = ClassBoardController___c_TypeInfo;
    }
    _9__89_4 = (System_Func_object__object__o *)v45->static_fields->__9__89_4;
    if ( !_9__89_4 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = ClassBoardController___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__89_4 = (System_Func_object__object__o *)sub_1C372A4(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__89_4,
        v48,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_4__,
        0);
      v49 = ClassBoardController___c_TypeInfo->static_fields;
      v49->__9__89_4 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__89_4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v49->__9__89_4, (int32_t)_9__89_4, v50, v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v46,
                                                                 (System_Func_TSource__TResult__o *)_9__89_4,
                                                                 (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v52,
                                                                                      (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v53, 0);
  }
  if ( System_Linq_Enumerable__Any_object_(
         v43,
         (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    v54 = System_Linq_Enumerable__ToArray_object_(
            v43,
            (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v55 = ClassBoardController___c_TypeInfo;
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)v54;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v55 = ClassBoardController___c_TypeInfo;
    }
    _9__89_5 = (System_Func_object__object__o *)v55->static_fields->__9__89_5;
    if ( !_9__89_5 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = ClassBoardController___c_TypeInfo;
      }
      v58 = (Il2CppObject *)v55->static_fields->__9;
      _9__89_5 = (System_Func_object__object__o *)sub_1C372A4(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__89_5,
        v58,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__89_5__,
        0);
      v59 = (CGThumbnailListItem_o *)ClassBoardController___c_TypeInfo->static_fields;
      v59[1].klass = (CGThumbnailListItem_c *)_9__89_5;
      sub_1C36FFC(v59 + 1, (int32_t)_9__89_5, v60, v61);
    }
    v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v56,
                                                                 (System_Func_TSource__TResult__o *)_9__89_5,
                                                                 (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v63 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v62,
                                                                                      (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v63, 0);
  }
  effectController = this->fields.effectController;
  v65 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v65,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass89_0__PlayClassBoardStartEffect_b__6__,
    0);
  if ( !effectController )
LABEL_52:
    sub_1C372B4(Instance);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v65, 0);
}


void ClassBoardController__PlayDirectlyGrandBoardOpenEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *Instance; // x0
  const MethodInfo *v4; // x2
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4C46990 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__90_0__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C46990 = 1;
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
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
    sub_1C372B4(Instance);
  }
  if ( this->fields.isDirectlyGrandBoard )
    ClassBoardController__RefreshUi(this, this->fields.grandBaseId, v4);
LABEL_12:
  this->fields.isFinishedClassScoreAnimation = 0;
  effectController = this->fields.effectController;
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)this,
    Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__90_0__,
    0);
  if ( !effectController )
    goto LABEL_14;
  ClassBoardEffectController__SkipClassBoardStartEffect(effectController, v6, 0);
  started = ClassBoardController__WaitFinishedClassBoardStartEffect(this, 0, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__PlayExClassGrandScoreRelease(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C469A2 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController__PlayExClassGrandScoreRelease_d__109_TypeInfo);
    byte_4C469A2 = 1;
  }
  v3 = sub_1C372A4(ClassBoardController__PlayExClassGrandScoreRelease_d__109_TypeInfo);
  ClassBoardController__PlayExClassGrandScoreRelease_d__109___ctor(
    (ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *ClassBoardRoot; // x22
  __int64 *v16; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  IClassBoardSquareModel_c **v19; // x10
  __int64 v20; // x0
  struct ClassBoardBackground_o *background; // x8
  float fullReleaseEffectCameraResetSec; // s8
  int32_t fullReleaseEffectCameraEasingType; // w21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x1

  if ( (byte_4C46996 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass96_0__PlayFullReleaseEffect_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass96_0_TypeInfo);
    byte_4C46996 = 1;
  }
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass96_0_TypeInfo);
  ClassBoardController___c__DisplayClass96_0___ctor((ClassBoardController___c__DisplayClass96_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = squareModel;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)squareModel, v9, v10);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v13, v14);
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
    || (ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)v8, 0), (v16 = *(__int64 **)(v7 + 16)) == 0) )
  {
LABEL_24:
    sub_1C372B4(v8);
  }
  v17 = *v16;
  v18 = *(unsigned __int16 *)(*v16 + 302);
  if ( *(_WORD *)(*v16 + 302) )
  {
    v19 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v17 + 176) + 8LL);
    while ( *(v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v18;
      v19 += 2;
      if ( !v18 )
        goto LABEL_16;
    }
    v20 = v17 + 16LL * (*(_DWORD *)v19 + 12) + 312;
  }
  else
  {
LABEL_16:
    v20 = sub_1C87870(*(_QWORD *)(v7 + 16), IClassBoardSquareModel_TypeInfo, 12);
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8));
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
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass96_0__PlayFullReleaseEffect_b__0__,
    0);
  v26 = ClassBoardController__ResetClassBoardCameraCoroutine(
          this,
          fullReleaseEffectCameraResetSec,
          fullReleaseEffectCameraEasingType,
          v24,
          v25);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v26, 0);
}


void ClassBoardController__PlayGrandExClassReleaseEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C4699F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_DispGrandScoreAddClassDialog__);
    byte_4C4699F = 1;
  }
  background = this->fields.background;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController_DispGrandScoreAddClassDialog__, 0);
  if ( !background )
    sub_1C372B4(v5);
  ClassBoardBackground__PlayStartGrandExClassReleaseEffectPlayer(background, v4, v6);
}


System_Collections_IEnumerator_o *ClassBoardController__PlayGrandSquareAndLine(
        ClassBoardController_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C4699D & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController__PlayGrandSquareAndLine_d__104_TypeInfo);
    byte_4C4699D = 1;
  }
  v5 = sub_1C372A4(ClassBoardController__PlayGrandSquareAndLine_d__104_TypeInfo);
  ClassBoardController__PlayGrandSquareAndLine_d__104___ctor(
    (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v7, v8);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v15; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v17; // x0
  int v18; // w0
  __int64 v19; // x8
  ClassBoardEffectController_o *v20; // x22
  float x; // s8
  float y; // s9
  float z; // s10
  float v24; // s11
  float v25; // s12
  float v26; // s13
  System_Action_o *v27; // x19
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46997 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass97_0__PlayMoveCamera_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass97_0_TypeInfo);
    byte_4C46997 = 1;
  }
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass97_0_TypeInfo);
  ClassBoardController___c__DisplayClass97_0___ctor((ClassBoardController___c__DisplayClass97_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_20;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v11, v12);
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
  v15 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      p_offset += 2;
      if ( !v15 )
        goto LABEL_12;
    }
    v17 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1];
  }
  else
  {
LABEL_12:
    v17 = sub_1C87870(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1);
  }
  v18 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v17)(
          SquareModel_k__BackingField,
          *(_QWORD *)(v17 + 8));
  v19 = 264;
  if ( v18 != this->fields.grandBaseId )
    v19 = 128;
  v20 = *(ClassBoardEffectController_o **)((char *)&this->klass + v19);
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
  v24 = localScale.fields.x;
  v25 = localScale.fields.y;
  v26 = localScale.fields.z;
  v27 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass97_0__PlayMoveCamera_b__0__,
    0);
  if ( !v20 )
LABEL_20:
    sub_1C372B4(transform);
  v30.fields.z = z * v26;
  v30.fields.y = y * v25;
  v30.fields.x = x * v24;
  ClassBoardEffectController__PlaySelectMoveCamera(v20, v30, v27, 0);
}


void ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x23
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardUIController_o *v15; // x22
  __int64 v16; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v18; // x0
  struct IClassBoardSquareModel_o *v19; // x22
  IClassBoardSquareModel_c *v20; // x8
  __int64 v21; // x9
  IClassBoardSquareModel_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  ClassBoardEffectController_o *v25; // x20
  System_Action_o *v26; // x22

  if ( (byte_4C4698E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass88_0__PlayReleaseEffect_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass88_0_TypeInfo);
    byte_4C4698E = 1;
  }
  v7 = sub_1C372A4(ClassBoardController___c__DisplayClass88_0_TypeInfo);
  ClassBoardController___c__DisplayClass88_0___ctor((ClassBoardController___c__DisplayClass88_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_28;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = endAct;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)endAct, v11, v12);
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
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
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
  v15 = (ClassBoardUIController_o *)Instance;
  v16 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_13;
    }
    v18 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_13:
    v18 = sub_1C87870(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12);
  }
  Instance = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v18)(
               SquareModel_k__BackingField,
               *(_QWORD *)(v18 + 8));
  if ( !v15 )
    goto LABEL_28;
  ClassBoardUIController__UpdateItemList(v15, Instance & 1, 0);
  v19 = square->fields._SquareModel_k__BackingField;
  if ( !v19 )
    goto LABEL_28;
  v20 = v19->klass;
  v21 = *(unsigned __int16 *)&v19->klass->_2.rank;
  if ( *(_WORD *)&v19->klass->_2.rank )
  {
    v22 = (IClassBoardSquareModel_c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_21;
    }
    v23 = (__int64)&v20->vtable[*(_DWORD *)v22 + 1];
  }
  else
  {
LABEL_21:
    v23 = sub_1C87870(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1);
  }
  v24 = (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) == this->fields.grandBaseId
      ? 264LL
      : 128LL;
  v25 = *(ClassBoardEffectController_o **)((char *)&this->klass + v24);
  v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass88_0__PlayReleaseEffect_b__0__,
    0);
  if ( !v25 )
LABEL_28:
    sub_1C372B4(Instance);
  ClassBoardEffectController__PlayRelease(v25, square, v26, 0);
}


void ClassBoardController__PlayTransitionAnimation(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  struct ClassBoardBackground_o *v4; // x8
  float *p_grandScoreSignEffectStartSecDirectly; // x8
  struct ClassBoardBackground_o *background; // x8
  float v7; // s8
  ClassBoardBackground_o *v8; // x20
  SimpleAnimation_o *boardRootAnimation; // x21
  SimpleAnimation_o *grandBoardRootAnimation; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x5
  bool v13; // w4
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_4C4699C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_EndPlayGrandTransitionAnimation__);
    byte_4C4699C = 1;
  }
  GrandBoardRoot = this->fields.GrandBoardRoot;
  this->fields.CurrentBoardType = 2;
  if ( !GrandBoardRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0);
  if ( this->fields.isDirectlyGrandBoard && !this->fields.isPlayEffectToGrandBoard )
  {
    background = this->fields.background;
    if ( !background )
      goto LABEL_17;
    p_grandScoreSignEffectStartSecDirectly = &background->fields.grandScoreSignEffectStartSecDirectly;
  }
  else
  {
    v4 = this->fields.background;
    if ( !v4 )
      goto LABEL_17;
    p_grandScoreSignEffectStartSecDirectly = &v4->fields.grandScoreSignEffectStartSec;
  }
  v7 = *p_grandScoreSignEffectStartSecDirectly;
  GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                 this,
                                                 this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !GrandBoardRoot
    || (ClassBoardFigureController__SetUIPanelAlpha((ClassBoardFigureController_o *)GrandBoardRoot, 0.0, 0),
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                        this,
                                                        this->klass->vtable._7_get_ClassBoardFigureController.method)) == 0) )
  {
LABEL_17:
    sub_1C372B4(GrandBoardRoot);
  }
  ClassBoardFigureController__ChangeDispServantFigure((ClassBoardFigureController_o *)GrandBoardRoot, 0, 0);
  v8 = this->fields.background;
  boardRootAnimation = this->fields.boardRootAnimation;
  grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardController_EndPlayGrandTransitionAnimation__, 0);
  if ( !this->fields.isDirectlyGrandBoard )
  {
    v13 = 0;
    if ( v8 )
      goto LABEL_15;
    goto LABEL_17;
  }
  v13 = !this->fields.isPlayEffectToGrandBoard;
  if ( !v8 )
    goto LABEL_17;
LABEL_15:
  ClassBoardBackground__PlayGrandTransitionAnimation(v8, boardRootAnimation, grandBoardRootAnimation, v11, v13, v12);
  v15 = ClassBoardController__PlayGrandSquareAndLine(this, v7, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v15, 0);
}


void ClassBoardController__RefreshUi(ClassBoardController_o *this, int32_t currentBaseId, const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  _BOOL8 IsGrand; // x0
  const MethodInfo *v7; // x2
  bool v8; // w20
  System_String_o *v9; // x21
  ClassBoardUIController_o *v10; // x22
  System_Collections_ICollection_o *grandUserSvtIds; // x0
  __int64 *v12; // x8
  System_String_o *v13; // x21
  ClassBoardUIController_o *v14; // x22
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x23
  Il2CppClass *klass; // x21
  ClassBoardUIController_o *v17; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C46999 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_6993/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/);
    sub_1C37058(&StringLiteral_6992/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/);
    sub_1C37058(&StringLiteral_20675/*"img_txt_grandscore"*/);
    sub_1C37058(&StringLiteral_3399/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    sub_1C37058(&StringLiteral_6991/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_4C46999 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_37;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    currentBaseId,
    (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_37;
  IsGrand = ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0);
  v8 = IsGrand;
  v9 = IsGrand
     ? (System_String_o *)StringLiteral_20675/*"img_txt_grandscore"*/
     : ClassBoardController__GetHeaderSpriteName((ClassBoardController_o *)IsGrand, currentBaseId, v7);
  v10 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !v10 )
    goto LABEL_37;
  ClassBoardUIController__SetHeaderTitle(v10, (AtlasManagerUnit_o *)Master_object, v9, 0);
  if ( !v8 )
    goto LABEL_40;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_6991/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/;
    goto LABEL_27;
  }
  grandUserSvtIds = (System_Collections_ICollection_o *)this->fields.grandUserSvtIds;
  if ( !grandUserSvtIds )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_6993/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/;
    goto LABEL_27;
  }
  if ( BasicHelper__IsNullOrEmpty(grandUserSvtIds, 0) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_6992/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/;
  }
  else
  {
LABEL_40:
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v12 = &StringLiteral_3399/*"CLASS_BOARD_HEADER_MESSAGE"*/;
  }
LABEL_27:
  v13 = LocalizationManager__Get((System_String_o *)*v12, 0);
  v14 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)this->fields.grandUserSvtIds,
                                                                  0);
  if ( !v14 )
    goto LABEL_37;
  ClassBoardUIController__SetHeaderMessage(
    v14,
    UiAtlasManagerUnit,
    v13,
    v8,
    ((unsigned __int8)Master_object & 1) == 0,
    0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_37;
  ClassBoardUIController__ActivateGrandScoreButton((ClassBoardUIController_o *)Master_object, !v8, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_37;
  ClassBoardUIController__ActivateClassBoardResetButton((ClassBoardUIController_o *)Master_object, !v8, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Master_object )
    goto LABEL_37;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)Master_object, v8, 0);
  if ( !entity )
    goto LABEL_37;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                  this,
                                                                  this->klass->vtable._4_get_classBoardUIController.method);
  if ( !entity
    || (klass = entity[4].klass,
        v17 = (ClassBoardUIController_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0),
        !v17) )
  {
LABEL_37:
    sub_1C372B4(Master_object);
  }
  ClassBoardUIController__SetItemList(v17, (System_Int32_array *)klass, (AtlasManagerUnit_o *)Master_object, v8, 0);
}


void ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v3; // x0
  UnityEngine_Transform_o *boardObjectsParent; // x20
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *v8; // x20
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  ClassBoardController___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_T__o *v11; // x20
  System_Action_object__o *_9__70_0; // x21
  Il2CppObject *v13; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v19; // w9
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  ClassBoardController___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_T__o *v22; // x20
  System_Action_object__o *_9__70_1; // x21
  Il2CppObject *v24; // x22
  struct ClassBoardController___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v29; // w2
  int v30; // w9
  System_Collections_Generic_IEnumerable_T__o *v31; // x0
  ClassBoardController___c_c *v32; // x8
  System_Collections_Generic_IEnumerable_T__o *v33; // x20
  System_Action_object__o *_9__70_2; // x21
  Il2CppObject *v35; // x22
  struct ClassBoardController___c_StaticFields *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x8
  int32_t v40; // w2
  int v41; // w9
  System_Collections_Generic_IEnumerable_T__o *v42; // x0
  ClassBoardController___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_T__o *v44; // x20
  System_Action_object__o *_9__70_3; // x21
  Il2CppObject *v46; // x22
  struct ClassBoardController___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x8
  int32_t v52; // w2
  int v53; // w9
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46980 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1C37058(&System_Action_ClassBoardLine__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_ClassBoardLine___);
    sub_1C37058(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
    sub_1C37058(&Method_BasicHelper_ForEach_ClassBoardLine___);
    sub_1C37058(&Method_BasicHelper_ForEach_ClassBoardSquare___);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__Release_b__70_0__);
    sub_1C37058(&Method_ClassBoardController___c__Release_b__70_1__);
    sub_1C37058(&Method_ClassBoardController___c__Release_b__70_2__);
    sub_1C37058(&Method_ClassBoardController___c__Release_b__70_3__);
    sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C46980 = 1;
  }
  v58.fields.x = 0.0;
  v58.fields.y = 0.0;
  v58.fields.z = 0.0;
  TransformHelper__SetLocalPosition(this->fields.boardObjectsParent, v58, 0);
  boardObjectsParent = this->fields.boardObjectsParent;
  if ( !byte_4C3C926 )
  {
    v3 = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  if ( !boardObjectsParent )
    goto LABEL_59;
  UnityEngine_Transform__set_localScale(boardObjectsParent, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                 this,
                                 this->klass->vtable._4_get_classBoardUIController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method);
    if ( !v3 )
      goto LABEL_59;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
  v7 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                 this,
                                 this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    v3 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                      this,
                                      this->klass->vtable._7_get_ClassBoardFigureController.method);
    if ( !v3 )
      goto LABEL_59;
    v8 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v3, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v8, 0);
  }
  v9 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
         (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v10 = ClassBoardController___c_TypeInfo;
  v11 = v9;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v10 = ClassBoardController___c_TypeInfo;
  }
  _9__70_0 = (System_Action_object__o *)v10->static_fields->__9__70_0;
  if ( !_9__70_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ClassBoardController___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__70_0 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__70_0, v13, Method_ClassBoardController___c__Release_b__70_0__, 0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Action_ClassBoardSquare__o *)_9__70_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__70_0, (int32_t)_9__70_0, v15, v16);
  }
  BasicHelper__ForEach_object_(
    v11,
    (System_Action_T__o *)_9__70_0,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_59;
  size = squareViewList->fields._size;
  v19 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v19;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0);
  v20 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v21 = ClassBoardController___c_TypeInfo;
  v22 = v20;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v21 = ClassBoardController___c_TypeInfo;
  }
  _9__70_1 = (System_Action_object__o *)v21->static_fields->__9__70_1;
  if ( !_9__70_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = ClassBoardController___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__70_1 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__70_1, v24, Method_ClassBoardController___c__Release_b__70_1__, 0);
    v25 = ClassBoardController___c_TypeInfo->static_fields;
    v25->__9__70_1 = (struct System_Action_ClassBoardLine__o *)_9__70_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v25->__9__70_1, (int32_t)_9__70_1, v26, v27);
  }
  BasicHelper__ForEach_object_(
    v22,
    (System_Action_T__o *)_9__70_1,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_59;
  v29 = lineViewList->fields._size;
  v30 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v29, 0);
  v31 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandSquareViewList,
          (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v32 = ClassBoardController___c_TypeInfo;
  v33 = v31;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v32 = ClassBoardController___c_TypeInfo;
  }
  _9__70_2 = (System_Action_object__o *)v32->static_fields->__9__70_2;
  if ( !_9__70_2 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = ClassBoardController___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__70_2 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__70_2, v35, Method_ClassBoardController___c__Release_b__70_2__, 0);
    v36 = ClassBoardController___c_TypeInfo->static_fields;
    v36->__9__70_2 = (struct System_Action_ClassBoardSquare__o *)_9__70_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v36->__9__70_2, (int32_t)_9__70_2, v37, v38);
  }
  BasicHelper__ForEach_object_(
    v33,
    (System_Action_T__o *)_9__70_2,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  GrandSquareViewList = this->fields.GrandSquareViewList;
  if ( !GrandSquareViewList )
    goto LABEL_59;
  v40 = GrandSquareViewList->fields._size;
  v41 = GrandSquareViewList->fields._version + 1;
  GrandSquareViewList->fields._size = 0;
  GrandSquareViewList->fields._version = v41;
  if ( v40 >= 1 )
    System_Array__Clear((System_Array_o *)GrandSquareViewList->fields._items, 0, v40, 0);
  v42 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandLineViewList,
          (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v43 = ClassBoardController___c_TypeInfo;
  v44 = v42;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v43 = ClassBoardController___c_TypeInfo;
  }
  _9__70_3 = (System_Action_object__o *)v43->static_fields->__9__70_3;
  if ( !_9__70_3 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = ClassBoardController___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__70_3 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__70_3, v46, Method_ClassBoardController___c__Release_b__70_3__, 0);
    v47 = ClassBoardController___c_TypeInfo->static_fields;
    v47->__9__70_3 = (struct System_Action_ClassBoardLine__o *)_9__70_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v47->__9__70_3, (int32_t)_9__70_3, v48, v49);
  }
  BasicHelper__ForEach_object_(
    v44,
    (System_Action_T__o *)_9__70_3,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_ClassBoardLine___);
  GrandLineViewList = this->fields.GrandLineViewList;
  if ( !GrandLineViewList )
    goto LABEL_59;
  v52 = GrandLineViewList->fields._size;
  v53 = GrandLineViewList->fields._version + 1;
  GrandLineViewList->fields._size = 0;
  GrandLineViewList->fields._version = v53;
  if ( v52 >= 1 )
    System_Array__Clear((System_Array_o *)GrandLineViewList->fields._items, 0, v52, 0);
  this->fields.effectController = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectController, 0, v52, v50);
  this->fields.GrandEffectController = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.GrandEffectController, 0, v54, v55);
  this->fields.background = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.background, 0, v56, v57);
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
    sub_1C372B4(v3);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C4699B & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController__ResetClassBoardCameraCoroutine_d__102_TypeInfo);
    byte_4C4699B = 1;
  }
  v9 = sub_1C372A4(ClassBoardController__ResetClassBoardCameraCoroutine_d__102_TypeInfo);
  ClassBoardController__ResetClassBoardCameraCoroutine_d__102___ctor(
    (ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v11, v12);
  *(float *)(v9 + 40) = sec;
  *(_DWORD *)(v9 + 44) = easingType;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v13, v14);
  return (System_Collections_IEnumerator_o *)v9;
}


void ClassBoardController__SetDirectlyBackAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.directlyBackAction = action;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.directlyBackAction, (int32_t)action, (int32_t)method, v3);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C46981 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46981 = 1;
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
      sub_1C372B4(0);
    *(_QWORD *)(v6 + 136) = action;
    sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 136), (int32_t)action, v7, v8);
  }
}


void ClassBoardController__SetOnClickToGrandServantList(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C46983 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46983 = 1;
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
    *(_QWORD *)(v6 + 184) = action;
    sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 184), (int32_t)action, v7, v8);
  }
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                 this,
                                 this->klass->vtable._7_get_ClassBoardFigureController.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v9, 0, 0) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
           this,
           this->klass->vtable._7_get_ClassBoardFigureController.method);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 160) = action;
      sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 160), (int32_t)action, v10, v11);
      return;
    }
LABEL_14:
    sub_1C372B4(v6);
  }
}


void ClassBoardController__SetToClassBoardSelectAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.toClassBoardSelectAction = action;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.toClassBoardSelectAction, (int32_t)action, (int32_t)method, v3);
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
  const MethodInfo *v17; // x3
  Il2CppObject *Component_object; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  MapCamera_o *mapCamera; // x0
  const MethodInfo *v22; // x2
  UnityEngine_Texture_o *targetTexture; // x24
  const MethodInfo_38CD368 *v24; // x2
  MapCamera_o *v25; // x24
  BalanceConfig_c *v26; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  System_Nullable_float__o p_size; // x0
  float ClassBoard2DCameraDefaultSize; // s0
  System_Nullable_float__o v30; // x3
  System_Action_o *v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  struct UnityEngine_GameObject_o *boardRoot; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x2
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x23
  MapCamera_o *v43; // x24
  ClassBoardEffectController_o *v44; // x25
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x2
  ClassBoardController_c *klass; // x8
  System_Nullable_Vector3__o v49; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_Vector3__o v51; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isDirectlyMoveGrandBoard;
  v15 = isPlayEffectGrandBoard;
  if ( (byte_4C4697D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_ShowBoard__);
    sub_1C37058(&ClassBoardEffectController_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ClassBoardRootComponent___);
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&StringLiteral_12925/*"Sony SO-41B"*/);
    byte_4C4697D = 1;
  }
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (int32_t)classBoardBackground,
    *(const MethodInfo **)&baseId);
  this->fields.background = classBoardBackground;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.background, (int32_t)classBoardBackground, v16, v17);
  this->fields.isPlayFullReleaseEffect = 0;
  this->fields.isDirectlyGrandBoard = v14;
  this->fields.CurrentBoardType = 1;
  this->fields.isPlayEffectToGrandBoard = v15;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ClassBoardRootComponent___);
  this->fields.classBoardRootComponent = (struct ClassBoardRootComponent_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.classBoardRootComponent, (int32_t)Component_object, v19, v20);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_24;
  MapCamera__Init(mapCamera, 0);
  if ( !classBoardBackground )
    goto LABEL_24;
  ClassBoardBackground__ChangeCamera(classBoardBackground, classBoardBackground->fields.classBoardViewCamera, v22);
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
  mapCamera = (MapCamera_o *)System_String__Equals_63596960(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12925/*"Sony SO-41B"*/,
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
  v25 = this->fields.mapCamera;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v51.fields.hasValue = &v49;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v49.fields.hasValue = 0;
  *(_QWORD *)&v49.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v51, zeroVector, v24);
  v26 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  static_fields = v26->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  if ( !v25 )
    goto LABEL_24;
  v30 = size;
  MapCamera__StartAutoWork(v25, 0.0, v49, v30, 0, 0, 0);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0);
  v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0);
  classBoardBackground->fields.showBoardCallback = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&classBoardBackground->fields.showBoardCallback, (int32_t)v31, v32, v33);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, v34);
  ClassBoardBackground__SetBoardParentAnimation(
    classBoardBackground,
    this->fields.boardParentAnimation,
    this->fields.isPlayEffectToGrandBoard,
    v35);
  boardRoot = this->fields.boardRoot;
  classBoardBackground->fields.boardRoot = boardRoot;
  sub_1C36FFC((CGThumbnailListItem_o *)&classBoardBackground->fields.boardRoot, (int32_t)boardRoot, v37, v38);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._6_get_builder.methodPtr)(
                               this,
                               this->klass->vtable._6_get_builder.method);
  if ( !mapCamera )
LABEL_24:
    sub_1C372B4(mapCamera);
  ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0);
  ClassBoardController__CreateViews(this, 0, v39);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, const MethodInfo *))this->klass->vtable._11_SetupSquareOnClickListener.methodPtr)(
    this,
    0,
    this->klass->vtable._11_SetupSquareOnClickListener.method);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, const MethodInfo *))this->klass->vtable._10_SetupClassBoardUIController.methodPtr)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._10_SetupClassBoardUIController.method);
  ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, v40);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v43 = this->fields.mapCamera;
  v44 = (ClassBoardEffectController_o *)sub_1C372A4(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v44,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v43,
    classBoardBackground,
    0);
  this->fields.effectController = v44;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effectController, (int32_t)v44, v45, v46);
  ClassBoardController__SetupGrandClassBoard(this, classBoardBackground, v47);
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
  const MethodInfo *v12; // x3
  bool IsNullOrEmpty; // w21
  ClassBoardController_o *v14; // x20

  v2 = this;
  if ( (byte_4C469A6 & 1) == 0 )
  {
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
    this = (ClassBoardController_o *)sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    byte_4C469A6 = 1;
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
    v7 = sub_1C87870(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
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
                    (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.squareViewList, (int32_t)v2, v11, v12);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v2->fields.grandUserSvtIds, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v2->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                     v2,
                                     v2->klass->vtable._7_get_ClassBoardFigureController.method);
  v14 = this;
  if ( IsNullOrEmpty )
  {
    this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( v14 )
    {
      ClassBoardFigureController__SetServantSelectSprite(
        (ClassBoardFigureController_o *)v14,
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
    sub_1C372B4(this);
  }
  if ( !this )
    goto LABEL_19;
  ClassBoardFigureController__SetSvtFigure((ClassBoardFigureController_o *)this, v2->fields.grandUserSvtIds, 0);
}


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
  CGThumbnailListItem_o *v11; // x21
  System_Action_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x21
  System_Action_o *v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  System_Action_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x21
  System_Action_o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  ClassBoardUIController_o *v27; // x21
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x22
  const MethodInfo *v29; // x2
  ClassBoardUIController_o *v30; // x20
  AtlasManagerUnit_o *v31; // x21
  Il2CppClass *v32; // x20
  ClassBoardController_o *v33; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4C46989 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
    sub_1C37058(&Method_ClassBoardController_OnClickClassBoardResetButton__);
    sub_1C37058(&Method_ClassBoardController_OnClickEffectList__);
    sub_1C37058(&Method_ClassBoardController_OnClickGrandScoreButton__);
    sub_1C37058(&Method_ClassBoardController_OnClickHelp__);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    this = (ClassBoardController_o *)sub_1C37058(&StringLiteral_3399/*"CLASS_BOARD_HEADER_MESSAGE"*/);
    byte_4C46989 = 1;
  }
  entity = 0;
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_31;
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
    v9 = sub_1C87870(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v9)(
                                     resourceCatalog,
                                     *(_QWORD *)(v9 + 8));
  if ( !this )
    goto LABEL_31;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v4,
                    (Il2CppObject *)this->fields.lineViewList,
                    v4->fields.uiRoot,
                    0,
                    (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, const MethodInfo *))v4->klass->vtable._5_set_classBoardUIController.methodPtr)(
    v4,
    Object_object,
    v4->klass->vtable._5_set_classBoardUIController.method);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_31;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0);
  v11 = (CGThumbnailListItem_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                   v4,
                                   v4->klass->vtable._4_get_classBoardUIController.method);
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0);
  if ( !v11 )
    goto LABEL_31;
  v11[1].klass = (CGThumbnailListItem_c *)v12;
  sub_1C36FFC(v11 + 1, (int32_t)v12, v13, v14);
  v15 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0);
  if ( !v15 )
    goto LABEL_31;
  *(_QWORD *)(v15 + 152) = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 152), (int32_t)v16, v17, v18);
  v19 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v4, Method_ClassBoardController_OnClickGrandScoreButton__, 0);
  if ( !v19 )
    goto LABEL_31;
  *(_QWORD *)(v19 + 160) = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 160), (int32_t)v20, v21, v22);
  v23 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
          v4,
          v4->klass->vtable._4_get_classBoardUIController.method);
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v4, Method_ClassBoardController_OnClickClassBoardResetButton__, 0);
  if ( !v23 )
    goto LABEL_31;
  *(_QWORD *)(v23 + 168) = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 168), (int32_t)v24, v25, v26);
  v27 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      v4,
                                      v4->klass->vtable._4_get_classBoardUIController.method);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  this = (ClassBoardController_o *)ClassBoardController__GetHeaderSpriteName(
                                     (ClassBoardController_o *)UiAtlasManagerUnit,
                                     baseId,
                                     v29);
  if ( !v27 )
    goto LABEL_31;
  ClassBoardUIController__SetHeaderTitle(v27, UiAtlasManagerUnit, (System_String_o *)this, 0);
  v30 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      v4,
                                      v4->klass->vtable._4_get_classBoardUIController.method);
  v31 = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3399/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0);
  if ( !v30 )
    goto LABEL_31;
  ClassBoardUIController__SetHeaderMessage(v30, v31, (System_String_o *)this, 0, 0, 0);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !this )
    goto LABEL_31;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_31;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_33A10EC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_31;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))v4->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     v4,
                                     v4->klass->vtable._4_get_classBoardUIController.method);
  if ( !entity
    || (v32 = entity[4].klass,
        v33 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0),
        !v33) )
  {
LABEL_31:
    sub_1C372B4(this);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v33,
    (System_Int32_array *)v32,
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
  const MethodInfo *v6; // x2
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x21
  ClassBoardController_c *klass; // x9
  __int64 v9; // x0
  int32_t grandBaseId; // w22
  ClassBoardUIController_o *v11; // x23
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x23
  MapCamera_o *mapCamera; // x24
  ClassBoardEffectController_o *v19; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C4697E & 1) == 0 )
  {
    sub_1C37058(&ClassBoardEffectController_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C4697E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_14;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(Master_object, this->fields.baseId, 0);
  if ( GrandClassBoardBaseEntity )
  {
    klass = this->klass;
    this->fields.grandBaseId = GrandClassBoardBaseEntity->fields.id;
    v9 = ((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))klass->vtable._4_get_classBoardUIController.methodPtr)(
           this,
           klass->vtable._4_get_classBoardUIController.method);
    grandBaseId = this->fields.grandBaseId;
    v11 = (ClassBoardUIController_o *)v9;
    Master_object = (ClassBoardBaseMaster_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0);
    if ( v11 )
    {
      ClassBoardUIController__SetGrandScoreButton(v11, grandBaseId, (AtlasManagerUnit_o *)Master_object, 0);
      if ( !ClassBoardBaseEntity__IsOpen(GrandClassBoardBaseEntity, 0) )
      {
        LOBYTE(GrandClassBoardBaseEntity) = 1;
        goto LABEL_13;
      }
      Master_object = (ClassBoardBaseMaster_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._9_get_GrandBuilder.methodPtr)(
                                                  this,
                                                  this->klass->vtable._9_get_GrandBuilder.method);
      if ( Master_object )
      {
        ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)Master_object, this->fields.grandBaseId, 0);
        ClassBoardController__CreateViews(this, 1, v12);
        ClassBoardController__SetupGrandUserSvt(this, v13);
        ClassBoardController__SetupClassBoardFigureController(this, v14);
        if ( classBoardBackground )
        {
          ClassBoardBackground__SetGrandClassIcon(
            classBoardBackground,
            this->fields.grandBaseId,
            GrandClassBoardBaseEntity->fields.iconId,
            v15);
          LOBYTE(GrandClassBoardBaseEntity) = 1;
          ((void (__fastcall *)(ClassBoardController_o *, __int64, const MethodInfo *))this->klass->vtable._11_SetupSquareOnClickListener.methodPtr)(
            this,
            1,
            this->klass->vtable._11_SetupSquareOnClickListener.method);
          GrandSquareViewList = this->fields.GrandSquareViewList;
          GrandLineViewList = this->fields.GrandLineViewList;
          mapCamera = this->fields.mapCamera;
          v19 = (ClassBoardEffectController_o *)sub_1C372A4(ClassBoardEffectController_TypeInfo);
          ClassBoardEffectController___ctor(
            v19,
            (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)GrandSquareViewList,
            (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)GrandLineViewList,
            mapCamera,
            classBoardBackground,
            0);
          this->fields.GrandEffectController = v19;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.GrandEffectController, (int32_t)v19, v20, v21);
          goto LABEL_13;
        }
      }
    }
LABEL_14:
    sub_1C372B4(Master_object);
  }
LABEL_13:
  ClassBoardController__HideGrandBoardObj(this, (bool)GrandClassBoardBaseEntity, v6);
}


void ClassBoardController__SetupGrandUserSvt(ClassBoardController_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_grandUserSvtIds; // x19
  void *Master_object; // x0
  int v7; // w8
  void *v8; // x21
  __int64 v9; // x8
  UserServantGrandEntity_o *EntityFromGrandGraphId; // x0
  UserServantGrandEntity_o *v11; // x20
  System_Collections_Generic_List_long__o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int64_t v15; // x1
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x25
  __int64 v20; // x22
  UserServantGrandEntity_o *v21; // x22
  System_Collections_Generic_List_long__o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int64_t userSvtId; // x1
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  System_Collections_Generic_List_long__o *v29; // x22
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C4697F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C37058(&System_Collections_Generic_List_long__TypeInfo);
    byte_4C4697F = 1;
  }
  this->fields.grandUserSvtIds = 0;
  p_grandUserSvtIds = (CGThumbnailListItem_o *)&this->fields.grandUserSvtIds;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.grandUserSvtIds, 0, v2, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = GrandGraphMaster__GetEntitiesByParentClassBoardBaseId(
                    (GrandGraphMaster_o *)Master_object,
                    this->fields.baseId,
                    0);
  if ( !Master_object )
    return;
  v7 = *((_DWORD *)Master_object + 6);
  v8 = Master_object;
  if ( v7 != 1 )
  {
    if ( v7 < 1 )
      return;
    v19 = 0;
    while ( (unsigned int)v19 < v7 )
    {
      v20 = *((_QWORD *)v8 + v19 + 4);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
      if ( !v20 || !Master_object )
        goto LABEL_44;
      Master_object = UserServantGrandMaster__GetEntityFromGrandGraphId(
                        (UserServantGrandMaster_o *)Master_object,
                        *(_DWORD *)(v20 + 16),
                        0);
      if ( Master_object )
      {
        v21 = (UserServantGrandEntity_o *)Master_object;
        if ( UserServantGrandEntity__IsMatchClassBoard(
               (UserServantGrandEntity_o *)Master_object,
               this->fields.baseId,
               0) )
        {
          Master_object = p_grandUserSvtIds->klass;
          if ( !p_grandUserSvtIds->klass )
          {
            v22 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
            System_Collections_Generic_List_long____ctor(
              v22,
              (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
            p_grandUserSvtIds->klass = (CGThumbnailListItem_c *)v22;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.grandUserSvtIds, (int32_t)v22, v23, v24);
            Master_object = p_grandUserSvtIds->klass;
            if ( !p_grandUserSvtIds->klass )
              goto LABEL_44;
          }
          userSvtId = v21->fields.userSvtId;
          v26 = *((_QWORD *)Master_object + 2);
          v27 = Method_System_Collections_Generic_List_long__Add__;
          ++*((_DWORD *)Master_object + 7);
          if ( !v26 )
            goto LABEL_44;
          v28 = *((int *)Master_object + 6);
          if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              userSvtId,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v28 + 1;
            *(_QWORD *)(v26 + 8 * v28 + 32) = userSvtId;
          }
        }
        else
        {
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
          if ( !Master_object )
            goto LABEL_44;
          Master_object = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                            (ClassBoardBaseMaster_o *)Master_object,
                            this->fields.baseId,
                            0);
          if ( !Master_object )
            goto LABEL_44;
          Master_object = (void *)UserServantGrandEntity__ContainsClassBoardBaseId(
                                    v21,
                                    *((_DWORD *)Master_object + 4),
                                    0);
          if ( ((unsigned __int8)Master_object & 1) != 0 && !p_grandUserSvtIds->klass )
          {
            v29 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
            System_Collections_Generic_List_long____ctor(
              v29,
              (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
            p_grandUserSvtIds->klass = (CGThumbnailListItem_c *)v29;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.grandUserSvtIds, (int32_t)v29, v30, v31);
          }
        }
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v19 >= v7 )
        return;
    }
LABEL_45:
    sub_1C372BC(Master_object);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !*((_DWORD *)v8 + 6) )
    goto LABEL_45;
  v9 = *((_QWORD *)v8 + 4);
  if ( !v9 || !Master_object )
    goto LABEL_44;
  EntityFromGrandGraphId = UserServantGrandMaster__GetEntityFromGrandGraphId(
                             (UserServantGrandMaster_o *)Master_object,
                             *(_DWORD *)(v9 + 16),
                             0);
  if ( EntityFromGrandGraphId )
  {
    v11 = EntityFromGrandGraphId;
    v12 = (System_Collections_Generic_List_long__o *)sub_1C372A4(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v12,
      (const MethodInfo_378A804 *)Method_System_Collections_Generic_List_long___ctor__);
    p_grandUserSvtIds->klass = (CGThumbnailListItem_c *)v12;
    sub_1C36FFC(p_grandUserSvtIds, (int32_t)v12, v13, v14);
    v15 = v11->fields.userSvtId;
    if ( v15 >= 1 )
    {
      Master_object = p_grandUserSvtIds->klass;
      if ( p_grandUserSvtIds->klass )
      {
        v16 = *((_QWORD *)Master_object + 2);
        v17 = Method_System_Collections_Generic_List_long__Add__;
        ++*((_DWORD *)Master_object + 7);
        if ( v16 )
        {
          v18 = *((int *)Master_object + 6);
          if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
          {
            System_Collections_Generic_List_long___AddWithResize(
              (System_Collections_Generic_List_long__o *)Master_object,
              v15,
              *(const MethodInfo_378B058 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            *((_DWORD *)Master_object + 6) = v18 + 1;
            *(_QWORD *)(v16 + 8 * v18 + 32) = v15;
          }
          return;
        }
      }
LABEL_44:
      sub_1C372B4(Master_object);
    }
  }
}


void ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_Collections_Generic_List_object__o *v6; // x0
  Il2CppObject *current; // x20
  System_Action_object__o *v8; // x0
  System_Action_ClassBoardSquare__o *v9; // x21
  __int64 v10; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C4698B & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_4C4698B = 1;
  }
  v5 = 112;
  memset(&v11, 0, sizeof(v11));
  if ( isGrand )
    v5 = 248;
  v6 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v5);
  if ( !v6 )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    v6,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v11.fields._current;
    v8 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSquare__TypeInfo);
    if ( !this )
      sub_1C372B4(v8);
    v9 = (System_Action_ClassBoardSquare__o *)v8;
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._12_SetupSquareOnClickListener.method,
      0);
    if ( !current )
      sub_1C372B4(v10);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, v9, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
}


void ClassBoardController__SetupSquareOnClickListener_47889748(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x9
  IClassBoardSquareModel_c **v15; // x10
  __int64 v16; // x0
  _QWORD *v17; // x8
  __int64 naturalAligment; // x11
  __int64 *v19; // x22
  __int64 v20; // x8
  __int64 v21; // x9
  IClassBoardSquareModel_c **v22; // x10
  __int64 v23; // x0
  __int64 *v24; // x22
  __int64 v25; // x8
  __int64 v26; // x9
  IClassBoardSquareModel_c **v27; // x10
  __int64 v28; // x0
  __int64 *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x9
  IClassBoardSquareModel_c **v32; // x10
  __int64 v33; // x0
  char v34; // w0
  const MethodInfo *v35; // x3
  ClassBoardSquare_o *v36; // x21
  System_Action_o *v37; // x22
  const MethodInfo *v38; // x3

  if ( (byte_4C4698C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&ClassBoardLock_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__1__);
    sub_1C37058(&ClassBoardController___c__DisplayClass86_0_TypeInfo);
    byte_4C4698C = 1;
  }
  v5 = sub_1C372A4(ClassBoardController___c__DisplayClass86_0_TypeInfo);
  ClassBoardController___c__DisplayClass86_0___ctor((ClassBoardController___c__DisplayClass86_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_50;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 32) = square;
  v9 = (__int64 *)(v5 + 32);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)square, v10, v11);
  if ( !*(_QWORD *)(v5 + 32) )
    goto LABEL_50;
  v12 = *(__int64 **)(*(_QWORD *)(v5 + 32) + 184LL);
  if ( !v12 )
    goto LABEL_50;
  v13 = *v12;
  v14 = *(unsigned __int16 *)(*v12 + 302);
  if ( *(_WORD *)(*v12 + 302) )
  {
    v15 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v13 + 176) + 8LL);
    while ( *(v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_10;
    }
    v16 = v13 + 16LL * (*(_DWORD *)v15 + 15) + 312;
  }
  else
  {
LABEL_10:
    v16 = sub_1C87870(v12, IClassBoardSquareModel_TypeInfo, 15);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v12, 0, *(_QWORD *)(v16 + 8));
  *(_DWORD *)(v5 + 16) = v6;
  if ( (v6 & 1) != 0 )
  {
    v17 = (_QWORD *)*v9;
    if ( *v9 )
    {
      naturalAligment = ClassBoardLock_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*v17 + 304LL) >= (unsigned int)naturalAligment
        && *(ClassBoardLock_c **)(*(_QWORD *)(*v17 + 200LL) + 8 * naturalAligment - 8) == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v17 = (_QWORD *)*v9;
  }
  if ( !v17 )
    goto LABEL_50;
LABEL_19:
  v19 = (__int64 *)v17[23];
  if ( !v19 )
    goto LABEL_50;
  v20 = *v19;
  v21 = *(unsigned __int16 *)(*v19 + 302);
  if ( *(_WORD *)(*v19 + 302) )
  {
    v22 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *(v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_24;
    }
    v23 = v20 + 16LL * (*(_DWORD *)v22 + 5) + 312;
  }
  else
  {
LABEL_24:
    v23 = sub_1C87870(v19, IClassBoardSquareModel_TypeInfo, 5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8));
  if ( (v6 & 1) == 0 )
  {
    if ( *v9 )
    {
      v24 = *(__int64 **)(*v9 + 184);
      if ( v24 )
      {
        v25 = *v24;
        v26 = *(unsigned __int16 *)(*v24 + 302);
        if ( *(_WORD *)(*v24 + 302) )
        {
          v27 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v25 + 176) + 8LL);
          while ( *(v27 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v26;
            v27 += 2;
            if ( !v26 )
              goto LABEL_34;
          }
          v28 = v25 + 16LL * (*(_DWORD *)v27 + 12) + 312;
        }
        else
        {
LABEL_34:
          v28 = sub_1C87870(v24, IClassBoardSquareModel_TypeInfo, 12);
        }
        if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) != 0
          && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.grandUserSvtIds, 0) )
        {
          return;
        }
        v6 = *v9;
        if ( *v9 )
        {
          ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)v6, 1, 0);
          if ( *v9 )
          {
            v29 = *(__int64 **)(*v9 + 184);
            if ( v29 )
            {
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
                    goto LABEL_45;
                }
                v33 = v30 + 16LL * (*(_DWORD *)v32 + 12) + 312;
              }
              else
              {
LABEL_45:
                v33 = sub_1C87870(v29, IClassBoardSquareModel_TypeInfo, 12);
              }
              v34 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8));
              v36 = (ClassBoardSquare_o *)*v9;
              if ( (v34 & 1) != 0 )
              {
                ClassBoardController__CallbackSquareOnClick(this, v36, *(_DWORD *)(v5 + 16), v35);
              }
              else
              {
                v37 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                System_Action___ctor(
                  v37,
                  (Il2CppObject *)v5,
                  Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__1__,
                  0);
                ClassBoardController__PlayMoveCamera(this, v36, v37, v38);
              }
              return;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1C372B4(v6);
  }
}


void ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


System_Collections_IEnumerator_o *ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C46998 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController__ShowBoardCoroutine_d__99_TypeInfo);
    byte_4C46998 = 1;
  }
  v3 = sub_1C372A4(ClassBoardController__ShowBoardCoroutine_d__99_TypeInfo);
  ClassBoardController__ShowBoardCoroutine_d__99___ctor((ClassBoardController__ShowBoardCoroutine_d__99_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void ClassBoardController__ShowGrandBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *Instance; // x0
  MapCamera_o *mapCamera; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  const MethodInfo *v9; // x1
  const MethodInfo_38CD368 *v10; // x2
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w20
  MapCamera_o *v14; // x21
  BalanceConfig_c *v15; // x0
  struct BalanceConfig_StaticFields *v16; // x8
  System_Nullable_float__o p_size; // x0
  float ClassBoard2DCameraDefaultSize; // s0
  System_Nullable_float__o v19; // x3
  System_Nullable_float__o size; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v21; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v22; // 0:x0.16
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4699A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C4699A = 1;
  }
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_24;
  ClassBoardUIController__SetCameraWorkBlock(Instance, 1, 0);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_classBoardUIController.method);
  if ( !Instance )
    goto LABEL_24;
  ClassBoardUIController__TouchDisable(Instance, 0);
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  mapCamera = this->fields.mapCamera;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  Instance = (ClassBoardUIController_o *)BalanceConfig_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !mapCamera )
    goto LABEL_24;
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  Instance = (ClassBoardUIController_o *)MapCamera__IsMatchPosAndZoomSize(
                                           mapCamera,
                                           v23,
                                           BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize,
                                           0);
  if ( ((unsigned __int8)Instance & 1) == 0 )
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
    v14 = this->fields.mapCamera;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    *(_QWORD *)&v22.fields.hasValue = &v21;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v22.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v21.fields.hasValue = 0;
    *(_QWORD *)&v21.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v22, zeroVector, v10);
    v15 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v15 = BalanceConfig_TypeInfo;
    }
    v16 = v15->static_fields;
    p_size = (System_Nullable_float__o)&size;
    ClassBoard2DCameraDefaultSize = v16->ClassBoard2DCameraDefaultSize;
    size = 0;
    System_Nullable_float____ctor(
      p_size,
      ClassBoard2DCameraDefaultSize,
      (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    if ( v14 )
    {
      v19 = size;
      MapCamera__StartAutoWork(v14, cameraResetSec, v21, v19, cameraResetEasingType, 0, 0);
      goto LABEL_23;
    }
LABEL_24:
    sub_1C372B4(Instance);
  }
LABEL_23:
  ClassBoardController__PlayTransitionAnimation(this, v9);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C46991 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_TypeInfo);
    byte_4C46991 = 1;
  }
  v5 = sub_1C372A4(ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_TypeInfo);
  ClassBoardController__WaitFinishedClassBoardStartEffect_d__91___ctor(
    (ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void ClassBoardController___EndPlayGrandReturnTransitionAnimation_b__111_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C372B4(0);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___OnClickEffectList_b__76_0(ClassBoardController_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C469AB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C469AB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0, 0),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                      this,
                                      this->klass->vtable._4_get_classBoardUIController.method)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0);
}


void ClassBoardController___OnClickHelp_b__74_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C372B4(0);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___OnClickHelp_b__74_1(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C372B4(0);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0);
}


void ClassBoardController___PlayDirectlyGrandBoardOpenEffect_b__90_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x0
  struct ClassBoardBackground_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  background = this->fields.background;
  if ( !background
    || (ClassBoardBackground__CallAnimationEventBoardParent(background, method), (v4 = this->fields.background) == 0) )
  {
    sub_1C372B4(background);
  }
  ActionExtensions__Call(v4->fields.showBoardCallback, 0);
  v4->fields.showBoardCallback = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.showBoardCallback, 0, v5, v6);
  this->fields.isFinishedClassScoreAnimation = 1;
}


void ClassBoardController___ShowBoardCoroutine_b__99_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                     this,
                                     this->klass->vtable._4_get_classBoardUIController.method);
  if ( !v2 )
    sub_1C372B4(0);
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
  const MethodInfo *v3; // x3

  this->fields._ClassBoardFigureController_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ClassBoardFigureController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ClassBoardController__set_classBoardUIController(
        ClassBoardController_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void ClassBoardController__DelayCheckGrandScoreTutorial_d__112___ctor(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__DelayCheckGrandScoreTutorial_d__112__MoveNext(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x22
  Il2CppObject *v5; // x21
  struct ClassBoardController___c__DisplayClass112_0_o **p__8__1; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ClassBoardController___c__DisplayClass112_0_o *IsTutorialAvailable; // x0
  struct ClassBoardController_o *v12; // x1
  struct ClassBoardController___c__DisplayClass112_0_o *v13; // x21
  struct ClassBoardController___c__DisplayClass112_0_o *_8__1; // x20
  struct ClassBoardBackground_o *background; // x8
  float grandScoreDialogViewDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  bool result; // w0
  System_Action_o *v22; // x19

  if ( (byte_4C46A89 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass112_0__DelayCheckGrandScoreTutorial_b__0__);
    sub_1C37058(&ClassBoardController___c__DisplayClass112_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C46A89 = 1;
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
    v5 = (Il2CppObject *)sub_1C372A4(ClassBoardController___c__DisplayClass112_0_TypeInfo);
    System_Object___ctor(v5, 0);
    this->fields.__8__1 = (struct ClassBoardController___c__DisplayClass112_0_o *)v5;
    p__8__1 = &this->fields.__8__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v5, v7, v8);
    IsTutorialAvailable = this->fields.__8__1;
    if ( !IsTutorialAvailable )
      goto LABEL_17;
    v12 = this->fields.__4__this;
    IsTutorialAvailable->fields.__4__this = v12;
    sub_1C36FFC((CGThumbnailListItem_o *)&IsTutorialAvailable->fields, (int32_t)v12, v9, v10);
    v13 = *p__8__1;
    IsTutorialAvailable = (struct ClassBoardController___c__DisplayClass112_0_o *)EventTutorialMaster__IsTutorialAvailable(
                                                                                    0,
                                                                                    100,
                                                                                    0,
                                                                                    0,
                                                                                    0,
                                                                                    0,
                                                                                    0);
    if ( !v13 )
      goto LABEL_17;
    v13->fields.isGrandScoreTutorialAvailable = (unsigned __int8)IsTutorialAvailable & 1;
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
          v17 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
          UnityEngine_WaitForSeconds___ctor(v17, grandScoreDialogViewDelayTime, 0);
          this->fields.__2__current = (Il2CppObject *)v17;
          p__2__current = &this->fields.__2__current;
          sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v17, v19, v20);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_17:
        sub_1C372B4(IsTutorialAvailable);
      }
    }
  }
  v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)_8__1,
    Method_ClassBoardController___c__DisplayClass112_0__DelayCheckGrandScoreTutorial_b__0__,
    0);
  if ( !_4__this )
    goto LABEL_17;
  EventTutorialMaster__CheckTutorial(0, 100, v22, _4__this->fields.grandBaseId, 0, 0, 0, 0);
  return 0;
}


Il2CppObject *ClassBoardController__DelayCheckGrandScoreTutorial_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__DelayCheckGrandScoreTutorial_d__112__System_Collections_IEnumerator_Reset(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardController__DelayCheckGrandScoreTutorial_d__112_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardController__DelayCheckGrandScoreTutorial_d__112__System_Collections_IEnumerator_get_Current(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__DelayCheckGrandScoreTutorial_d__112__System_IDisposable_Dispose(
        ClassBoardController__DelayCheckGrandScoreTutorial_d__112_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__PlayExClassGrandScoreRelease_d__109___ctor(
        ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__PlayExClassGrandScoreRelease_d__109__MoveNext(
        ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *v2; // x19
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x8
  struct ClassBoardBackground_o *background; // x8
  float GrandScoreExReleaseEffectDelayTime; // s8
  UnityEngine_WaitForSeconds_o *v7; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0
  SceneJumpInfo_o *v12; // x19

  v2 = this;
  if ( (byte_4C46A8A & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46A8A = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    v12 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
    SceneJumpInfo___ctor_41479180(v12, (System_String_o *)StringLiteral_1/*""*/, 9, 1, 0);
    this = (ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_11;
    AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 91, 1, (Il2CppObject *)v12, 0);
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
        v7 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v7, GrandScoreExReleaseEffectDelayTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)v7, v9, v10);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
LABEL_11:
    sub_1C372B4(this);
  }
  return 0;
}


Il2CppObject *ClassBoardController__PlayExClassGrandScoreRelease_d__109__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__PlayExClassGrandScoreRelease_d__109__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardController__PlayExClassGrandScoreRelease_d__109_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardController__PlayExClassGrandScoreRelease_d__109__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__PlayExClassGrandScoreRelease_d__109__System_IDisposable_Dispose(
        ClassBoardController__PlayExClassGrandScoreRelease_d__109_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__PlayGrandSquareAndLine_d__104___ctor(
        ClassBoardController__PlayGrandSquareAndLine_d__104_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__PlayGrandSquareAndLine_d__104__MoveNext(
        ClassBoardController__PlayGrandSquareAndLine_d__104_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayGrandSquareAndLine_d__104_o *v2; // x20
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x19
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v6; // x19
  CGThumbnailListItem_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *p__2__current; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4C46A8B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C46A8B = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v17, 0, sizeof(v17));
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
      this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)_4__this->fields.GrandBoardObjectsParent;
      if ( !this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
      if ( !this )
        goto LABEL_35;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
LABEL_14:
      this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)_4__this->fields.GrandBoardObjectsParent;
      if ( !this )
        goto LABEL_35;
      this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
      if ( !this )
        goto LABEL_35;
      if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
      {
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C36FFC(p__2__current, 0, v11, v12);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
        return result;
      }
      if ( !ClassBoardController__IsNeverSetGrandServant(_4__this, 0) )
      {
        this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)_4__this->fields.GrandSquareViewList;
        if ( !this )
          goto LABEL_35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v16,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
        for ( i = v16;
              System_Collections_Generic_List_Enumerator_object___MoveNext(
                &i,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
              i.fields._current->klass->vtable[7].methodPtr() )
        {
          if ( !i.fields._current )
            sub_1C372B4(0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &i,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
        this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)_4__this->fields.GrandLineViewList;
        if ( !this )
          goto LABEL_35;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v17,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v17,
                  (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
        {
          if ( !v17.fields._current )
            sub_1C372B4(0);
          ClassBoardLine__PlayTransition((ClassBoardLine_o *)v17.fields._current, 0, v14);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v17,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
      }
      this = (ClassBoardController__PlayGrandSquareAndLine_d__104_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._7_get_ClassBoardFigureController.methodPtr)(
                                                                        _4__this,
                                                                        _4__this->klass->vtable._7_get_ClassBoardFigureController.method);
      if ( this )
      {
        ClassBoardFigureController__StartSwitchServantCoroutine((ClassBoardFigureController_o *)this, v15);
        return 0;
      }
LABEL_35:
      sub_1C372B4(this);
    case 0:
      waitTime = v2->fields.waitTime;
      v2->fields.__1__state = -1;
      if ( waitTime > 0.0 )
      {
        v6 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v6, waitTime, 0);
        v2->fields.__2__current = (Il2CppObject *)v6;
        v7 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C36FFC(v7, (int32_t)v6, v8, v9);
        result = 1;
        LODWORD(v7[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_9;
  }
  return 0;
}


Il2CppObject *ClassBoardController__PlayGrandSquareAndLine_d__104__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__104_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__PlayGrandSquareAndLine_d__104__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayGrandSquareAndLine_d__104_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardController__PlayGrandSquareAndLine_d__104_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardController__PlayGrandSquareAndLine_d__104__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__104_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__PlayGrandSquareAndLine_d__104__System_IDisposable_Dispose(
        ClassBoardController__PlayGrandSquareAndLine_d__104_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__ResetClassBoardCameraCoroutine_d__102___ctor(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__ResetClassBoardCameraCoroutine_d__102__MoveNext(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  const MethodInfo_38CD368 *v2; // x2
  ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *v3; // x19
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
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Nullable_float__o size; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector3__o v18; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_Vector3__o v19; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4C46A8C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *)sub_1C37058(&Method_System_Nullable_float___ctor__);
    byte_4C46A8C = 1;
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
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    *(_QWORD *)&v19.fields.hasValue = &v18;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v19.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v18.fields.hasValue = 0;
    *(_QWORD *)&v18.fields.value.fields.y = 0;
    System_Nullable_Vector3____ctor(v19, zeroVector, v2);
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
      (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    if ( !mapCamera )
LABEL_18:
      sub_1C372B4(this);
    v12 = size;
    MapCamera__StartAutoWork(mapCamera, sec, v18, v12, v3->fields.easingType, 0, 0);
  }
  this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *)_4__this->fields.mapCamera;
  if ( !this )
    goto LABEL_18;
  if ( MapCamera__IsAutoWork((MapCamera_o *)this, 0) )
  {
    v3->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1C36FFC(p__2__current, 0, v13, v14);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  ActionExtensions__Call(v3->fields.callback, 0);
  return 0;
}


Il2CppObject *ClassBoardController__ResetClassBoardCameraCoroutine_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__ResetClassBoardCameraCoroutine_d__102__System_Collections_IEnumerator_Reset(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardController__ResetClassBoardCameraCoroutine_d__102_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardController__ResetClassBoardCameraCoroutine_d__102__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__ResetClassBoardCameraCoroutine_d__102__System_IDisposable_Dispose(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__102_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__ShowBoardCoroutine_d__99___ctor(
        ClassBoardController__ShowBoardCoroutine_d__99_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__ShowBoardCoroutine_d__99__MoveNext(
        ClassBoardController__ShowBoardCoroutine_d__99_o *this,
        const MethodInfo *method)
{
  ClassBoardController__ShowBoardCoroutine_d__99_o *v2; // x20
  struct ClassBoardController_o *_4__this; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p__2__current; // x20
  bool result; // w0
  const MethodInfo *v8; // x2
  System_Action_o *v9; // x20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4C46A8D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController__ShowBoardCoroutine_b__99_0__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    this = (ClassBoardController__ShowBoardCoroutine_d__99_o *)sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    byte_4C46A8D = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v11, 0, sizeof(v11));
  if ( v2->fields.__1__state < 2u )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__99_o *)_4__this->fields.boardObjectsParent;
    if ( !this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__99_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0);
    if ( !this )
      goto LABEL_26;
    if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0) )
    {
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C36FFC(p__2__current, 0, v4, v5);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    this = (ClassBoardController__ShowBoardCoroutine_d__99_o *)_4__this->fields.squareViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v10;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          i.fields._current->klass->vtable[7].methodPtr() )
    {
      if ( !i.fields._current )
        sub_1C372B4(0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__99_o *)_4__this->fields.lineViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_1C372B4(0);
      ClassBoardLine__PlayTransition((ClassBoardLine_o *)v11.fields._current, _4__this->fields.isDirectlyGrandBoard, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__99_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                                 _4__this,
                                                                 _4__this->klass->vtable._4_get_classBoardUIController.method);
    if ( !this )
LABEL_26:
      sub_1C372B4(this);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    if ( !_4__this->fields.isDirectlyGrandBoard )
    {
      v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)_4__this, Method_ClassBoardController__ShowBoardCoroutine_b__99_0__, 0);
      EventTutorialMaster__CheckTutorial(0, 82, v9, 0, 0, 0, 0, 0);
    }
  }
  return 0;
}


Il2CppObject *ClassBoardController__ShowBoardCoroutine_d__99__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ShowBoardCoroutine_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__ShowBoardCoroutine_d__99__System_Collections_IEnumerator_Reset(
        ClassBoardController__ShowBoardCoroutine_d__99_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardController__ShowBoardCoroutine_d__99_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardController__ShowBoardCoroutine_d__99__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ShowBoardCoroutine_d__99_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__ShowBoardCoroutine_d__99__System_IDisposable_Dispose(
        ClassBoardController__ShowBoardCoroutine_d__99_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController__WaitFinishedClassBoardStartEffect_d__91___ctor(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ClassBoardController__WaitFinishedClassBoardStartEffect_d__91__MoveNext(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct ClassBoardController_o *_4__this; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C372B4(0);
  if ( _4__this->fields.isFinishedClassScoreAnimation )
  {
    ClassBoardController__FinishedClassBoardStartEffect(_4__this, this->fields.callback, 0);
    return 0;
  }
  this->fields.__2__current = 0;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *ClassBoardController__WaitFinishedClassBoardStartEffect_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ClassBoardController__WaitFinishedClassBoardStartEffect_d__91__System_Collections_IEnumerator_Reset(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ClassBoardController__WaitFinishedClassBoardStartEffect_d__91__System_Collections_IEnumerator_get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ClassBoardController__WaitFinishedClassBoardStartEffect_d__91__System_IDisposable_Dispose(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46A6B & 1) == 0 )
  {
    sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C46A6B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardController___c___ctor(ClassBoardController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c___CallbackSquareOnClick_b__87_3(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___CallbackSquareOnClick_b__87_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool ClassBoardController___c___CheckOpenMissionClearDialogSave_b__94_0(
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

  if ( (byte_4C46A74 & 1) == 0 )
  {
    sub_1C37058(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46A74 = 1;
  }
  v25 = 0;
  v24 = 0;
  if ( !x )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(x, IClassBoardLockModel_TypeInfo, 0);
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
    v13 = sub_1C87870(x, IClassBoardSquareModel_TypeInfo, 15);
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
    v17 = sub_1C87870(x, IClassBoardSquareModel_TypeInfo, 15);
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
      v21 = sub_1C87870(x, IClassBoardLockModel_TypeInfo, 1);
    }
    v22 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v21)(x, *(_QWORD *)(v21 + 8)) ^ 1;
  }
  return v22 & 1;
}


int32_t ClassBoardController___c___CheckOpenMissionClearDialogSave_b__94_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C46A75 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46A75 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
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
    v7 = sub_1C87870(x, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v7)(x, *(_QWORD *)(v7 + 8));
}


bool ClassBoardController___c___PlayClassBoardStartEffect_b__89_0(
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

  if ( (byte_4C46A70 & 1) == 0 )
  {
    sub_1C37058(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46A70 = 1;
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
    v8 = sub_1C87870(this, IClassBoardLockModel_TypeInfo, 0);
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
    v16 = sub_1C87870(this, IClassBoardSquareModel_TypeInfo, 15);
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
    v22 = sub_1C87870(this, IClassBoardSquareModel_TypeInfo, 15);
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
    sub_1C372B4(this);
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
    v28 = sub_1C87870(this, IClassBoardLockModel_TypeInfo, 1);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8)) ^ 1;
  return v29 & 1;
}


int32_t ClassBoardController___c___PlayClassBoardStartEffect_b__89_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4C46A71 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46A71 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x)) == 0 )
    sub_1C372B4(this);
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
    v8 = sub_1C87870(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


bool ClassBoardController___c___PlayClassBoardStartEffect_b__89_2(
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

  if ( (byte_4C46A72 & 1) == 0 )
  {
    sub_1C37058(&IClassBoardLockModel_TypeInfo);
    this = (ClassBoardController___c_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46A72 = 1;
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
    v8 = sub_1C87870(this, IClassBoardLockModel_TypeInfo, 0);
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
    v16 = sub_1C87870(this, IClassBoardSquareModel_TypeInfo, 15);
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
    v22 = sub_1C87870(this, IClassBoardSquareModel_TypeInfo, 15);
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
    sub_1C372B4(this);
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
    v28 = sub_1C87870(this, IClassBoardLockModel_TypeInfo, 1);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8)) ^ 1;
  return v29 & 1;
}


int32_t ClassBoardController___c___PlayClassBoardStartEffect_b__89_3(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4C46A73 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46A73 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, (const MethodInfo *)x)) == 0 )
    sub_1C372B4(this);
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
    v8 = sub_1C87870(this, IClassBoardSquareModel_TypeInfo, 0);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *ClassBoardController___c___PlayClassBoardStartEffect_b__89_4(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
}


IClassBoardLockModel_o *ClassBoardController___c___PlayClassBoardStartEffect_b__89_5(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ClassBoardLock__get_LockModel(x, (const MethodInfo *)x);
}


void ClassBoardController___c___PlayReleaseEffect_b__88_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__88_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  x->fields.isUpdateLine = 1;
}


void ClassBoardController___c___PlayReleaseEffect_b__88_3(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0);
}


void ClassBoardController___c___PlayReleaseEffect_b__88_4(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  x->fields.isUpdateLine = 1;
}


void ClassBoardController___c___Release_b__70_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C46A6C & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A6C = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C46A6D & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A6D = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_2(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C46A6E & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A6E = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void ClassBoardController___c___Release_b__70_3(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C46A6F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A6F = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void ClassBoardController___c___SetupSquareOnClickListener_b__86_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c___SetupSquareOnClickListener_b__86_7(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void ClassBoardController___c__DisplayClass112_0___ctor(
        ClassBoardController___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass112_0___DelayCheckGrandScoreTutorial_b__0(
        ClassBoardController___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *_4__this; // x19
  _BOOL4 isGrandScoreTutorialAvailable; // w22
  System_Action_o *v5; // x20
  __int64 v6; // x0

  if ( (byte_4C46A76 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_PlayGrandExClassReleaseEffect__);
    byte_4C46A76 = 1;
  }
  _4__this = (Il2CppObject *)this->fields.__4__this;
  isGrandScoreTutorialAvailable = this->fields.isGrandScoreTutorialAvailable;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, _4__this, Method_ClassBoardController_PlayGrandExClassReleaseEffect__, 0);
  if ( !_4__this )
    sub_1C372B4(v6);
  ClassBoardController__CheckUMedalCreateEventTutorial(
    (ClassBoardController_o *)_4__this,
    isGrandScoreTutorialAvailable,
    v5,
    0);
}


void ClassBoardController___c__DisplayClass114_0___ctor(
        ClassBoardController___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass114_0___OnClickClassBoardResetButton_b__0(
        ClassBoardController___c__DisplayClass114_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *commonUI; // x20
  ClassBoardUIController_o *_4__this; // x0
  float v7; // s8
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C46A77 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass114_0__OnClickClassBoardResetButton_b__1__);
    byte_4C46A77 = 1;
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
    v7 = *(float *)&_4__this->fields.onClickToGrandServantList->klass;
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass114_0__OnClickClassBoardResetButton_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
    }
    if ( !commonUI )
LABEL_14:
      sub_1C372B4(_4__this);
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


void ClassBoardController___c__DisplayClass114_0___OnClickClassBoardResetButton_b__1(
        ClassBoardController___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass114_0_o *v2; // x19
  struct ClassBoardController_o *_4__this; // x8
  int32_t baseId; // w20
  SceneJumpInfo_o *v5; // x19

  v2 = this;
  if ( (byte_4C46A78 & 1) == 0 )
  {
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (ClassBoardController___c__DisplayClass114_0_o *)sub_1C37058(&StringLiteral_4474/*"ClassBoardReset"*/);
    byte_4C46A78 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (baseId = _4__this->fields.baseId,
        v5 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_41479120(v5, (System_String_o *)StringLiteral_4474/*"ClassBoardReset"*/, baseId, 0),
        !v5)
    || (SceneJumpInfo__SetReturnNowScene(v5, 0),
        (this = (ClassBoardController___c__DisplayClass114_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(this);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 22, 1, (Il2CppObject *)v5, 0);
}


void ClassBoardController___c__DisplayClass116_0___ctor(
        ClassBoardController___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass116_0___CheckUMedalCreateEventTutorial_b__0(
        ClassBoardController___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  ClassBoardRootComponent_c *v3; // x0
  int32_t U_MEDAL_CREATE_EVENT_ID; // w20
  NetworkManager_ResultCallbackFunc_o *_9__1; // x22
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C46A79 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardRootComponent_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass116_0__CheckUMedalCreateEventTutorial_b__1__);
    byte_4C46A79 = 1;
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
    _9__1 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_ClassBoardController___c__DisplayClass116_0__CheckUMedalCreateEventTutorial_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  EventTutorialMaster__RequestTutorialEventSet(U_MEDAL_CREATE_EVENT_ID, 96, _9__1, 0);
}


void ClassBoardController___c__DisplayClass116_0___CheckUMedalCreateEventTutorial_b__1(
        ClassBoardController___c__DisplayClass116_0_o *this,
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


void ClassBoardController___c__DisplayClass86_0___ctor(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__0(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass86_0_o *v2; // x19
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
  ClassBoardController___c__DisplayClass86_0_o *v20; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *square; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BaseMonoBehaviour_o *v25; // x20
  BaseMonoBehaviour_c *v26; // x21
  _QWORD *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  struct ClassBoardController_o *v31; // x8
  ClassBoardController___c__DisplayClass86_0_o *v32; // x20
  const MethodInfo *v33; // x3
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  BaseMonoBehaviour_o *v38; // x20
  BaseMonoBehaviour_c *v39; // x21
  _QWORD *v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  struct ClassBoardController_o *v44; // x8
  const MethodInfo *v45; // x1
  ClassBoardController___c__DisplayClass86_0_o *v46; // x20
  const MethodInfo *v47; // x4
  System_Action_o *_9__4; // x23
  ClassBoardSquare_o *v49; // x21
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  BaseMonoBehaviour_o *v52; // x20
  BaseMonoBehaviour_c *v53; // x21
  _QWORD *v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  struct ClassBoardController_o *v58; // x8
  const MethodInfo *v59; // x1
  ClassBoardController___c__DisplayClass86_0_o *v60; // x20
  const MethodInfo *v61; // x5
  ClassBoardSquare_o *v62; // x21
  ClassBoardController___c_c *v63; // x0
  System_Action_o *_9__86_5; // x22
  Il2CppObject *v65; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Action_o *_9__6; // x24
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  ClassBoardLockOpenConfirmDialog_o *v72; // x0
  ClassBoardSquare_o *v73; // x1
  bool v74; // w2
  struct ClassBoardController_o *v75; // x8
  ClassBoardController___c__DisplayClass86_0_o *v76; // x20
  ClassBoardSquare_o *v77; // x21
  ClassBoardController___c_c *v78; // x0
  System_Action_o *_9__86_7; // x22
  Il2CppObject *v80; // x23
  struct ClassBoardController___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Action_o *_9__8; // x23
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  ClassBoardSquareOpenConfirmDialog_o *v87; // x0
  ClassBoardSquare_o *v88; // x1
  bool v89; // w2
  BaseMonoBehaviour_o *v90; // x20
  BaseMonoBehaviour_c *v91; // x21
  _QWORD *v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  struct ClassBoardController_o *v96; // x8
  const MethodInfo *v97; // x1
  ClassBoardController___c__DisplayClass86_0_o *v98; // x20
  ClassBoardSquare_o *v99; // x21
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  ClassBoardController___c__DisplayClass86_0_o *v104; // x20
  ClassBoardSquare_o *v105; // x21
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w2
  const MethodInfo *v109; // x3

  v2 = this;
  if ( (byte_4C46A7A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
    sub_1C37058(&ClassBoardLock_TypeInfo);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__86_5__);
    sub_1C37058(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__86_7__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__10__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__13__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__14__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__2__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__3__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__4__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__6__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__8__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__9__);
    this = (ClassBoardController___c__DisplayClass86_0_o *)sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C46A7A = 1;
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
      v12 = sub_1C87870(_4__this[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v12)(
                                                             klass,
                                                             *(_QWORD *)(v12 + 8));
    if ( !this )
      goto LABEL_136;
    v19 = v2->fields.__4__this;
    if ( !v19 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__16,
                                                             v19->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v20 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, 0);
    this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__2 = v2->fields.__9__2;
    square = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__2__,
        0);
      v2->fields.__9__2 = _9__2;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v23, v24);
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
      v18 = sub_1C87870(v13[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v18)(
                                                             v14,
                                                             *(_QWORD *)(v18 + 8));
    if ( !this )
      goto LABEL_136;
    v31 = v2->fields.__4__this;
    if ( !v31 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v13,
                                                             (Il2CppObject *)this->fields.__9__12,
                                                             v31->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v32 = this;
    LOBYTE(this[3].fields.__9__2) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
    this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__3 = v2->fields.__9__3;
    v35 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__3__,
        0);
      v2->fields.__9__3 = _9__3;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v36, v37);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v32, v35, _9__3, v33);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v25 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v25 )
      goto LABEL_136;
    v26 = v25[3].klass;
    if ( !v26 )
      goto LABEL_136;
    v27 = v26->_1.image;
    v28 = *((unsigned __int16 *)v26->_1.image + 151);
    if ( *((_WORD *)v26->_1.image + 151) )
    {
      v29 = (int *)(v27[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v29 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_40;
      }
      v30 = (__int64)&v27[2 * *v29 + 39];
    }
    else
    {
LABEL_40:
      v30 = sub_1C87870(v25[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
    }
    this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v30)(
                                                             v26,
                                                             *(_QWORD *)(v30 + 8));
    if ( !this )
      goto LABEL_136;
    v44 = v2->fields.__4__this;
    if ( !v44 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v25,
                                                             (Il2CppObject *)this->fields.__9__10,
                                                             v44->fields.uiRoot,
                                                             0,
                                                             (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v46 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, v45);
    this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                             this,
                                                             this->klass[1]._1.gc_desc);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
    _9__4 = v2->fields.__9__4;
    v49 = v2->fields.square;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__4__,
        0);
      v2->fields.__9__4 = _9__4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v50, v51);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v46, v49, 0, _9__4, v47);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v38 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v38 )
      {
        v39 = v38[3].klass;
        if ( v39 )
        {
          v40 = v39->_1.image;
          v41 = *((unsigned __int16 *)v39->_1.image + 151);
          if ( *((_WORD *)v39->_1.image + 151) )
          {
            v42 = (int *)(v40[22] + 8LL);
            while ( *((IClassBoardResourceCatalog_c **)v42 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v41;
              v42 += 4;
              if ( !v41 )
                goto LABEL_56;
            }
            v43 = (__int64)&v40[2 * *v42 + 39];
          }
          else
          {
LABEL_56:
            v43 = sub_1C87870(v38[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
          }
          this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v43)(
                                                                   v39,
                                                                   *(_QWORD *)(v43 + 8));
          if ( this )
          {
            v58 = v2->fields.__4__this;
            if ( v58 )
            {
              this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v38,
                                                                       (Il2CppObject *)this->fields.__9__9,
                                                                       v58->fields.uiRoot,
                                                                       0,
                                                                       (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v60 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, v59);
                this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                                           this,
                                                                           this->klass[1]._1.gc_desc);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
                    v62 = v2->fields.square;
                    v63 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v63 = ClassBoardController___c_TypeInfo;
                    }
                    _9__86_5 = v63->static_fields->__9__86_5;
                    if ( !_9__86_5 )
                    {
                      if ( !v63->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v63);
                        v63 = ClassBoardController___c_TypeInfo;
                      }
                      v65 = (Il2CppObject *)v63->static_fields->__9;
                      _9__86_5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__86_5,
                        v65,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__86_5__,
                        0);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__86_5 = _9__86_5;
                      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__86_5, (int32_t)_9__86_5, v67, v68);
                    }
                    _9__6 = v2->fields.__9__6;
                    if ( !_9__6 )
                    {
                      _9__6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__6,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__6__,
                        0);
                      v2->fields.__9__6 = _9__6;
                      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__6, (int32_t)_9__6, v70, v71);
                    }
                    v72 = (ClassBoardLockOpenConfirmDialog_o *)v60;
                    v73 = v62;
                    v74 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1C372B4(this);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v52 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v52 )
        goto LABEL_136;
      v53 = v52[3].klass;
      if ( !v53 )
        goto LABEL_136;
      v54 = v53->_1.image;
      v55 = *((unsigned __int16 *)v53->_1.image + 151);
      if ( *((_WORD *)v53->_1.image + 151) )
      {
        v56 = (int *)(v54[22] + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v56 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_72;
        }
        v57 = (__int64)&v54[2 * *v56 + 39];
      }
      else
      {
LABEL_72:
        v57 = sub_1C87870(v52[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v57)(
                                                               v53,
                                                               *(_QWORD *)(v57 + 8));
      if ( !this )
        goto LABEL_136;
      v75 = v2->fields.__4__this;
      if ( !v75 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v52,
                                                               (Il2CppObject *)this->fields.__9__11,
                                                               v75->fields.uiRoot,
                                                               0,
                                                               (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v76 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0);
      this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                               this,
                                                               this->klass[1]._1.gc_desc);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
      v77 = v2->fields.square;
      v78 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v78 = ClassBoardController___c_TypeInfo;
      }
      _9__86_7 = v78->static_fields->__9__86_7;
      if ( !_9__86_7 )
      {
        if ( !v78->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v78);
          v78 = ClassBoardController___c_TypeInfo;
        }
        v80 = (Il2CppObject *)v78->static_fields->__9;
        _9__86_7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__86_7, v80, Method_ClassBoardController___c__SetupSquareOnClickListener_b__86_7__, 0);
        v81 = ClassBoardController___c_TypeInfo->static_fields;
        v81->__9__86_7 = _9__86_7;
        sub_1C36FFC((CGThumbnailListItem_o *)&v81->__9__86_7, (int32_t)_9__86_7, v82, v83);
      }
      _9__8 = v2->fields.__9__8;
      if ( !_9__8 )
      {
        _9__8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__8,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__8__,
          0);
        v2->fields.__9__8 = _9__8;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__8, (int32_t)_9__8, v85, v86);
      }
      v87 = (ClassBoardSquareOpenConfirmDialog_o *)v76;
      v88 = v77;
      v89 = 0;
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
      v90 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v90 )
        goto LABEL_136;
      v91 = v90[3].klass;
      if ( !v91 )
        goto LABEL_136;
      v92 = v91->_1.image;
      v93 = *((unsigned __int16 *)v91->_1.image + 151);
      if ( *((_WORD *)v91->_1.image + 151) )
      {
        v94 = (int *)(v92[22] + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v94 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v93;
          v94 += 4;
          if ( !v93 )
            goto LABEL_112;
        }
        v95 = (__int64)&v92[2 * *v94 + 39];
      }
      else
      {
LABEL_112:
        v95 = sub_1C87870(v90[3].klass, IClassBoardResourceCatalog_TypeInfo, 0);
      }
      this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v95)(
                                                               v91,
                                                               *(_QWORD *)(v95 + 8));
      if ( !this )
        goto LABEL_136;
      v96 = v2->fields.__4__this;
      if ( v6 )
      {
        if ( v96 )
        {
          this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v90,
                                                                   (Il2CppObject *)this->fields.__9__9,
                                                                   v96->fields.uiRoot,
                                                                   0,
                                                                   (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v98 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, v97);
            this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                                       this,
                                                                       this->klass[1]._1.gc_desc);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
                _9__86_5 = v2->fields.__9__9;
                v99 = v2->fields.square;
                if ( !_9__86_5 )
                {
                  _9__86_5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__86_5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__9__,
                    0);
                  v2->fields.__9__9 = _9__86_5;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__9, (int32_t)_9__86_5, v100, v101);
                }
                _9__6 = v2->fields.__9__10;
                if ( !_9__6 )
                {
                  _9__6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__6,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__10__,
                    0);
                  v2->fields.__9__10 = _9__6;
                  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__10, (int32_t)_9__6, v102, v103);
                }
                v74 = 1;
                v72 = (ClassBoardLockOpenConfirmDialog_o *)v98;
                v73 = v99;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v72, v73, v74, _9__86_5, _9__6, v61);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v96 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass86_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v90,
                                                               (Il2CppObject *)this->fields.__9__11,
                                                               v96->fields.uiRoot,
                                                               0,
                                                               (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v104 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0);
      this = (ClassBoardController___c__DisplayClass86_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass86_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass86_0_o *, void *))this->klass[1]._1.image)(
                                                               this,
                                                               this->klass[1]._1.gc_desc);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0);
      _9__86_7 = v2->fields.__9__13;
      v105 = v2->fields.square;
      if ( !_9__86_7 )
      {
        _9__86_7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__86_7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__13__,
          0);
        v2->fields.__9__13 = _9__86_7;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__13, (int32_t)_9__86_7, v106, v107);
      }
      _9__8 = v2->fields.__9__14;
      if ( !_9__8 )
      {
        _9__8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__8,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__14__,
          0);
        v2->fields.__9__14 = _9__8;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__14, (int32_t)_9__8, v108, v109);
      }
      v89 = 1;
      v87 = (ClassBoardSquareOpenConfirmDialog_o *)v104;
      v88 = v105;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v87, v88, v89, _9__86_7, _9__8, 0);
  }
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  ClassBoardController__CallbackSquareOnClick(_4__this, this->fields.square, this->fields.acquireFlag, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass86_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass86_0_o *v3; // x19
  System_Action_o *_9__12; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C46A7C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass86_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__12__);
    byte_4C46A7C = 1;
  }
  _9__12 = v3->fields.__9__12;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__12,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__12__,
      0);
    v3->fields.__9__12 = _9__12;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__12, (int32_t)_9__12, v7, v8);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__12, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass86_0_o *this,
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
    sub_1C372B4(_4__this);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass86_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__15; // x21
  ClassBoardController___c__DisplayClass86_0_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ClassBoardController___c__DisplayClass86_0_c *v13; // x8
  __int64 v14; // x9
  IClassBoardSquareUser_c **v15; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4C46A7D & 1) == 0 )
  {
    sub_1C37058(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass86_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__15__);
    byte_4C46A7D = 1;
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
    v8 = sub_1C87870(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__15 = (System_Action_object__o *)v2->fields.__9__15;
  v10 = this;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_object__o *)sub_1C372A4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__15,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__15__,
      0);
    v2->fields.__9__15 = (struct System_Action_IClassBoardSquareUser__o *)_9__15;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__15, (int32_t)_9__15, v11, v12);
  }
  if ( !v10 )
LABEL_21:
    sub_1C372B4(this);
  v13 = v10->klass;
  v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode + *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_1C87870(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass86_0_o *, System_Action_object__o *, _QWORD))v16)(
    v10,
    _9__15,
    *(_QWORD *)(v16 + 8));
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass86_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass86_0_o *v3; // x19
  System_Action_o *_9__16; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C46A7E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass86_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__16__);
    byte_4C46A7E = 1;
  }
  _9__16 = v3->fields.__9__16;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__16 )
  {
    _9__16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__16,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__16__,
      0);
    v3->fields.__9__16 = _9__16;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__16, (int32_t)_9__16, v7, v8);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__16, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__16(
        ClassBoardController___c__DisplayClass86_0_o *this,
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
    sub_1C372B4(_4__this);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__4(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__6(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass86_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass86_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__11; // x21
  ClassBoardController___c__DisplayClass86_0_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ClassBoardController___c__DisplayClass86_0_c *v13; // x8
  __int64 v14; // x9
  IClassBoardSquareUser_c **v15; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4C46A7B & 1) == 0 )
  {
    sub_1C37058(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass86_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__11__);
    byte_4C46A7B = 1;
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
    v8 = sub_1C87870(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass86_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__11 = (System_Action_object__o *)v2->fields.__9__11;
  v10 = this;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_object__o *)sub_1C372A4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__11,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass86_0__SetupSquareOnClickListener_b__11__,
      0);
    v2->fields.__9__11 = (struct System_Action_IClassBoardSquareUser__o *)_9__11;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__11, (int32_t)_9__11, v11, v12);
  }
  if ( !v10 )
LABEL_21:
    sub_1C372B4(this);
  v13 = v10->klass;
  v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode + *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_1C87870(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass86_0_o *, System_Action_object__o *, _QWORD))v16)(
    v10,
    _9__11,
    *(_QWORD *)(v16 + 8));
}


void ClassBoardController___c__DisplayClass87_0___ctor(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__0(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__1(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__10(
        ClassBoardController___c__DisplayClass87_0_o *this,
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
    sub_1C372B4(_4__this);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__11(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass87_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__13; // x21
  ClassBoardController___c__DisplayClass87_0_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ClassBoardController___c__DisplayClass87_0_c *v13; // x8
  __int64 v14; // x9
  IClassBoardSquareUser_c **v15; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4C46A81 & 1) == 0 )
  {
    sub_1C37058(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass87_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__13__);
    byte_4C46A81 = 1;
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
    v8 = sub_1C87870(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass87_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__13 = (System_Action_object__o *)v2->fields.__9__13;
  v10 = this;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_object__o *)sub_1C372A4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__13,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__13__,
      0);
    v2->fields.__9__13 = (struct System_Action_IClassBoardSquareUser__o *)_9__13;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__13, (int32_t)_9__13, v11, v12);
  }
  if ( !v10 )
LABEL_21:
    sub_1C372B4(this);
  v13 = v10->klass;
  v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode + *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_1C87870(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass87_0_o *, System_Action_object__o *, _QWORD))v16)(
    v10,
    _9__13,
    *(_QWORD *)(v16 + 8));
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__12(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__13(
        ClassBoardController___c__DisplayClass87_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass87_0_o *v3; // x19
  System_Action_o *_9__14; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C46A82 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass87_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__14__);
    byte_4C46A82 = 1;
  }
  _9__14 = v3->fields.__9__14;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__14__,
      0);
    v3->fields.__9__14 = _9__14;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__14, (int32_t)_9__14, v7, v8);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__14, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__14(
        ClassBoardController___c__DisplayClass87_0_o *this,
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
    sub_1C372B4(_4__this);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__2(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__4(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__6(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__7(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass87_0_o *v2; // x19
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v8; // x0
  System_Action_object__o *_9__9; // x21
  ClassBoardController___c__DisplayClass87_0_o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  ClassBoardController___c__DisplayClass87_0_c *v13; // x8
  __int64 v14; // x9
  IClassBoardSquareUser_c **v15; // x10
  __int64 v16; // x0

  v2 = this;
  if ( (byte_4C46A7F & 1) == 0 )
  {
    sub_1C37058(&System_Action_IClassBoardSquareUser__TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&IClassBoardSquareUser_TypeInfo);
    this = (ClassBoardController___c__DisplayClass87_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__9__);
    byte_4C46A7F = 1;
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
    v8 = sub_1C87870(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14);
  }
  this = (ClassBoardController___c__DisplayClass87_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v8)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(v8 + 8));
  _9__9 = (System_Action_object__o *)v2->fields.__9__9;
  v10 = this;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_object__o *)sub_1C372A4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__9,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__9__,
      0);
    v2->fields.__9__9 = (struct System_Action_IClassBoardSquareUser__o *)_9__9;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v11, v12);
  }
  if ( !v10 )
LABEL_21:
    sub_1C372B4(this);
  v13 = v10->klass;
  v14 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    v15 = (IClassBoardSquareUser_c **)&v13->_1.interfaceOffsets->offset;
    while ( *(v15 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v14;
      v15 += 2;
      if ( !v14 )
        goto LABEL_18;
    }
    v16 = (__int64)(&v13->vtable._2_GetHashCode + *(_DWORD *)v15);
  }
  else
  {
LABEL_18:
    v16 = sub_1C87870(v10, IClassBoardSquareUser_TypeInfo, 2);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass87_0_o *, System_Action_object__o *, _QWORD))v16)(
    v10,
    _9__9,
    *(_QWORD *)(v16 + 8));
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__8(
        ClassBoardController___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass87_0___CallbackSquareOnClick_b__9(
        ClassBoardController___c__DisplayClass87_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass87_0_o *v3; // x19
  System_Action_o *_9__10; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v3 = this;
  if ( (byte_4C46A80 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (ClassBoardController___c__DisplayClass87_0_o *)sub_1C37058(&Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__10__);
    byte_4C46A80 = 1;
  }
  _9__10 = v3->fields.__9__10;
  _4__this = v3->fields.__4__this;
  square = v3->fields.square;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v3,
      Method_ClassBoardController___c__DisplayClass87_0__CallbackSquareOnClick_b__10__,
      0);
    v3->fields.__9__10 = _9__10;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields.__9__10, (int32_t)_9__10, v7, v8);
  }
  if ( !_4__this )
    sub_1C372B4(this);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__10, 0);
}


void ClassBoardController___c__DisplayClass88_0___ctor(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass88_0___PlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass88_0_o *this,
        const MethodInfo *method)
{
  void *_4__this; // x0
  struct ClassBoardController_o *v4; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v6; // x21
  Il2CppObject *v7; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct ClassBoardController_o *v11; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v13; // x21
  Il2CppObject *v14; // x22
  struct ClassBoardController___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ClassBoardController_o *v18; // x8
  System_Collections_Generic_List_object__o *GrandSquareViewList; // x20
  System_Action_object__o *v20; // x21
  Il2CppObject *v21; // x22
  struct ClassBoardController___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct ClassBoardController_o *v25; // x8
  System_Collections_Generic_List_object__o *GrandLineViewList; // x20
  System_Action_object__o *v27; // x21
  Il2CppObject *v28; // x22
  struct ClassBoardController___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  if ( (byte_4C46A83 & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassBoardSquare__TypeInfo);
    sub_1C37058(&System_Action_ClassBoardLine__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
    sub_1C37058(&Method_ClassBoardController___c__PlayReleaseEffect_b__88_1__);
    sub_1C37058(&Method_ClassBoardController___c__PlayReleaseEffect_b__88_2__);
    sub_1C37058(&Method_ClassBoardController___c__PlayReleaseEffect_b__88_3__);
    sub_1C37058(&Method_ClassBoardController___c__PlayReleaseEffect_b__88_4__);
    sub_1C37058(&ClassBoardController___c_TypeInfo);
    byte_4C46A83 = 1;
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
    v6 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v6, v7, Method_ClassBoardController___c__PlayReleaseEffect_b__88_1__, 0);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__88_1 = (struct System_Action_ClassBoardSquare__o *)v6;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__88_1, (int32_t)v6, v9, v10);
  }
  if ( !squareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v6,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v11->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v13 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 80LL);
  if ( !v13 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v14 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v13 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v13, v14, Method_ClassBoardController___c__PlayReleaseEffect_b__88_2__, 0);
    v15 = ClassBoardController___c_TypeInfo->static_fields;
    v15->__9__88_2 = (struct System_Action_ClassBoardLine__o *)v13;
    sub_1C36FFC((CGThumbnailListItem_o *)&v15->__9__88_2, (int32_t)v13, v16, v17);
  }
  if ( !lineViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v13,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandSquareViewList = (System_Collections_Generic_List_object__o *)v18->fields.GrandSquareViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v20 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 88LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v20 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v20, v21, Method_ClassBoardController___c__PlayReleaseEffect_b__88_3__, 0);
    v22 = ClassBoardController___c_TypeInfo->static_fields;
    v22->__9__88_3 = (struct System_Action_ClassBoardSquare__o *)v20;
    sub_1C36FFC((CGThumbnailListItem_o *)&v22->__9__88_3, (int32_t)v20, v23, v24);
  }
  if ( !GrandSquareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    GrandSquareViewList,
    (System_Action_T__o *)v20,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandLineViewList = (System_Collections_Generic_List_object__o *)v25->fields.GrandLineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v27 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 96LL);
  if ( !v27 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v28 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v27 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v27, v28, Method_ClassBoardController___c__PlayReleaseEffect_b__88_4__, 0);
    v29 = ClassBoardController___c_TypeInfo->static_fields;
    v29->__9__88_4 = (struct System_Action_ClassBoardLine__o *)v27;
    sub_1C36FFC((CGThumbnailListItem_o *)&v29->__9__88_4, (int32_t)v27, v30, v31);
  }
  if ( !GrandLineViewList )
LABEL_40:
    sub_1C372B4(_4__this);
  System_Collections_Generic_List_object___ForEach(
    GrandLineViewList,
    (System_Action_T__o *)v27,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void ClassBoardController___c__DisplayClass89_0___ctor(
        ClassBoardController___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass89_0___PlayClassBoardStartEffect_b__6(
        ClassBoardController___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v5; // x20
  System_Action_o *_9__7; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C46A84 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass89_0__PlayClassBoardStartEffect_b__7__);
    byte_4C46A84 = 1;
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
      _9__7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__7,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass89_0__PlayClassBoardStartEffect_b__7__,
        0);
      this->fields.__9__7 = _9__7;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__7, (int32_t)_9__7, v7, v8);
    }
    if ( v5 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v5, _9__7, 0);
      goto LABEL_13;
    }
LABEL_15:
    sub_1C372B4(_4__this);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0);
}


void ClassBoardController___c__DisplayClass89_0___PlayClassBoardStartEffect_b__7(
        ClassBoardController___c__DisplayClass89_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
}


void ClassBoardController___c__DisplayClass92_0___ctor(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass92_0___FinishedClassBoardStartEffect_b__0(
        ClassBoardController___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass92_0_o *v2; // x19
  Il2CppObject *_4__this; // x20
  System_Action_o *klass; // x1
  ClassBoardController_o *v5; // x0
  System_Action_o *v6; // x21
  struct ClassBoardController_o *v7; // x8

  v2 = this;
  if ( (byte_4C46A85 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardController_HideGrandBoard__);
    this = (ClassBoardController___c__DisplayClass92_0_o *)sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C46A85 = 1;
  }
  _4__this = (Il2CppObject *)v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  klass = (System_Action_o *)_4__this[10].klass;
  if ( klass )
  {
    v5 = v2->fields.__4__this;
  }
  else
  {
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, _4__this, Method_ClassBoardController_HideGrandBoard__, 0);
    v5 = (ClassBoardController_o *)_4__this;
    klass = v6;
  }
  ClassBoardController__SetOnClickBack(v5, klass, 0);
  this = (ClassBoardController___c__DisplayClass92_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_14;
  ClassBoardController__ShowGrandBoard((ClassBoardController_o *)this, 0);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_14;
  if ( !v7->fields.isPlayEffectToGrandBoard || v7->fields.baseId != 8 )
  {
    this = (ClassBoardController___c__DisplayClass92_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( this )
    {
      MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
      goto LABEL_13;
    }
LABEL_14:
    sub_1C372B4(this);
  }
LABEL_13:
  ActionExtensions__Call(v2->fields.callback, 0);
}


void ClassBoardController___c__DisplayClass93_0___ctor(
        ClassBoardController___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass93_0___EndPlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass93_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  ClassBoardController__CheckOpenMissionClearDialogSave(_4__this, this->fields.squareModel, f, 0);
}


void ClassBoardController___c__DisplayClass93_0___EndPlayReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass93_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  ClassBoardController__CheckQuestOpenDialog(_4__this, this->fields.squareModel, f, 0);
}


void ClassBoardController___c__DisplayClass93_0___EndPlayReleaseEffect_b__2(
        ClassBoardController___c__DisplayClass93_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  ClassBoardController__PlayFullReleaseEffect(_4__this, this->fields.squareModel, f, 0);
}


void ClassBoardController___c__DisplayClass93_0___EndPlayReleaseEffect_b__3(
        ClassBoardController___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass93_0_o *v2; // x19
  struct ClassBoardController_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C46A86 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass93_0_o *)sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C46A86 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isPlayFullReleaseEffect = 0,
        (this = (ClassBoardController___c__DisplayClass93_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C372B4(this);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0);
}


void ClassBoardController___c__DisplayClass94_0___ctor(
        ClassBoardController___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass94_0___CheckOpenMissionClearDialogSave_b__2(
        ClassBoardController___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, const MethodInfo *))_4__this->klass->vtable._4_get_classBoardUIController.methodPtr)(
                                                      _4__this,
                                                      _4__this->klass->vtable._4_get_classBoardUIController.method)) == 0 )
  {
    sub_1C372B4(_4__this);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.callback, 0);
}


void ClassBoardController___c__DisplayClass95_0___ctor(
        ClassBoardController___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass95_0___CheckQuestOpenDialog_b__0(
        ClassBoardController___c__DisplayClass95_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass95_0_Fields *p_transitionAction; // x8
  ClassBoardQuestOpenConfirmDialog_o *questOpenConfirmDialog; // x0

  if ( isDecide )
  {
    p_transitionAction = (ClassBoardController___c__DisplayClass95_0_Fields *)&this->fields.transitionAction;
  }
  else
  {
    questOpenConfirmDialog = this->fields.questOpenConfirmDialog;
    if ( !questOpenConfirmDialog )
      sub_1C372B4(0);
    ClassBoardQuestOpenConfirmDialog__Close_48082888(questOpenConfirmDialog, 0, method);
    p_transitionAction = &this->fields;
  }
  ActionExtensions__Call(p_transitionAction->callback, 0);
}


void ClassBoardController___c__DisplayClass96_0___ctor(
        ClassBoardController___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass96_0___PlayFullReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 m_CachedPtr; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct IClassBoardSquareModel_o *squareModel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v11; // x0
  struct ClassBoardController_o *_4__this; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *v14; // x8
  char v15; // w21
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x9
  UnityEngine_Object_o *v20; // x21
  BaseMonoBehaviour_o *v21; // x22
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct IClassBoardSquareModel_o *v26; // x22
  IClassBoardSquareModel_c *v27; // x8
  ClassBoardFullReleaseEffectComponent_o *v28; // x21
  __int64 v29; // x9
  IClassBoardSquareModel_c **v30; // x10
  __int64 v31; // x0
  const MethodInfo *v32; // x2
  struct ClassBoardController_o *v33; // x8
  __int64 v34; // x9
  ClassBoardFullReleaseEffectComponent_o *v35; // x19
  System_Action_o *v36; // x21
  const MethodInfo *v37; // x2

  if ( (byte_4C46A87 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
    sub_1C37058(&IClassBoardResourceCatalog_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ClassBoardController___c__DisplayClass96_1__PlayFullReleaseEffect_b__1__);
    sub_1C37058(&ClassBoardController___c__DisplayClass96_1_TypeInfo);
    byte_4C46A87 = 1;
  }
  v3 = sub_1C372A4(ClassBoardController___c__DisplayClass96_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_41;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  squareModel = this->fields.squareModel;
  if ( !squareModel )
    goto LABEL_41;
  klass = squareModel->klass;
  v9 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    v11 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v11 = sub_1C87870(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v11)(
                  squareModel,
                  *(_QWORD *)(v11 + 8));
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_41;
  resourceCatalog = _4__this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_41;
  v14 = resourceCatalog->klass;
  v15 = m_CachedPtr;
  v16 = *(unsigned __int16 *)&resourceCatalog->klass->_2.rank;
  if ( *(_WORD *)&resourceCatalog->klass->_2.rank )
  {
    v17 = &v14->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v17 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_17;
    }
    v18 = (__int64)&v14->vtable[*v17];
  }
  else
  {
LABEL_17:
    v18 = sub_1C87870(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v18)(
                  resourceCatalog,
                  *(_QWORD *)(v18 + 8));
  if ( !m_CachedPtr )
    goto LABEL_41;
  v19 = 144;
  if ( (v15 & 1) != 0 )
    v19 = 152;
  v20 = *(UnityEngine_Object_o **)(m_CachedPtr + v19);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  m_CachedPtr = UnityEngine_Object__op_Equality(v20, 0, 0);
  if ( (m_CachedPtr & 1) != 0 )
  {
    ActionExtensions__Call(this->fields.callback, 0);
    return;
  }
  v21 = (BaseMonoBehaviour_o *)this->fields.__4__this;
  if ( !v21 )
    goto LABEL_41;
  m_CachedPtr = v21[2].fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_41;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)m_CachedPtr, 0);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    v21,
                    (Il2CppObject *)v20,
                    transform,
                    0,
                    (const MethodInfo_30D08D0 *)Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
  *(_QWORD *)(v3 + 16) = Object_object;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Object_object, v24, v25);
  v26 = this->fields.squareModel;
  if ( !v26 )
    goto LABEL_41;
  v27 = v26->klass;
  v28 = *(ClassBoardFullReleaseEffectComponent_o **)(v3 + 16);
  v29 = *(unsigned __int16 *)&v26->klass->_2.rank;
  if ( *(_WORD *)&v26->klass->_2.rank )
  {
    v30 = (IClassBoardSquareModel_c **)&v27->_1.interfaceOffsets->offset;
    while ( *(v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_33;
    }
    v31 = (__int64)&(&v27->rgctx_data)[2 * *(_DWORD *)v30 + 39];
  }
  else
  {
LABEL_33:
    v31 = sub_1C87870(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12);
  }
  m_CachedPtr = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v31)(v26, *(_QWORD *)(v31 + 8));
  v33 = this->fields.__4__this;
  if ( !v33 || !v28 )
    goto LABEL_41;
  v34 = 144;
  if ( (m_CachedPtr & 1) != 0 )
    v34 = 224;
  ClassBoardFullReleaseEffectComponent__SetClassIcon(v28, *(_DWORD *)((char *)&v33->klass + v34), v32);
  v35 = *(ClassBoardFullReleaseEffectComponent_o **)(v3 + 16);
  v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v3,
    Method_ClassBoardController___c__DisplayClass96_1__PlayFullReleaseEffect_b__1__,
    0);
  if ( !v35 )
LABEL_41:
    sub_1C372B4(m_CachedPtr);
  ClassBoardFullReleaseEffectComponent__Play(v35, v36, v37);
}


void ClassBoardController___c__DisplayClass96_1___ctor(
        ClassBoardController___c__DisplayClass96_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass96_1___PlayFullReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass96_1_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass96_1_o *v2; // x19
  struct ClassBoardController___c__DisplayClass96_0_o *CS___8__locals1; // x8
  struct ClassBoardController___c__DisplayClass96_0_o *v4; // x8
  struct ClassBoardController___c__DisplayClass96_0_o *v5; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4C46A88 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass96_1_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46A88 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0);
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_14;
  this = (ClassBoardController___c__DisplayClass96_1_o *)v4->fields.__4__this;
  if ( !this
    || (this = (ClassBoardController___c__DisplayClass96_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass96_1_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc)) == 0
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 0, 0),
        (v5 = v2->fields.CS___8__locals1) == 0)
    || (this = (ClassBoardController___c__DisplayClass96_1_o *)v5->fields.__4__this) == 0
    || (this = (ClassBoardController___c__DisplayClass96_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass96_1_o *, void *))this->klass[1]._1.image)(
                                                                 this,
                                                                 this->klass[1]._1.gc_desc)) == 0
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)this, 0),
        (this = (ClassBoardController___c__DisplayClass96_1_o *)v2->fields.fullReleaseEffect) == 0) )
  {
LABEL_14:
    sub_1C372B4(this);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(gameObject, 0);
}


void ClassBoardController___c__DisplayClass97_0___ctor(
        ClassBoardController___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardController___c__DisplayClass97_0___PlayMoveCamera_b__0(
        ClassBoardController___c__DisplayClass97_0_o *this,
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
    sub_1C372B4(_4__this);
  }
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}