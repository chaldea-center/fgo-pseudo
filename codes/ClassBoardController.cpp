void __fastcall ClassBoardController___ctor(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardModelBuilder_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ClassBoardModelBuilder_o *v16; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B48269 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardModelBuilder_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine___ctor__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_ClassBoardSquare__TypeInfo, v5);
    sub_1BDB878(&System_Collections_Generic_List_ClassBoardLine__TypeInfo, v6);
    byte_4B48269 = 1;
  }
  v7 = (ClassBoardModelBuilder_o *)sub_1BDBAC4(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v7, 0LL);
  this->fields._builder_k__BackingField = v7;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._builder_k__BackingField, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.squareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v10;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.squareViewList, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.lineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v13;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.lineViewList, (int32_t)v13, v14, v15);
  v16 = (ClassBoardModelBuilder_o *)sub_1BDBAC4(ClassBoardModelBuilder_TypeInfo);
  ClassBoardModelBuilder___ctor(v16, 0LL);
  this->fields._GrandBuilder_k__BackingField = v16;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._GrandBuilder_k__BackingField, (int32_t)v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassBoardSquare__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassBoardSquare___ctor__);
  this->fields.GrandSquareViewList = (struct System_Collections_Generic_List_ClassBoardSquare__o *)v19;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.GrandSquareViewList, (int32_t)v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_ClassBoardLine__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_ClassBoardLine___ctor__);
  this->fields.GrandLineViewList = (struct System_Collections_Generic_List_ClassBoardLine__o *)v22;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.GrandLineViewList, (int32_t)v22, v23, v24);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardController__Awake(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController__CallbackSquareOnClick(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        int32_t acquireFlag,
        const MethodInfo *method)
{
  char v4; // w22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x19
  Il2CppObject *Object_object; // x0
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  ClassBoardSquare_o **v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  ClassBoardSquare_o *v35; // x8
  __int64 methodPtr_low; // x10
  bool v37; // w22
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardResourceCatalog_o *v43; // x21
  IClassBoardResourceCatalog_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  ClassBoardSquareDetailDialog_o *v48; // x21
  ClassBoardSquare_o *v49; // x20
  System_Action_o *v50; // x22
  struct IClassBoardResourceCatalog_o *v51; // x21
  IClassBoardResourceCatalog_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  ClassBoardDisableOpenDialog_o *v56; // x21
  ClassBoardSquare_o *v57; // x20
  System_Action_o *v58; // x22
  const MethodInfo *v59; // x3
  struct IClassBoardResourceCatalog_o *v60; // x22
  IClassBoardResourceCatalog_c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  ClassBoardLockReleaseConditionDialog_o *v65; // x21
  ClassBoardSquare_o *v66; // x20
  System_Action_o *v67; // x22
  struct IClassBoardResourceCatalog_o *v68; // x22
  IClassBoardResourceCatalog_c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  Il2CppObject *v73; // x22
  ClassBoardSquare_o *v74; // x20
  ClassBoardController___c_c *v75; // x0
  System_Action_o *_9__76_3; // x21
  Il2CppObject *v77; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Action_o *v81; // x23
  ClassBoardLockOpenConfirmDialog_o *v82; // x0
  ClassBoardSquare_o *v83; // x1
  bool v84; // w2
  System_Action_o *v85; // x3
  Il2CppObject *v86; // x22
  ClassBoardSquare_o *v87; // x20
  ClassBoardController___c_c *v88; // x0
  System_Action_o *_9__76_5; // x21
  Il2CppObject *v90; // x23
  struct ClassBoardController___c_StaticFields *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  System_Action_o *v94; // x23
  ClassBoardSquareOpenConfirmDialog_o *v95; // x0
  ClassBoardSquare_o *v96; // x1
  bool v97; // w2
  System_Action_o *v98; // x3
  struct IClassBoardResourceCatalog_o *v99; // x21
  IClassBoardResourceCatalog_c *v100; // x8
  __int64 v101; // x9
  int32_t *v102; // x10
  __int64 v103; // x0
  Il2CppObject *v104; // x21
  ClassBoardSquare_o *v105; // x20
  System_Action_o *v106; // x22
  Il2CppObject *v107; // x21
  ClassBoardSquare_o *v108; // x20
  System_Action_o *v109; // x22

  v4 = acquireFlag;
  if ( (byte_4B48252 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, square);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v7);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v8);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v9);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v10);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v11);
    sub_1BDB878(&ClassBoardLock_TypeInfo, v12);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v13);
    sub_1BDB878(&Method_ClassBoardController___c__CallbackSquareOnClick_b__76_3__, v14);
    sub_1BDB878(&Method_ClassBoardController___c__CallbackSquareOnClick_b__76_5__, v15);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__0__, v16);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__11__, v17);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__12__, v18);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__1__, v19);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__2__, v20);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__4__, v21);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__6__, v22);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__7__, v23);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__8__, v24);
    sub_1BDB878(&ClassBoardController___c__DisplayClass76_0_TypeInfo, v25);
    sub_1BDB878(&ClassBoardController___c_TypeInfo, v26);
    byte_4B48252 = 1;
  }
  v27 = sub_1BDBAC4(ClassBoardController___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_97;
  *(_QWORD *)(v27 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v27 + 16), (int32_t)this, v30, v31);
  *(_QWORD *)(v27 + 24) = square;
  v32 = (ClassBoardSquare_o **)(v27 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v27 + 24), (int32_t)square, v33, v34);
  if ( (v4 & 1) != 0 )
  {
    resourceCatalog = this->fields.resourceCatalog;
    if ( resourceCatalog )
    {
      klass = resourceCatalog->klass;
      v40 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                        resourceCatalog,
                                        *(_QWORD *)(p_method + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[7].klass,
                          this->fields.uiRoot,
                          0LL,
                          (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
        if ( Object_object )
        {
          v48 = (ClassBoardSquareDetailDialog_o *)Object_object;
          ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)Object_object, 0LL);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
            v49 = *(ClassBoardSquare_o **)(v27 + 24);
            v50 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v50,
              (Il2CppObject *)v27,
              Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__0__,
              0LL);
            ClassBoardSquareDetailDialog__Open(v48, v49, v50, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 2) != 0 )
  {
    v43 = this->fields.resourceCatalog;
    if ( v43 )
    {
      v44 = v43->klass;
      v45 = *(unsigned __int16 *)(&v43->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v43->klass->_2.bitflags2 + 3) )
      {
        v46 = &v44->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v46 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v45;
          v46 += 4;
          if ( !v45 )
            goto LABEL_23;
        }
        v47 = (__int64)&v44->vtable[*v46].method;
      }
      else
      {
LABEL_23:
        v47 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v47)(
                                        v43,
                                        *(_QWORD *)(v47 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[5].klass,
                          this->fields.uiRoot,
                          0LL,
                          (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
        if ( Object_object )
        {
          v56 = (ClassBoardDisableOpenDialog_o *)Object_object;
          LOBYTE(Object_object[29].monitor) = 0;
          ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)Object_object, v29);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
            v57 = *(ClassBoardSquare_o **)(v27 + 24);
            v58 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v58,
              (Il2CppObject *)v27,
              Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__1__,
              0LL);
            ClassBoardDisableOpenDialog__Open(v56, v57, v58, v59);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 4) != 0 )
  {
    v51 = this->fields.resourceCatalog;
    if ( v51 )
    {
      v52 = v51->klass;
      v53 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
      {
        v54 = &v52->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v54 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_34;
        }
        v55 = (__int64)&v52->vtable[*v54].method;
      }
      else
      {
LABEL_34:
        v55 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v55)(
                                        v51,
                                        *(_QWORD *)(v55 + 8));
      if ( Object_object )
      {
        Object_object = BaseMonoBehaviour__createObject_object_(
                          (BaseMonoBehaviour_o *)this,
                          (Il2CppObject *)Object_object[6].monitor,
                          this->fields.uiRoot,
                          0LL,
                          (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
        if ( Object_object )
        {
          v65 = (ClassBoardLockReleaseConditionDialog_o *)Object_object;
          ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)Object_object, 0LL);
          Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
          if ( Object_object )
          {
            ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
            v66 = *(ClassBoardSquare_o **)(v27 + 24);
            v67 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
            System_Action___ctor(
              v67,
              (Il2CppObject *)v27,
              Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__2__,
              0LL);
            ClassBoardLockReleaseConditionDialog__Open(v65, v66, 0, v67, 0LL);
            return;
          }
        }
      }
    }
    goto LABEL_97;
  }
  if ( (v4 & 0x10) != 0 )
  {
    v60 = this->fields.resourceCatalog;
    if ( !v60 )
      goto LABEL_97;
    v61 = v60->klass;
    v62 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
    {
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v63 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_45;
      }
      v64 = (__int64)&v61->vtable[*v63].method;
    }
    else
    {
LABEL_45:
      v64 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v64)(
                                      v60,
                                      *(_QWORD *)(v64 + 8));
    if ( !Object_object )
      goto LABEL_97;
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      (Il2CppObject *)Object_object[6].klass,
                      this->fields.uiRoot,
                      0LL,
                      (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    if ( !Object_object )
      goto LABEL_97;
    v73 = Object_object;
    ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0LL);
    Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !Object_object )
      goto LABEL_97;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
    v74 = *v32;
    v75 = ClassBoardController___c_TypeInfo;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v75 = ClassBoardController___c_TypeInfo;
    }
    _9__76_3 = v75->static_fields->__9__76_3;
    if ( !_9__76_3 )
    {
      if ( !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        v75 = ClassBoardController___c_TypeInfo;
      }
      v77 = (Il2CppObject *)v75->static_fields->__9;
      _9__76_3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(_9__76_3, v77, Method_ClassBoardController___c__CallbackSquareOnClick_b__76_3__, 0LL);
      static_fields = ClassBoardController___c_TypeInfo->static_fields;
      static_fields->__9__76_3 = _9__76_3;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__76_3, (int32_t)_9__76_3, v79, v80);
    }
    v81 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v81,
      (Il2CppObject *)v27,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__4__,
      0LL);
    v82 = (ClassBoardLockOpenConfirmDialog_o *)v73;
    v83 = v74;
    v84 = 0;
    v85 = _9__76_3;
  }
  else
  {
    if ( (v4 & 8) != 0 )
    {
      v68 = this->fields.resourceCatalog;
      if ( v68 )
      {
        v69 = v68->klass;
        v70 = *(unsigned __int16 *)(&v68->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v68->klass->_2.bitflags2 + 3) )
        {
          v71 = &v69->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v71 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v70;
            v71 += 4;
            if ( !v70 )
              goto LABEL_56;
          }
          v72 = (__int64)&v69->vtable[*v71].method;
        }
        else
        {
LABEL_56:
          v72 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v72)(
                                          v68,
                                          *(_QWORD *)(v72 + 8));
        if ( Object_object )
        {
          Object_object = BaseMonoBehaviour__createObject_object_(
                            (BaseMonoBehaviour_o *)this,
                            (Il2CppObject *)Object_object[5].monitor,
                            this->fields.uiRoot,
                            0LL,
                            (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
          if ( Object_object )
          {
            v86 = Object_object;
            ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0LL);
            Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                              this,
                                              this->klass->vtable._5_set_classBoardUIController.methodPtr);
            if ( Object_object )
            {
              ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
              v87 = *v32;
              v88 = ClassBoardController___c_TypeInfo;
              if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                v88 = ClassBoardController___c_TypeInfo;
              }
              _9__76_5 = v88->static_fields->__9__76_5;
              if ( !_9__76_5 )
              {
                if ( !v88->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v88);
                  v88 = ClassBoardController___c_TypeInfo;
                }
                v90 = (Il2CppObject *)v88->static_fields->__9;
                _9__76_5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  _9__76_5,
                  v90,
                  Method_ClassBoardController___c__CallbackSquareOnClick_b__76_5__,
                  0LL);
                v91 = ClassBoardController___c_TypeInfo->static_fields;
                v91->__9__76_5 = _9__76_5;
                sub_1BDB81C((CGThumbnailListItem_o *)&v91->__9__76_5, (int32_t)_9__76_5, v92, v93);
              }
              v94 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
              System_Action___ctor(
                v94,
                (Il2CppObject *)v27,
                Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__6__,
                0LL);
              v95 = (ClassBoardSquareOpenConfirmDialog_o *)v86;
              v96 = v87;
              v97 = 0;
              v98 = _9__76_5;
              goto LABEL_92;
            }
          }
        }
      }
LABEL_97:
      sub_1BDBAD4(Object_object, v29);
    }
    v35 = *v32;
    v37 = !*v32
       || (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
           LOBYTE(v35->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
       || v35->klass->_2.typeHierarchy[methodPtr_low - 1] != (Il2CppClass *)ClassBoardLock_TypeInfo;
    v99 = this->fields.resourceCatalog;
    if ( !v99 )
      goto LABEL_97;
    v100 = v99->klass;
    v101 = *(unsigned __int16 *)(&v99->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v99->klass->_2.bitflags2 + 3) )
    {
      v102 = &v100->_1.interfaceOffsets->offset;
      while ( *((IClassBoardResourceCatalog_c **)v102 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v101;
        v102 += 4;
        if ( !v101 )
          goto LABEL_85;
      }
      v103 = (__int64)&v100->vtable[*v102].method;
    }
    else
    {
LABEL_85:
      v103 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    Object_object = (Il2CppObject *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v103)(
                                      v99,
                                      *(_QWORD *)(v103 + 8));
    if ( !Object_object )
      goto LABEL_97;
    if ( v37 )
    {
      Object_object = BaseMonoBehaviour__createObject_object_(
                        (BaseMonoBehaviour_o *)this,
                        (Il2CppObject *)Object_object[5].monitor,
                        this->fields.uiRoot,
                        0LL,
                        (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( Object_object )
      {
        v104 = Object_object;
        ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)Object_object, 0LL);
        Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                          this,
                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
        if ( Object_object )
        {
          ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
          v105 = *(ClassBoardSquare_o **)(v27 + 24);
          v106 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v106,
            (Il2CppObject *)v27,
            Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__11__,
            0LL);
          v94 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          System_Action___ctor(
            v94,
            (Il2CppObject *)v27,
            Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__12__,
            0LL);
          v97 = 1;
          v95 = (ClassBoardSquareOpenConfirmDialog_o *)v104;
          v96 = v105;
          v98 = v106;
LABEL_92:
          ClassBoardSquareOpenConfirmDialog__Open(v95, v96, v97, v98, v94, 0LL);
          return;
        }
      }
      goto LABEL_97;
    }
    Object_object = BaseMonoBehaviour__createObject_object_(
                      (BaseMonoBehaviour_o *)this,
                      (Il2CppObject *)Object_object[6].klass,
                      this->fields.uiRoot,
                      0LL,
                      (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
    if ( !Object_object )
      goto LABEL_97;
    v107 = Object_object;
    ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)Object_object, 0LL);
    Object_object = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !Object_object )
      goto LABEL_97;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Object_object, 1, 0LL);
    v108 = *(ClassBoardSquare_o **)(v27 + 24);
    v109 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v109,
      (Il2CppObject *)v27,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__7__,
      0LL);
    v81 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v81,
      (Il2CppObject *)v27,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__8__,
      0LL);
    v84 = 1;
    v82 = (ClassBoardLockOpenConfirmDialog_o *)v107;
    v83 = v108;
    v85 = v109;
  }
  ClassBoardLockOpenConfirmDialog__Open(v82, v83, v84, v85, v81, 0LL);
}


void __fastcall ClassBoardController__CheckOpenMissionClearDialogSave(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x20
  ClassBoardUIController_o *v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *v29; // x23
  IClassBoardSquareModel_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TResult__o *v34; // x0
  ClassBoardController___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x22
  System_Func_object__bool__o *_9__83_0; // x23
  Il2CppObject *v38; // x24
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  ClassBoardController___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x22
  System_Func_object__int__o *_9__83_1; // x23
  Il2CppObject *v46; // x24
  struct ClassBoardController___c_StaticFields *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x22
  ClassBoardUIController_o *v51; // x19
  System_Action_o *v52; // x21
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v53; // x0
  System_Collections_IEnumerable_o *source; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B48259 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, squareModel);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_IClassBoardLockModel___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v10);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_IClassBoardLockModel___, v11);
    sub_1BDB878(&System_Func_IClassBoardLockModel__int__TypeInfo, v12);
    sub_1BDB878(&System_Func_IClassBoardLockModel__bool__TypeInfo, v13);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v15);
    sub_1BDB878(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v16);
    sub_1BDB878(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__83_0__, v17);
    sub_1BDB878(&Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__83_1__, v18);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass83_0__CheckOpenMissionClearDialogSave_b__2__, v19);
    sub_1BDB878(&ClassBoardController___c__DisplayClass83_0_TypeInfo, v20);
    sub_1BDB878(&ClassBoardController___c_TypeInfo, v21);
    byte_4B48259 = 1;
  }
  v22 = sub_1BDBAC4(ClassBoardController___c__DisplayClass83_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_29;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 24) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 24), (int32_t)callback, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  source = (System_Collections_IEnumerable_o *)v29;
  if ( !squareModel )
    goto LABEL_29;
  klass = squareModel->klass;
  v31 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 17].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C2C00C(squareModel, IClassBoardSquareModel_TypeInfo, 17LL);
  }
  (*(void (__fastcall **)(IClassBoardSquareModel_o *, System_Collections_IEnumerable_o **, _QWORD))p_method)(
    squareModel,
    &source,
    *(_QWORD *)(p_method + 8));
  v34 = System_Linq_Enumerable__OfType_object_(
          source,
          (const MethodInfo_305F06C *)Method_System_Linq_Enumerable_OfType_IClassBoardLockModel___);
  v35 = ClassBoardController___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v34;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v35 = ClassBoardController___c_TypeInfo;
  }
  _9__83_0 = (System_Func_object__bool__o *)v35->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = ClassBoardController___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__83_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_IClassBoardLockModel__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__83_0,
      v38,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__83_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_IClassBoardLockModel__bool__o *)_9__83_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_object_(
          v36,
          (System_Func_TSource__bool__o *)_9__83_0,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_IClassBoardLockModel___);
  v43 = ClassBoardController___c_TypeInfo;
  v44 = v42;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v43 = ClassBoardController___c_TypeInfo;
  }
  _9__83_1 = (System_Func_object__int__o *)v43->static_fields->__9__83_1;
  if ( !_9__83_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = ClassBoardController___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__83_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_IClassBoardLockModel__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__83_1,
      v46,
      Method_ClassBoardController___c__CheckOpenMissionClearDialogSave_b__83_1__,
      0LL);
    v47 = ClassBoardController___c_TypeInfo->static_fields;
    v47->__9__83_1 = (struct System_Func_IClassBoardLockModel__int__o *)_9__83_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v47->__9__83_1, (int32_t)_9__83_1, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v44,
                                                               (System_Func_TSource__TKey__o *)_9__83_1,
                                                               (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_IClassBoardLockModel__int___);
  if ( !System_Linq_Enumerable__Any_object_(
          v50,
          (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_IClassBoardLockModel___) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v22 + 24), 0LL);
    goto LABEL_28;
  }
  v23 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v23
    || (ClassBoardUIController__SetCameraWorkBlock(v23, 1, 0LL),
        v51 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr),
        v52 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v52,
          (Il2CppObject *)v22,
          Method_ClassBoardController___c__DisplayClass83_0__CheckOpenMissionClearDialogSave_b__2__,
          0LL),
        !v51) )
  {
LABEL_29:
    sub_1BDBAD4(v23, v24);
  }
  ClassBoardUIController__OpenMissionClearDialog(v51, v52, 0LL);
LABEL_28:
  v53 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                    v50,
                                                                                    (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
  ClassBoardSave__SaveOpenedMissionClearDialog(v53, 0LL);
}


void __fastcall ClassBoardController__CheckQuestOpenDialog(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  IClassBoardSquareModel_c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *Instance; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  Il2CppObject *v40; // x24
  System_String_o *v41; // x22
  System_Action_o *v42; // x23
  ClassBoardQuestOpenConfirmDialog_o *v43; // x21
  int32_t grandBaseId; // w19
  ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *v45; // x22
  int32_t v46; // [xsp+8h] [xbp-38h] BYREF
  int32_t questId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B4825A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, squareModel);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___, v7);
    sub_1BDB878(&Method_ClassBoardQuestOpenConfirmDialog_Close__, v8);
    sub_1BDB878(&ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo, v9);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v10);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1BDB878(&int_TypeInfo, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass84_0__CheckQuestOpenDialog_b__0__, v14);
    sub_1BDB878(&ClassBoardController___c__DisplayClass84_0_TypeInfo, v15);
    sub_1BDB878(&StringLiteral_13661/*"Terminal/Quest/{0}"*/, v16);
    byte_4B4825A = 1;
  }
  questId = 0;
  v17 = sub_1BDBAC4(ClassBoardController___c__DisplayClass84_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_28;
  *(_QWORD *)(v17 + 16) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)callback, v20, v21);
  if ( !squareModel )
    goto LABEL_28;
  klass = squareModel->klass;
  v23 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_9;
    }
    v25 = (__int64)&(&klass->rgctx_data)[2 * *p_offset + 39];
  }
  else
  {
LABEL_9:
    v25 = sub_1C2C00C(squareModel, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v25)(squareModel, *(_QWORD *)(v25 + 8)) & 1) == 0 )
    goto LABEL_21;
  v18 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
          this,
          this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v18 )
    goto LABEL_28;
  if ( !ClassBoardUIController__IsOpenQuestOpenDialog(
          (ClassBoardUIController_o *)v18,
          this->fields.grandBaseId,
          &questId,
          0LL) )
  {
LABEL_21:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
    return;
  }
  v18 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
          this,
          this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v18 )
    goto LABEL_28;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)v18, 1, 0LL);
  resourceCatalog = this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_28;
  v27 = resourceCatalog->klass;
  v28 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v29 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_20;
    }
    p_method = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_20:
    p_method = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
          resourceCatalog,
          *(_QWORD *)(p_method + 8));
  if ( !v18 )
    goto LABEL_28;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)this,
                    *(Il2CppObject **)(v18 + 136),
                    this->fields.uiRoot,
                    0LL,
                    (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardQuestOpenConfirmDialog___);
  *(_QWORD *)(v17 + 32) = Object_object;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)Object_object, v32, v33);
  v18 = *(_QWORD *)(v17 + 32);
  if ( !v18 )
    goto LABEL_28;
  ClassBoardQuestOpenConfirmDialog__Init((ClassBoardQuestOpenConfirmDialog_o *)v18, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v46 = questId;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v35, v36, v37);
  v39 = System_String__Format((System_String_o *)StringLiteral_13661/*"Terminal/Quest/{0}"*/, v38, 0LL);
  v40 = *(Il2CppObject **)(v17 + 32);
  v41 = v39;
  v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v42, v40, Method_ClassBoardQuestOpenConfirmDialog_Close__, 0LL);
  if ( !Instance
    || (CommonUI__TryGetSceneTransitionAction(
          (CommonUI_o *)Instance,
          (System_Action_o **)(v17 + 24),
          v41,
          0LL,
          v42,
          0LL),
        v43 = *(ClassBoardQuestOpenConfirmDialog_o **)(v17 + 32),
        grandBaseId = this->fields.grandBaseId,
        v45 = (ClassBoardQuestOpenConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(ClassBoardQuestOpenConfirmDialog_ClickDelegate_TypeInfo),
        ClassBoardQuestOpenConfirmDialog_ClickDelegate___ctor(
          v45,
          (Il2CppObject *)v17,
          Method_ClassBoardController___c__DisplayClass84_0__CheckQuestOpenDialog_b__0__,
          0LL),
        !v43) )
  {
LABEL_28:
    sub_1BDBAD4(v18, v19);
  }
  ClassBoardQuestOpenConfirmDialog__Open(v43, grandBaseId, v45, 0LL);
}


ClassBoardSquare_o *__fastcall ClassBoardController__CloneSquareObject(
        ClassBoardController_o *this,
        ClassBoardSquare_o *defaultPrefab,
        int32_t assetId,
        UnityEngine_Transform_o *parent,
        bool isGrand,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x20
  BaseMonoBehaviour_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BaseMonoBehaviour_c *klass; // x23
  BaseMonoBehaviour_o *v15; // x24
  BaseMonoBehaviour_o *v16; // x26
  _QWORD *image; // x8
  __int64 v18; // x9
  IClassBoardResourceCatalog_c **v19; // x10
  __int64 v20; // x0
  Il2CppObject *Object_object; // x22
  IClassBoardResourceCatalog_c **v22; // x10
  __int64 v23; // x0

  v9 = (Il2CppObject *)defaultPrefab;
  v10 = (BaseMonoBehaviour_o *)this;
  if ( (byte_4B4824D & 1) == 0 )
  {
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardBlank___, defaultPrefab);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardSquare___, v11);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v12);
    this = (ClassBoardController_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v13);
    byte_4B4824D = 1;
  }
  if ( assetId )
  {
    klass = v10[3].klass;
    if ( isGrand )
      v15 = 0LL;
    else
      v15 = v10;
    if ( isGrand )
      v16 = v10;
    else
      v16 = 0LL;
    if ( !klass )
      goto LABEL_34;
    image = klass->_1.image;
    v18 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( isGrand )
    {
      if ( *((_WORD *)klass->_1.image + 151) )
      {
        v19 = (IClassBoardResourceCatalog_c **)(image[22] + 8LL);
        while ( *(v19 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v18;
          v19 += 2;
          if ( !v18 )
            goto LABEL_16;
        }
        v20 = (__int64)&image[2 * *(_DWORD *)v19 + 53];
      }
      else
      {
LABEL_16:
        v20 = sub_1C2C00C(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 7LL);
      }
      this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v20)(
                                         klass,
                                         (unsigned int)assetId,
                                         *(_QWORD *)(v20 + 8));
      defaultPrefab = (ClassBoardSquare_o *)this;
      v15 = v16;
    }
    else
    {
      if ( *((_WORD *)klass->_1.image + 151) )
      {
        v22 = (IClassBoardResourceCatalog_c **)(image[22] + 8LL);
        while ( *(v22 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v18;
          v22 += 2;
          if ( !v18 )
            goto LABEL_22;
        }
        v23 = (__int64)&image[2 * *(_DWORD *)v22 + 47];
      }
      else
      {
LABEL_22:
        v23 = sub_1C2C00C(v10[3].klass, IClassBoardResourceCatalog_TypeInfo, 4LL);
      }
      this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD, _QWORD))v23)(
                                         klass,
                                         (unsigned int)assetId,
                                         *(_QWORD *)(v23 + 8));
      defaultPrefab = (ClassBoardSquare_o *)this;
    }
    if ( !v15 )
LABEL_34:
      sub_1BDBAD4(this, defaultPrefab);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v15,
                      (Il2CppObject *)defaultPrefab,
                      parent,
                      0LL,
                      (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardBlank___);
  }
  else
  {
    Object_object = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object, 0LL, 0LL) )
    return (ClassBoardSquare_o *)Object_object;
  else
    return (ClassBoardSquare_o *)BaseMonoBehaviour__createObject_object_(
                                   v10,
                                   v9,
                                   parent,
                                   0LL,
                                   (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquare___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__CreateViews(ClassBoardController_o *this, bool isGrand, const MethodInfo *method)
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
  ClassBoardController_c *klass; // x8
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x10
  __int64 v20; // x9
  __int64 v21; // x11
  __int64 *v22; // x24
  __int64 v23; // x8
  System_Collections_Generic_List_object__o *v24; // x25
  System_Collections_Generic_List_object__o *v25; // x21
  UnityEngine_Transform_o *v26; // x22
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x24
  ClassBoardController_o *v32; // x23
  ClassBoardController_o *v33; // x29
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  IClassBoardSquareModel_o *v42; // x26
  __int64 v43; // x0
  __int64 v44; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x27
  IClassBoardResourceCatalog_c *v46; // x8
  __int64 v47; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  IClassBoardSquareModel_c *v50; // x8
  __int64 v51; // x9
  IClassBoardSquareModel_c **v52; // x10
  __int64 v53; // x0
  IClassBoardResourceCatalog_c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  struct IClassBoardResourceCatalog_o *v60; // x27
  ClassBoardController_o *v61; // x10
  ClassBoardController_o *v62; // x9
  IClassBoardResourceCatalog_c *v63; // x8
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // x0
  struct IClassBoardResourceCatalog_o *v67; // x27
  ClassBoardController_o *v68; // x10
  ClassBoardController_o *v69; // x9
  IClassBoardResourceCatalog_c *v70; // x8
  __int64 v71; // x9
  int32_t *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  ClassBoardSquare_o **v76; // x9
  ClassBoardController_o *v77; // x27
  IClassBoardSquareModel_c *v78; // x8
  ClassBoardSquare_o *v79; // x28
  __int64 v80; // x9
  IClassBoardSquareModel_c **v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  const MethodInfo *v85; // x5
  IClassBoardResourceCatalog_c *v86; // x8
  __int64 v87; // x9
  int32_t *v88; // x10
  __int64 v89; // x0
  IClassBoardResourceCatalog_c *v90; // x8
  __int64 v91; // x9
  int32_t *v92; // x10
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x1
  ClassBoardSquare_o **v96; // x9
  __int64 v97; // x0
  __int64 v98; // x1
  ClassBoardSquare_o **v99; // x9
  __int64 v100; // x0
  __int64 v101; // x1
  IClassBoardSquareModel_c *v102; // x8
  __int64 v103; // x9
  IClassBoardSquareModel_c **v104; // x10
  __int64 v105; // x0
  __int64 v106; // x1
  __int64 v107; // x0
  __int64 v108; // x1
  IClassBoardSquareModel_c *v109; // x8
  __int64 v110; // x9
  IClassBoardSquareModel_c **v111; // x10
  __int64 v112; // x0
  __int64 v113; // x1
  ClassBoardSquare_o *v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x27
  __int64 v117; // x0
  __int64 v118; // x1
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  struct System_Object_array *items; // x8
  _QWORD *v122; // x9
  __int64 size; // x10
  Il2CppClass **v124; // x0
  __int64 v125; // x8
  __int64 v126; // x9
  int *v127; // x10
  __int64 v128; // x0
  __int64 *v129; // x23
  __int64 v130; // x8
  __int64 v131; // x9
  int *v132; // x10
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x23
  ClassBoardController_o *v136; // x26
  ClassBoardController_o *v137; // x27
  __int64 v138; // x8
  __int64 v139; // x9
  int *v140; // x10
  __int64 v141; // x0
  __int64 v142; // x8
  __int64 v143; // x9
  int *v144; // x10
  __int64 v145; // x0
  __int64 v146; // x0
  __int64 v147; // x1
  struct IClassBoardResourceCatalog_o *v148; // x25
  IClassBoardLineModel_o *v149; // x24
  IClassBoardResourceCatalog_c *v150; // x8
  __int64 v151; // x9
  int32_t *v152; // x10
  __int64 v153; // x0
  IClassBoardResourceCatalog_c *v154; // x8
  __int64 v155; // x9
  int32_t *v156; // x10
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x1
  Il2CppObject **v160; // x8
  BaseMonoBehaviour_o *v161; // x0
  __int64 v162; // x0
  Il2CppObject *Object_object; // x0
  __int64 v164; // x1
  Il2CppObject *v165; // x25
  __int64 v166; // x0
  __int64 v167; // x1
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  struct System_Object_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  __int64 v174; // x8
  __int64 v175; // x9
  int *v176; // x10
  __int64 v177; // x0
  __int64 v178; // [xsp+0h] [xbp-90h]
  ClassBoardController_o *v179; // [xsp+8h] [xbp-88h]
  ClassBoardController_o *v180; // [xsp+10h] [xbp-80h]
  ClassBoardController_o *v181; // [xsp+18h] [xbp-78h]
  ClassBoardController_o *v182; // [xsp+20h] [xbp-70h]

  if ( (byte_4B4824C & 1) == 0 )
  {
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardLine___, isGrand);
    sub_1BDB878(&IClassBoardLockModel_TypeInfo, v5);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v6);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v7);
    sub_1BDB878(&System_IDisposable_TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo, v9);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, v10);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, v11);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, v12);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare__Add__, v14);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine__Add__, v15);
    byte_4B4824C = 1;
  }
  klass = this->klass;
  if ( isGrand )
    v17 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))klass->vtable._9_get_GrandBuilder.method)(
            this,
            klass->vtable._10_SetupClassBoardUIController.methodPtr,
            method);
  else
    v17 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))klass->vtable._6_get_builder.method)(
            this,
            klass->vtable._7_get_ClassBoardFigureController.methodPtr,
            method);
  if ( isGrand )
    v19 = 240LL;
  else
    v19 = 112LL;
  if ( isGrand )
    v20 = 248LL;
  else
    v20 = 120LL;
  if ( isGrand )
    v21 = 192LL;
  else
    v21 = 40LL;
  if ( !v17 )
    goto LABEL_241;
  v22 = *(__int64 **)(v17 + 24);
  v178 = v17;
  if ( !v22 )
    goto LABEL_241;
  v23 = *v22;
  v24 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v19);
  v25 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v20);
  v26 = *(UnityEngine_Transform_o **)((char *)&this->klass + v21);
  v27 = *(unsigned __int16 *)(*v22 + 302);
  if ( *(_WORD *)(*v22 + 302) )
  {
    v28 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardSquareModel__c **)v28 - 1) != System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_21;
    }
    v29 = v23 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_21:
    v29 = sub_1C2C00C(v22, System_Collections_Generic_IEnumerable_IClassBoardSquareModel__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v29)(v22, *(_QWORD *)(v29 + 8));
  if ( !v31 )
    sub_1BDBAD4(0LL, v30);
  v32 = 0LL;
  v33 = 0LL;
  v181 = 0LL;
  v182 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  while ( 1 )
  {
    v34 = *(_QWORD *)v31;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_29;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_29:
      v37 = sub_1C2C00C(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v31, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v31;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardSquareModel__c **)v40 - 1) != System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_36;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_36:
      v41 = sub_1C2C00C(v31, System_Collections_Generic_IEnumerator_IClassBoardSquareModel__TypeInfo, 0LL);
    }
    v42 = (IClassBoardSquareModel_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v31, *(_QWORD *)(v41 + 8));
    v43 = sub_1BDB9B4(v42, IClassBoardLockModel_TypeInfo);
    if ( v43 )
    {
      resourceCatalog = this->fields.resourceCatalog;
      if ( !isGrand )
        v33 = this;
      if ( isGrand )
        v32 = this;
      if ( isGrand )
      {
        if ( !resourceCatalog )
          sub_1BDBAD4(v43, v44);
        v46 = resourceCatalog->klass;
        v47 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
        {
          p_offset = &v46->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v47;
            p_offset += 4;
            if ( !v47 )
              goto LABEL_49;
          }
          p_method = (__int64)&v46->vtable[*p_offset].method;
        }
        else
        {
LABEL_49:
          p_method = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v74 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                resourceCatalog,
                *(_QWORD *)(p_method + 8));
        if ( !v74 )
          sub_1BDBAD4(0LL, v75);
        v76 = (ClassBoardSquare_o **)(v74 + 64);
        v77 = v32;
      }
      else
      {
        if ( !resourceCatalog )
          sub_1BDBAD4(v43, v44);
        v54 = resourceCatalog->klass;
        v55 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
        {
          v56 = &v54->_1.interfaceOffsets->offset;
          while ( *((IClassBoardResourceCatalog_c **)v56 - 1) != IClassBoardResourceCatalog_TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_61;
          }
          v57 = (__int64)&v54->vtable[*v56].method;
        }
        else
        {
LABEL_61:
          v57 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
        }
        v74 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v57)(
                resourceCatalog,
                *(_QWORD *)(v57 + 8));
        if ( !v74 )
          sub_1BDBAD4(0LL, v75);
        v76 = (ClassBoardSquare_o **)(v74 + 32);
        v77 = v33;
      }
      if ( !v42 )
        sub_1BDBAD4(v74, v75);
      v78 = v42->klass;
      v79 = *v76;
      v80 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
      {
        v81 = (IClassBoardSquareModel_c **)&v78->_1.interfaceOffsets->offset;
        while ( *(v81 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v80;
          v81 += 2;
          if ( !v80 )
            goto LABEL_99;
        }
        v82 = (__int64)&v78->vtable[*(_DWORD *)v81 + 10].method;
      }
      else
      {
LABEL_99:
        v82 = sub_1C2C00C(v42, IClassBoardSquareModel_TypeInfo, 10LL);
      }
      v83 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v82)(v42, *(_QWORD *)(v82 + 8));
      if ( !v77 )
        sub_1BDBAD4(v83, v84);
    }
    else
    {
      if ( !v42 )
        sub_1BDBAD4(0LL, v44);
      v50 = v42->klass;
      v51 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
      {
        v52 = (IClassBoardSquareModel_c **)&v50->_1.interfaceOffsets->offset;
        while ( *(v52 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v51;
          v52 += 2;
          if ( !v51 )
            goto LABEL_55;
        }
        v53 = (__int64)&v50->vtable[*(_DWORD *)v52 + 5].method;
      }
      else
      {
LABEL_55:
        v53 = sub_1C2C00C(v42, IClassBoardSquareModel_TypeInfo, 5LL);
      }
      v58 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v53)(v42, *(_QWORD *)(v53 + 8));
      if ( (v58 & 1) != 0 )
      {
        v60 = this->fields.resourceCatalog;
        if ( isGrand )
          v61 = v181;
        else
          v61 = this;
        v62 = v182;
        if ( isGrand )
          v62 = this;
        v181 = v61;
        v182 = v62;
        if ( isGrand )
        {
          if ( !v60 )
            sub_1BDBAD4(v58, v59);
          v63 = v60->klass;
          v64 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
          {
            v65 = &v63->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v65 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v64;
              v65 += 4;
              if ( !v64 )
                goto LABEL_75;
            }
            v66 = (__int64)&v63->vtable[*v65].method;
          }
          else
          {
LABEL_75:
            v66 = sub_1C2C00C(v60, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          v94 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v66)(
                  v60,
                  *(_QWORD *)(v66 + 8));
          if ( !v94 )
            sub_1BDBAD4(0LL, v95);
          v77 = v182;
          v96 = (ClassBoardSquare_o **)(v94 + 72);
        }
        else
        {
          if ( !v60 )
            sub_1BDBAD4(v58, v59);
          v86 = v60->klass;
          v87 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
          {
            v88 = &v86->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v88 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v87;
              v88 += 4;
              if ( !v87 )
                goto LABEL_108;
            }
            v89 = (__int64)&v86->vtable[*v88].method;
          }
          else
          {
LABEL_108:
            v89 = sub_1C2C00C(v60, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          v100 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v89)(
                   v60,
                   *(_QWORD *)(v89 + 8));
          if ( !v100 )
            sub_1BDBAD4(0LL, v101);
          v77 = v181;
          v96 = (ClassBoardSquare_o **)(v100 + 40);
        }
        v102 = v42->klass;
        v79 = *v96;
        v103 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
        {
          v104 = (IClassBoardSquareModel_c **)&v102->_1.interfaceOffsets->offset;
          while ( *(v104 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v103;
            v104 += 2;
            if ( !v103 )
              goto LABEL_128;
          }
          v105 = (__int64)&v102->vtable[*(_DWORD *)v104 + 10].method;
        }
        else
        {
LABEL_128:
          v105 = sub_1C2C00C(v42, IClassBoardSquareModel_TypeInfo, 10LL);
        }
        v83 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v105)(v42, *(_QWORD *)(v105 + 8));
        if ( !v77 )
          sub_1BDBAD4(v83, v106);
      }
      else
      {
        v67 = this->fields.resourceCatalog;
        if ( isGrand )
          v68 = v179;
        else
          v68 = this;
        v69 = v180;
        if ( isGrand )
          v69 = this;
        v179 = v68;
        v180 = v69;
        if ( isGrand )
        {
          if ( !v67 )
            sub_1BDBAD4(v58, v59);
          v70 = v67->klass;
          v71 = *(unsigned __int16 *)(&v67->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v67->klass->_2.bitflags2 + 3) )
          {
            v72 = &v70->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v72 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v71;
              v72 += 4;
              if ( !v71 )
                goto LABEL_87;
            }
            v73 = (__int64)&v70->vtable[*v72].method;
          }
          else
          {
LABEL_87:
            v73 = sub_1C2C00C(v67, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          v97 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v73)(
                  v67,
                  *(_QWORD *)(v73 + 8));
          if ( !v97 )
            sub_1BDBAD4(0LL, v98);
          v77 = v180;
          v99 = (ClassBoardSquare_o **)(v97 + 48);
        }
        else
        {
          if ( !v67 )
            sub_1BDBAD4(v58, v59);
          v90 = v67->klass;
          v91 = *(unsigned __int16 *)(&v67->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v67->klass->_2.bitflags2 + 3) )
          {
            v92 = &v90->_1.interfaceOffsets->offset;
            while ( *((IClassBoardResourceCatalog_c **)v92 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v91;
              v92 += 4;
              if ( !v91 )
                goto LABEL_114;
            }
            v93 = (__int64)&v90->vtable[*v92].method;
          }
          else
          {
LABEL_114:
            v93 = sub_1C2C00C(v67, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          v107 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v93)(
                   v67,
                   *(_QWORD *)(v93 + 8));
          if ( !v107 )
            sub_1BDBAD4(0LL, v108);
          v77 = v179;
          v99 = (ClassBoardSquare_o **)(v107 + 16);
        }
        v109 = v42->klass;
        v79 = *v99;
        v110 = *(unsigned __int16 *)(&v42->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v42->klass->_2.bitflags2 + 3) )
        {
          v111 = (IClassBoardSquareModel_c **)&v109->_1.interfaceOffsets->offset;
          while ( *(v111 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v110;
            v111 += 2;
            if ( !v110 )
              goto LABEL_139;
          }
          v112 = (__int64)&v109->vtable[*(_DWORD *)v111 + 10].method;
        }
        else
        {
LABEL_139:
          v112 = sub_1C2C00C(v42, IClassBoardSquareModel_TypeInfo, 10LL);
        }
        v83 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v112)(v42, *(_QWORD *)(v112 + 8));
        if ( !v77 )
          sub_1BDBAD4(v83, v113);
      }
    }
    v114 = ClassBoardController__CloneSquareObject(v77, v79, v83, v26, isGrand, v85);
    v116 = (Il2CppObject *)v114;
    if ( !v114 )
      sub_1BDBAD4(0LL, v115);
    ClassBoardSquare__Setup(v114, v42, 0LL);
    if ( !v24 )
      sub_1BDBAD4(v117, v118);
    items = v24->fields._items;
    v122 = Method_System_Collections_Generic_List_ClassBoardSquare__Add__;
    ++v24->fields._version;
    if ( !items )
      sub_1BDBAD4(v117, v118);
    size = v24->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v24,
        v116,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
    }
    else
    {
      v124 = &items->obj.klass + size;
      v24->fields._size = size + 1;
      v124[4] = (Il2CppClass *)v116;
      sub_1BDB81C((CGThumbnailListItem_o *)(v124 + 4), (int32_t)v116, v119, v120);
    }
  }
  v125 = *(_QWORD *)v31;
  v126 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v127 = (int *)(*(_QWORD *)(v125 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v127 - 1) != System_IDisposable_TypeInfo )
    {
      --v126;
      v127 += 4;
      if ( !v126 )
        goto LABEL_152;
    }
    v128 = v125 + 16LL * *v127 + 312;
  }
  else
  {
LABEL_152:
    v128 = sub_1C2C00C(v31, System_IDisposable_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))v128)(v31, *(_QWORD *)(v128 + 8));
  v129 = *(__int64 **)(v178 + 16);
  if ( !v129 )
LABEL_241:
    sub_1BDBAD4(v17, v18);
  v130 = *v129;
  v131 = *(unsigned __int16 *)(*v129 + 302);
  if ( *(_WORD *)(*v129 + 302) )
  {
    v132 = (int *)(*(_QWORD *)(v130 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardLineModel__c **)v132 - 1) != System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo )
    {
      --v131;
      v132 += 4;
      if ( !v131 )
        goto LABEL_159;
    }
    v133 = v130 + 16LL * *v132 + 312;
  }
  else
  {
LABEL_159:
    v133 = sub_1C2C00C(
             *(_QWORD *)(v178 + 16),
             System_Collections_Generic_IEnumerable_IClassBoardLineModel__TypeInfo,
             0LL);
  }
  v135 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v133)(v129, *(_QWORD *)(v133 + 8));
  if ( !v135 )
    sub_1BDBAD4(0LL, v134);
  v136 = 0LL;
  v137 = 0LL;
  while ( 1 )
  {
    v138 = *(_QWORD *)v135;
    v139 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
    {
      v140 = (int *)(*(_QWORD *)(v138 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v140 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v139;
        v140 += 4;
        if ( !v139 )
          goto LABEL_167;
      }
      v141 = v138 + 16LL * *v140 + 312;
    }
    else
    {
LABEL_167:
      v141 = sub_1C2C00C(v135, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v141)(v135, *(_QWORD *)(v141 + 8)) & 1) == 0 )
      break;
    v142 = *(_QWORD *)v135;
    v143 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
    {
      v144 = (int *)(*(_QWORD *)(v142 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardLineModel__c **)v144 - 1) != System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo )
      {
        --v143;
        v144 += 4;
        if ( !v143 )
          goto LABEL_174;
      }
      v145 = v142 + 16LL * *v144 + 312;
    }
    else
    {
LABEL_174:
      v145 = sub_1C2C00C(v135, System_Collections_Generic_IEnumerator_IClassBoardLineModel__TypeInfo, 0LL);
    }
    v146 = (*(__int64 (__fastcall **)(__int64, _QWORD))v145)(v135, *(_QWORD *)(v145 + 8));
    v148 = this->fields.resourceCatalog;
    v149 = (IClassBoardLineModel_o *)v146;
    if ( !isGrand )
      v137 = this;
    if ( isGrand )
      v136 = this;
    if ( isGrand )
    {
      if ( !v148 )
        sub_1BDBAD4(v146, v147);
      v150 = v148->klass;
      v151 = *(unsigned __int16 *)(&v148->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v148->klass->_2.bitflags2 + 3) )
      {
        v152 = &v150->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v152 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v151;
          v152 += 4;
          if ( !v151 )
            goto LABEL_186;
        }
        v153 = (__int64)&v150->vtable[*v152].method;
      }
      else
      {
LABEL_186:
        v153 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v158 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v153)(
               v148,
               *(_QWORD *)(v153 + 8));
      if ( !v158 )
        sub_1BDBAD4(0LL, v159);
      v160 = (Il2CppObject **)(v158 + 56);
      v161 = (BaseMonoBehaviour_o *)v136;
    }
    else
    {
      if ( !v148 )
        sub_1BDBAD4(v146, v147);
      v154 = v148->klass;
      v155 = *(unsigned __int16 *)(&v148->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v148->klass->_2.bitflags2 + 3) )
      {
        v156 = &v154->_1.interfaceOffsets->offset;
        while ( *((IClassBoardResourceCatalog_c **)v156 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v155;
          v156 += 4;
          if ( !v155 )
            goto LABEL_192;
        }
        v157 = (__int64)&v154->vtable[*v156].method;
      }
      else
      {
LABEL_192:
        v157 = sub_1C2C00C(this->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      v162 = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))v157)(
               v148,
               *(_QWORD *)(v157 + 8));
      if ( !v162 )
        sub_1BDBAD4(0LL, v159);
      v160 = (Il2CppObject **)(v162 + 24);
      v161 = (BaseMonoBehaviour_o *)v137;
    }
    if ( !v161 )
      sub_1BDBAD4(0LL, v159);
    Object_object = BaseMonoBehaviour__createObject_object_(
                      v161,
                      *v160,
                      v26,
                      0LL,
                      (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLine___);
    v165 = Object_object;
    if ( !Object_object )
      sub_1BDBAD4(0LL, v164);
    ClassBoardLine__Setup((ClassBoardLine_o *)Object_object, v149, 0LL);
    if ( !v25 )
      sub_1BDBAD4(v166, v167);
    v170 = v25->fields._items;
    v171 = Method_System_Collections_Generic_List_ClassBoardLine__Add__;
    ++v25->fields._version;
    if ( !v170 )
      sub_1BDBAD4(v166, v167);
    v172 = v25->fields._size;
    if ( (unsigned int)v172 >= v170->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        v165,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
    }
    else
    {
      v173 = &v170->obj.klass + v172;
      v25->fields._size = v172 + 1;
      v173[4] = (Il2CppClass *)v165;
      sub_1BDB81C((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v165, v168, v169);
    }
  }
  v174 = *(_QWORD *)v135;
  v175 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
  {
    v176 = (int *)(*(_QWORD *)(v174 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v176 - 1) != System_IDisposable_TypeInfo )
    {
      --v175;
      v176 += 4;
      if ( !v175 )
        goto LABEL_210;
    }
    v177 = v174 + 16LL * *v176 + 312;
  }
  else
  {
LABEL_210:
    v177 = sub_1C2C00C(v135, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v177)(v135, *(_QWORD *)(v177 + 8));
}


void __fastcall ClassBoardController__EndPlayGrandReturnTransitionAnimation(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  ClassBoardController_c *klass; // x8
  System_Action_o *v9; // x20

  if ( (byte_4B48265 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__96_0__, v4);
    byte_4B48265 = 1;
  }
  ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, v2);
  ClassBoardController__RefreshUi(this, this->fields.baseId, v5);
  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( !GrandBoardRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0LL);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0LL);
  GrandBoardRoot = (UnityEngine_GameObject_o *)this->fields.GrandBoardObjectsParent;
  if ( !GrandBoardRoot
    || (GrandBoardRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)GrandBoardRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0LL),
        klass = this->klass,
        this->fields.CurrentBoardType = 1,
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))klass->vtable._4_get_classBoardUIController.method)(
                                                        this,
                                                        klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)GrandBoardRoot, 0, 0LL),
        (GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                                        this,
                                                        this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(GrandBoardRoot, v6);
  }
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)GrandBoardRoot, 0LL);
  v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ClassBoardController__EndPlayGrandReturnTransitionAnimation_b__96_0__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 82, v9, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardController__EndPlayGrandTransitionAnimation(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  Il2CppObject *Instance; // x20
  __int64 v10; // x2
  System_Int32_array *v11; // x21
  System_Action_o *v12; // x22

  if ( (byte_4B48263 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__EndPlayGrandTransitionAnimation_b__94_0__, v4);
    sub_1BDB878(&int___TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B48263 = 1;
  }
  if ( this->fields.isPlayEffectToGrandBoard )
  {
    gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                               this,
                                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !gameObject )
      goto LABEL_18;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    MainMenuBar__setMenuActive(1, 0LL, 0LL);
  }
  if ( this->fields.isDirectlyGrandBoard && !this->fields.isPlayEffectToGrandBoard
    || (ClassBoardController__RefreshUi(this, this->fields.grandBaseId, v2), !this->fields.isDirectlyGrandBoard)
    || !this->fields.isPlayEffectToGrandBoard )
  {
    gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                               this,
                                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( gameObject )
    {
      ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)gameObject, 0LL);
      goto LABEL_17;
    }
LABEL_18:
    sub_1BDBAD4(gameObject, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  gameObject = (UnityEngine_GameObject_o *)sub_1BDB920(int___TypeInfo, 1LL);
  if ( !gameObject )
    goto LABEL_18;
  v11 = (System_Int32_array *)gameObject;
  if ( !LODWORD(gameObject[1].klass) )
    sub_1BDBADC(gameObject, v8, v10);
  LODWORD(gameObject[1].monitor) = this->fields.grandBaseId;
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_ClassBoardController__EndPlayGrandTransitionAnimation_b__94_0__,
    0LL);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__OpenClassBoardReleaseDialog((CommonUI_o *)Instance, v11, v12, 1, 0LL);
LABEL_17:
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 0;
}


void __fastcall ClassBoardController__EndPlayReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
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
  __int64 v16; // x1
  __int64 v17; // x19
  MissionNotifyManager_o *IsClassBoardSquareAllReleased; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 **v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ClassBoardController_o *v25; // x23
  __int64 *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x9
  IClassBoardSquareModel_c **v29; // x10
  __int64 v30; // x0
  int32_t v31; // w21
  __int64 v32; // x20
  System_Action_object__o *v33; // x21
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  System_Action_object__o *v36; // x21
  const MethodInfo *v37; // x3
  System_Action_object__o *v38; // x21
  const MethodInfo *v39; // x3
  ActionChain_o *v40; // x21
  __int64 v41; // x20
  System_Action_o *v42; // x22
  const MethodInfo *v43; // x3

  if ( (byte_4B48258 & 1) == 0 )
  {
    sub_1BDB878(&ActionChain_TypeInfo, squareModel);
    sub_1BDB878(&System_Action___TypeInfo, v5);
    sub_1BDB878(&System_Action_Action____TypeInfo, v6);
    sub_1BDB878(&System_Action_Action__TypeInfo, v7);
    sub_1BDB878(&System_Action_TypeInfo, v8);
    sub_1BDB878(&CondType_TypeInfo, v9);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v11);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__0__, v12);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__1__, v13);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__2__, v14);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__3__, v15);
    sub_1BDB878(&ClassBoardController___c__DisplayClass82_0_TypeInfo, v16);
    byte_4B48258 = 1;
  }
  v17 = sub_1BDBAC4(ClassBoardController___c__DisplayClass82_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_33;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 24) = squareModel;
  v22 = (__int64 **)(v17 + 24);
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)squareModel, v23, v24);
  if ( ConstantMaster__IsFLAG20250516(0LL)
    && ((IsClassBoardSquareAllReleased = (MissionNotifyManager_o *)BasicHelper__IsNullOrEmpty(
                                                                     (System_Collections_ICollection_o *)this->fields.squareViewList,
                                                                     0LL),
         ((unsigned __int8)IsClassBoardSquareAllReleased & 1) == 0)
      ? (v25 = this)
      : (v25 = 0LL),
        ((unsigned __int8)IsClassBoardSquareAllReleased & 1) == 0) )
  {
    v26 = *v22;
    if ( !*v22 )
      goto LABEL_33;
    v27 = *v26;
    v28 = *(unsigned __int16 *)(*v26 + 302);
    if ( *(_WORD *)(*v26 + 302) )
    {
      v29 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v28;
        v29 += 2;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = v27 + 16LL * (*(_DWORD *)v29 + 1) + 312;
    }
    else
    {
LABEL_16:
      v30 = sub_1C2C00C(*v22, IClassBoardSquareModel_TypeInfo, 1LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8));
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    IsClassBoardSquareAllReleased = (MissionNotifyManager_o *)CondType__IsClassBoardSquareAllReleased(v31, 0LL);
    if ( !v25 )
      goto LABEL_33;
  }
  else
  {
    IsClassBoardSquareAllReleased = 0LL;
    v25 = this;
    if ( !this )
      goto LABEL_33;
  }
  v25->fields.isPlayFullReleaseEffect = (unsigned __int8)IsClassBoardSquareAllReleased & 1;
  if ( !this->fields.isPlayFullReleaseEffect )
  {
    IsClassBoardSquareAllReleased = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !IsClassBoardSquareAllReleased )
      goto LABEL_33;
    MissionNotifyManager__EndPause(IsClassBoardSquareAllReleased, 0LL);
  }
  v32 = sub_1BDB920(System_Action_Action____TypeInfo, 3LL);
  v33 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v33,
    (Il2CppObject *)v17,
    Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__0__,
    0LL);
  if ( !v32 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v32 + 24) )
    goto LABEL_34;
  *(_QWORD *)(v32 + 32) = v33;
  sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v33, v34, v35);
  v36 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v36,
    (Il2CppObject *)v17,
    Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__1__,
    0LL);
  if ( *(_DWORD *)(v32 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v32 + 40) = v36;
  sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 40), (int32_t)v36, v34, v37);
  v38 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v38,
    (Il2CppObject *)v17,
    Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__2__,
    0LL);
  if ( *(_DWORD *)(v32 + 24) <= 2u )
    goto LABEL_34;
  *(_QWORD *)(v32 + 48) = v38;
  sub_1BDB81C((CGThumbnailListItem_o *)(v32 + 48), (int32_t)v38, v34, v39);
  v40 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
  ActionChain___ctor_48337224(v40, (System_Action_Action__array *)v32, 0LL);
  v41 = sub_1BDB920(System_Action___TypeInfo, 1LL);
  v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v17,
    Method_ClassBoardController___c__DisplayClass82_0__EndPlayReleaseEffect_b__3__,
    0LL);
  if ( !v41 )
    goto LABEL_33;
  if ( !*(_DWORD *)(v41 + 24) )
LABEL_34:
    sub_1BDBADC(IsClassBoardSquareAllReleased, v19, v34);
  *(_QWORD *)(v41 + 32) = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v42, v34, v43);
  if ( !v40
    || (IsClassBoardSquareAllReleased = (MissionNotifyManager_o *)ChainableActionBase__Final(
                                                                    (ChainableActionBase_o *)v40,
                                                                    (System_Action_array *)v41,
                                                                    0LL)) == 0LL )
  {
LABEL_33:
    sub_1BDBAD4(IsClassBoardSquareAllReleased, v19);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)IsClassBoardSquareAllReleased, 0LL);
}


void __fastcall ClassBoardController__FinishedClassBoardStartEffect(
        ClassBoardController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  ClassBoardUIController_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *v19; // x1

  if ( (byte_4B48257 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass81_0__FinishedClassBoardStartEffect_b__0__, v5);
    sub_1BDB878(&ClassBoardController___c__DisplayClass81_0_TypeInfo, v6);
    byte_4B48257 = 1;
  }
  v7 = sub_1BDBAC4(ClassBoardController___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 24) = callback,
        sub_1BDB81C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)callback, v12, v13),
        (v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL)
    || (ClassBoardUIController__TouchEnable(v8, 0LL),
        (v8 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(v8, v9);
  }
  ClassBoardUIController__SetCameraWorkBlock(v8, 0, 0LL);
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
  v17 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_ClassBoardController___c__DisplayClass81_0__FinishedClassBoardStartEffect_b__0__,
    0LL);
  v19 = ClassBoardController__ResetClassBoardCameraCoroutine(this, cameraResetSec, cameraResetEasingType, v17, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardController__GetHeaderSpriteName(
        ClassBoardController_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B4824F & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&id);
    sub_1BDB878(&StringLiteral_20642/*"img_txt_classscore_{0}"*/, v6);
    byte_4B4824F = 1;
  }
  v9 = id;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_20642/*"img_txt_classscore_{0}"*/, v7, 0LL);
}


void __fastcall ClassBoardController__HideGrandBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ClassBoardUIController_o *GrandSquareViewList; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  ClassBoardBackground_o *background; // x20
  SimpleAnimation_o *boardRootAnimation; // x21
  SimpleAnimation_o *grandBoardRootAnimation; // x22
  System_Action_o *v19; // x23
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4B48264 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController_EndPlayGrandReturnTransitionAnimation__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v11);
    byte_4B48264 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v21, 0, sizeof(v21));
  if ( this->fields.CurrentBoardType == 2 )
  {
    GrandSquareViewList = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                                        this,
                                                        this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !GrandSquareViewList )
      goto LABEL_22;
    ClassBoardUIController__TouchDisable(GrandSquareViewList, 0LL);
    if ( (this->fields.grandUserSvtId & 0x8000000000000000LL) == 0 )
    {
      GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandSquareViewList;
      if ( !GrandSquareViewList )
        goto LABEL_22;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v20,
        (System_Collections_Generic_List_object__o *)GrandSquareViewList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
      for ( i = v20;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
            ((void (*)(void))i.fields._current->klass->vtable[8].method)() )
      {
        if ( !i.fields._current )
          sub_1BDBAD4(0LL, v14);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
      GrandSquareViewList = (ClassBoardUIController_o *)this->fields.GrandLineViewList;
      if ( !GrandSquareViewList )
        goto LABEL_22;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v21,
        (System_Collections_Generic_List_object__o *)GrandSquareViewList,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v21,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
      {
        if ( !v21.fields._current )
          sub_1BDBAD4(0LL, v15);
        ClassBoardLine__PlayGrandToClassTransition((ClassBoardLine_o *)v21.fields._current, 0, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v21,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    }
    background = this->fields.background;
    boardRootAnimation = this->fields.boardRootAnimation;
    grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
    v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ClassBoardController_EndPlayGrandReturnTransitionAnimation__,
      0LL);
    if ( background )
    {
      ClassBoardBackground__PlayGrandReturnTransitionAnimation(
        background,
        boardRootAnimation,
        grandBoardRootAnimation,
        v19,
        0,
        0LL);
      return;
    }
LABEL_22:
    sub_1BDBAD4(GrandSquareViewList, v13);
  }
}


void __fastcall ClassBoardController__HideGrandBoardObj(
        ClassBoardController_o *this,
        bool isDispButton,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  UnityEngine_GameObject_o *GrandBoardUnderMask; // x0
  UnityEngine_Component_o *GrandBoardObjectsParent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1
  ClassBoardUIController_o *v10; // x19

  GrandBoardRoot = this->fields.GrandBoardRoot;
  if ( GrandBoardRoot )
    UnityEngine_GameObject__SetActive(GrandBoardRoot, 0, 0LL);
  GrandBoardUnderMask = this->fields.GrandBoardUnderMask;
  if ( GrandBoardUnderMask )
    UnityEngine_GameObject__SetActive(GrandBoardUnderMask, 0, 0LL);
  GrandBoardObjectsParent = (UnityEngine_Component_o *)this->fields.GrandBoardObjectsParent;
  if ( GrandBoardObjectsParent )
  {
    gameObject = UnityEngine_Component__get_gameObject(GrandBoardObjectsParent, 0LL);
    if ( !gameObject )
      goto LABEL_11;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                             this,
                                             this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                             method);
  if ( !gameObject
    || (ClassBoardUIController__ActivateGrandScoreButton((ClassBoardUIController_o *)gameObject, isDispButton, 0LL),
        v10 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr),
        gameObject = (UnityEngine_GameObject_o *)ConstantMaster__IsFLAG20250516(0LL),
        !v10) )
  {
LABEL_11:
    sub_1BDBAD4(gameObject, v9);
  }
  ClassBoardUIController__ActivateShop18Button(v10, (unsigned __int8)gameObject & 1, 0LL);
}


bool __fastcall ClassBoardController__IsTouchEnableUi(ClassBoardController_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *v3; // x20
  ClassBoardUIController_o *v4; // x0
  __int64 v5; // x1

  if ( (byte_4B48268 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48268 = 1;
  }
  v3 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
    return 0;
  v4 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v4 )
    sub_1BDBAD4(0LL, v5);
  return ClassBoardUIController__get_IsTouchEnable(v4, 0LL);
}


void __fastcall ClassBoardController__OnClickEffectList(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  ClassStatisticsInfo_array *classStatisticsInfos; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  int32_t v12; // w20
  Il2CppObject *Instance; // x21
  System_Action_o *v14; // x22

  if ( (byte_4B48249 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__OnClickEffectList_b__65_0__, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_UserClassStatisticsMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B48249 = 1;
  }
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    classStatisticsInfos = (ClassStatisticsInfo_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !classStatisticsInfos )
      goto LABEL_19;
    if ( CommonUI__IsOpenClassBoardEffectListDialog((CommonUI_o *)classStatisticsInfos, 0LL) )
      return;
    v11 = this->fields.CurrentBoardType == 1 ? 144LL : 216LL;
    v12 = *(_DWORD *)((char *)&this->klass + v11);
    classStatisticsInfos = (ClassStatisticsInfo_array *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                                          this,
                                                          this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !classStatisticsInfos )
      goto LABEL_19;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)classStatisticsInfos, 1, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardController__OnClickEffectList_b__65_0__, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    classStatisticsInfos = (ClassStatisticsInfo_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    if ( classStatisticsInfos )
      classStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                               (UserClassStatisticsMaster_o *)classStatisticsInfos,
                               0LL);
    if ( !Instance )
LABEL_19:
      sub_1BDBAD4(classStatisticsInfos, v10);
    CommonUI__OpenClassBoardEffectListDialog(
      (CommonUI_o *)Instance,
      0,
      v12,
      1,
      v14,
      0,
      0LL,
      0LL,
      0,
      classStatisticsInfos,
      0LL);
  }
}


void __fastcall ClassBoardController__OnClickGrandScoreButton(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  if ( (byte_4B4824A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController_HideGrandBoard__, v3);
    byte_4B4824A = 1;
  }
  if ( this->fields.CurrentBoardType == 1 )
  {
    v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardController_HideGrandBoard__, 0LL);
    ClassBoardController__SetOnClickBack(this, v4, v5);
    ClassBoardController__ShowGrandBoard(this, v6);
  }
  else
  {
    ClassBoardController__HideGrandBoard(this, method);
  }
}


void __fastcall ClassBoardController__OnClickHelp(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x20
  ClassBoardUIController_o *v7; // x0
  __int64 v8; // x1
  int32_t CurrentBoardType; // w21
  System_Action_o *v10; // x0
  _QWORD *v11; // x8
  System_Action_o *v12; // x20
  int32_t v13; // w21

  if ( (byte_4B48247 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__OnClickHelp_b__63_0__, v3);
    sub_1BDB878(&Method_ClassBoardController__OnClickHelp_b__63_1__, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    byte_4B48247 = 1;
  }
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
  {
    v7 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v7 )
      sub_1BDBAD4(0LL, v8);
    ClassBoardUIController__SetCameraWorkBlock(v7, 1, 0LL);
    CurrentBoardType = this->fields.CurrentBoardType;
    v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    v11 = &Method_ClassBoardController__OnClickHelp_b__63_0__;
    if ( CurrentBoardType != 1 )
      v11 = &Method_ClassBoardController__OnClickHelp_b__63_1__;
    v12 = v10;
    if ( CurrentBoardType == 1 )
      v13 = 82;
    else
      v13 = 100;
    System_Action___ctor(v10, (Il2CppObject *)this, *v11, 0LL);
    EventTutorialMaster__ShowTutorialWithoutCheck(-1, v13, v12, 0LL);
  }
}


void __fastcall ClassBoardController__OnClickShop18Button(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  ClassBoardUIController_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Instance; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CommonUI_o *v19; // x20
  System_String_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  CommonConfirmDialog_ClickDelegate_o *v23; // x24

  if ( (byte_4B48267 & 1) == 0 )
  {
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass98_0__OnClickShop18Button_b__0__, v5);
    sub_1BDB878(&ClassBoardController___c__DisplayClass98_0_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_115/*" "*/, v7);
    sub_1BDB878(&StringLiteral_13484/*"TRANSITION_SHOP18_CONFIRM_DECIDE"*/, v8);
    sub_1BDB878(&StringLiteral_13485/*"TRANSITION_SHOP18_CONFIRM_DIALOG_MSG"*/, v9);
    sub_1BDB878(&StringLiteral_13483/*"TRANSITION_SHOP18_CONFIRM_CANCEL"*/, v10);
    byte_4B48267 = 1;
  }
  v11 = sub_1BDBAC4(ClassBoardController___c__DisplayClass98_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  *(_QWORD *)(v11 + 16) = Instance;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)Instance, v17, v18);
  v12 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v12 )
    goto LABEL_9;
  ClassBoardUIController__SetCameraWorkBlock(v12, 1, 0LL);
  v19 = *(CommonUI_o **)(v11 + 16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13485/*"TRANSITION_SHOP18_CONFIRM_DIALOG_MSG"*/, 0LL);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_13484/*"TRANSITION_SHOP18_CONFIRM_DECIDE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_13483/*"TRANSITION_SHOP18_CONFIRM_CANCEL"*/, 0LL);
  v23 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v23,
    (Il2CppObject *)v11,
    Method_ClassBoardController___c__DisplayClass98_0__OnClickShop18Button_b__0__,
    0LL);
  if ( !v19 )
LABEL_9:
    sub_1BDBAD4(v12, v13);
  CommonUI__OpenConfirmDialog_30833232(
    v19,
    (System_String_o *)StringLiteral_115/*" "*/,
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
    0LL);
}


void __fastcall ClassBoardController__OnDestroy(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x19
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  IClassBoardResourceCatalog_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B4824B & 1) == 0 )
  {
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, method);
    sub_1BDB878(&Method_SingletonTemplate_ClassBoardGlobalObject__Delete__, v3);
    byte_4B4824B = 1;
  }
  SingletonTemplate_object___Delete((const MethodInfo_39167AC *)Method_SingletonTemplate_ClassBoardGlobalObject__Delete__);
  resourceCatalog = this->fields.resourceCatalog;
  if ( resourceCatalog )
  {
    klass = resourceCatalog->klass;
    v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
    {
      p_offset = (IClassBoardResourceCatalog_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v6;
        p_offset += 2;
        if ( !v6 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 2].method;
    }
    else
    {
LABEL_8:
      p_method = sub_1C2C00C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 2LL);
    }
    (*(void (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
      resourceCatalog,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall ClassBoardController__PlayClassBoardStartEffect(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x20
  ClassBoardUIController_o *Instance; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Transform_o *boardObjectsParent; // x0
  UnityEngine_Transform_o *v29; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  ClassBoardController___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  System_Func_object__bool__o *_9__78_0; // x22
  Il2CppObject *v34; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  ClassBoardController___c_c *v39; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  System_Func_object__int__o *_9__78_1; // x22
  Il2CppObject *v42; // x23
  struct ClassBoardController___c_StaticFields *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v47; // x0
  ClassBoardController___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x22
  System_Func_object__bool__o *_9__78_2; // x23
  Il2CppObject *v51; // x24
  struct ClassBoardController___c_StaticFields *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  ClassBoardController___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x22
  System_Func_object__int__o *_9__78_3; // x23
  Il2CppObject *v59; // x24
  struct ClassBoardController___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x22
  System_Object_array *v65; // x0
  ClassBoardController___c_c *v66; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x21
  System_Func_object__object__o *_9__78_4; // x23
  Il2CppObject *v69; // x24
  CGThumbnailListItem_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v74; // x0
  System_Object_array *v75; // x0
  ClassBoardController___c_c *v76; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  System_Func_object__object__o *_9__78_5; // x22
  Il2CppObject *v79; // x23
  struct ClassBoardController___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *v84; // x0
  ClassBoardEffectController_o *effectController; // x19
  System_Action_o *v86; // x21
  const MethodInfo *v87; // x2
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B48254 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Any_ClassBoardLock___, v3);
    sub_1BDB878(&Method_System_Linq_Enumerable_OfType_ClassBoardLock___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_ClassBoardLock___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_ClassBoardLock___, v9);
    sub_1BDB878(&System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo, v10);
    sub_1BDB878(&System_Func_ClassBoardLock__int__TypeInfo, v11);
    sub_1BDB878(&System_Func_ClassBoardLock__bool__TypeInfo, v12);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13);
    sub_1BDB878(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_0__, v14);
    sub_1BDB878(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_1__, v15);
    sub_1BDB878(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_2__, v16);
    sub_1BDB878(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_3__, v17);
    sub_1BDB878(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_4__, v18);
    sub_1BDB878(&Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_5__, v19);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass78_0__PlayClassBoardStartEffect_b__6__, v20);
    sub_1BDB878(&ClassBoardController___c__DisplayClass78_0_TypeInfo, v21);
    sub_1BDB878(&ClassBoardController___c_TypeInfo, v22);
    byte_4B48254 = 1;
  }
  v23 = sub_1BDBAC4(ClassBoardController___c__DisplayClass78_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_52;
  *(_QWORD *)(v23 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v23 + 24), (int32_t)this, v26, v27);
  boardObjectsParent = this->fields.boardObjectsParent;
  v88.fields.x = 0.0;
  v88.fields.y = 0.0;
  v88.fields.z = 0.0;
  *(_WORD *)&this->fields.isDirectlyGrandBoard = 256;
  TransformHelper__SetLocalPosition(boardObjectsParent, v88, 0LL);
  v29 = this->fields.boardObjectsParent;
  if ( !byte_4B3E916 )
  {
    Instance = (ClassBoardUIController_o *)sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v25);
    byte_4B3E916 = 1;
  }
  if ( !v29 )
    goto LABEL_52;
  UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                           this,
                                           this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__TouchDisable(Instance, 0LL);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                           this,
                                           this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_52;
  ClassBoardUIController__SetCameraWorkBlock(Instance, 1, 0LL);
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_52;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  v30 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.squareViewList,
          (const MethodInfo_305F06C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v31 = ClassBoardController___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v31 = ClassBoardController___c_TypeInfo;
  }
  _9__78_0 = (System_Func_object__bool__o *)v31->static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = ClassBoardController___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__78_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_0,
      v34,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_0__,
      0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Func_ClassBoardLock__bool__o *)_9__78_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v36, v37);
  }
  v38 = System_Linq_Enumerable__Where_object_(
          v32,
          (System_Func_TSource__bool__o *)_9__78_0,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v39 = ClassBoardController___c_TypeInfo;
  v40 = v38;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v39 = ClassBoardController___c_TypeInfo;
  }
  _9__78_1 = (System_Func_object__int__o *)v39->static_fields->__9__78_1;
  if ( !_9__78_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = ClassBoardController___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__78_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__78_1,
      v42,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_1__,
      0LL);
    v43 = ClassBoardController___c_TypeInfo->static_fields;
    v43->__9__78_1 = (struct System_Func_ClassBoardLock__int__o *)_9__78_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v43->__9__78_1, (int32_t)_9__78_1, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v40,
                                                               (System_Func_TSource__TKey__o *)_9__78_1,
                                                               (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  v47 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.GrandSquareViewList,
          (const MethodInfo_305F06C *)Method_System_Linq_Enumerable_OfType_ClassBoardLock___);
  v48 = ClassBoardController___c_TypeInfo;
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v47;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v48 = ClassBoardController___c_TypeInfo;
  }
  _9__78_2 = (System_Func_object__bool__o *)v48->static_fields->__9__78_2;
  if ( !_9__78_2 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = ClassBoardController___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__78_2 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_ClassBoardLock__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_2,
      v51,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_2__,
      0LL);
    v52 = ClassBoardController___c_TypeInfo->static_fields;
    v52->__9__78_2 = (struct System_Func_ClassBoardLock__bool__o *)_9__78_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&v52->__9__78_2, (int32_t)_9__78_2, v53, v54);
  }
  v55 = System_Linq_Enumerable__Where_object_(
          v49,
          (System_Func_TSource__bool__o *)_9__78_2,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_ClassBoardLock___);
  v56 = ClassBoardController___c_TypeInfo;
  v57 = v55;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v56 = ClassBoardController___c_TypeInfo;
  }
  _9__78_3 = (System_Func_object__int__o *)v56->static_fields->__9__78_3;
  if ( !_9__78_3 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = ClassBoardController___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__78_3 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_ClassBoardLock__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__78_3,
      v59,
      Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_3__,
      0LL);
    v60 = ClassBoardController___c_TypeInfo->static_fields;
    v60->__9__78_3 = (struct System_Func_ClassBoardLock__int__o *)_9__78_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&v60->__9__78_3, (int32_t)_9__78_3, v61, v62);
  }
  v63 = System_Linq_Enumerable__OrderBy_object__int_(
          v57,
          (System_Func_TSource__TKey__o *)_9__78_3,
          (const MethodInfo_305F578 *)Method_System_Linq_Enumerable_OrderBy_ClassBoardLock__int___);
  *(_BYTE *)(v23 + 16) = 0;
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
  if ( System_Linq_Enumerable__Any_object_(
         v46,
         (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v23 + 16) = 1;
    v65 = System_Linq_Enumerable__ToArray_object_(
            v46,
            (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v66 = ClassBoardController___c_TypeInfo;
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)v65;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v66 = ClassBoardController___c_TypeInfo;
    }
    _9__78_4 = (System_Func_object__object__o *)v66->static_fields->__9__78_4;
    if ( !_9__78_4 )
    {
      if ( !v66->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v66);
        v66 = ClassBoardController___c_TypeInfo;
      }
      v69 = (Il2CppObject *)v66->static_fields->__9;
      _9__78_4 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__78_4,
        v69,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_4__,
        0LL);
      v70 = (CGThumbnailListItem_o *)ClassBoardController___c_TypeInfo->static_fields;
      v70[1].klass = (CGThumbnailListItem_c *)_9__78_4;
      sub_1BDB81C(v70 + 1, (int32_t)_9__78_4, v71, v72);
    }
    v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v67,
                                                                 (System_Func_TSource__TResult__o *)_9__78_4,
                                                                 (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v74 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v73,
                                                                                      (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v74, 0LL);
  }
  if ( System_Linq_Enumerable__Any_object_(
         v64,
         (const MethodInfo_303F5F0 *)Method_System_Linq_Enumerable_Any_ClassBoardLock___) )
  {
    *(_BYTE *)(v23 + 16) = 1;
    v75 = System_Linq_Enumerable__ToArray_object_(
            v64,
            (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLock___);
    v76 = ClassBoardController___c_TypeInfo;
    v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v75;
    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
      v76 = ClassBoardController___c_TypeInfo;
    }
    _9__78_5 = (System_Func_object__object__o *)v76->static_fields->__9__78_5;
    if ( !_9__78_5 )
    {
      if ( !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        v76 = ClassBoardController___c_TypeInfo;
      }
      v79 = (Il2CppObject *)v76->static_fields->__9;
      _9__78_5 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_ClassBoardLock__IClassBoardLockModel__TypeInfo);
      System_Func_object__object____ctor(
        _9__78_5,
        v79,
        Method_ClassBoardController___c__PlayClassBoardStartEffect_b__78_5__,
        0LL);
      v80 = ClassBoardController___c_TypeInfo->static_fields;
      v80->__9__78_5 = (struct System_Func_ClassBoardLock__IClassBoardLockModel__o *)_9__78_5;
      sub_1BDB81C((CGThumbnailListItem_o *)&v80->__9__78_5, (int32_t)_9__78_5, v81, v82);
    }
    v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v77,
                                                                 (System_Func_TSource__TResult__o *)_9__78_5,
                                                                 (const MethodInfo_3068484 *)Method_System_Linq_Enumerable_Select_ClassBoardLock__IClassBoardLockModel___);
    v84 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardLockModel__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v83,
                                                                                      (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_IClassBoardLockModel___);
    ClassBoardSave__SaveOpenedMissionClearDialog(v84, 0LL);
  }
  effectController = this->fields.effectController;
  v86 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v86,
    (Il2CppObject *)v23,
    Method_ClassBoardController___c__DisplayClass78_0__PlayClassBoardStartEffect_b__6__,
    0LL);
  if ( !effectController )
LABEL_52:
    sub_1BDBAD4(Instance, v25);
  ClassBoardEffectController__PlayClassBoardStartEffect(effectController, v86, v87);
}


void __fastcall ClassBoardController__PlayDirectlyGrandBoardOpenEffect(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ClassBoardUIController_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ClassBoardEffectController_o *effectController; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4B48255 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__79_0__, v3);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v4);
    byte_4B48255 = 1;
  }
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                           this,
                                           this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_14;
  ClassBoardUIController__TouchDisable(Instance, 0LL);
  Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                           this,
                                           this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_14;
  ClassBoardUIController__SetCameraWorkBlock(Instance, 1, 0LL);
  Instance = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  if ( this->fields.isPlayEffectToGrandBoard )
  {
    Instance = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                             this,
                                             this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( Instance )
    {
      Instance = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL);
      if ( Instance )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        MainMenuBar__setMenuActive(0, 0LL, 0LL);
        goto LABEL_12;
      }
    }
LABEL_14:
    sub_1BDBAD4(Instance, v6);
  }
  if ( this->fields.isDirectlyGrandBoard )
    ClassBoardController__RefreshUi(this, this->fields.grandBaseId, v7);
LABEL_12:
  this->fields.isFinishedClassScoreAnimation = 0;
  effectController = this->fields.effectController;
  v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ClassBoardController__PlayDirectlyGrandBoardOpenEffect_b__79_0__,
    0LL);
  if ( !effectController )
    goto LABEL_14;
  ClassBoardEffectController__SkipClassBoardStartEffect(effectController, v9, v10);
  started = ClassBoardController__WaitFinishedClassBoardStartEffect(this, 0LL, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall ClassBoardController__PlayFullReleaseEffect(
        ClassBoardController_o *this,
        IClassBoardSquareModel_o *squareModel,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *ClassBoardRoot; // x22
  __int64 *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  IClassBoardSquareModel_c **v24; // x10
  __int64 v25; // x0
  struct ClassBoardBackground_o *background; // x8
  float fullReleaseEffectCameraResetSec; // s8
  int32_t fullReleaseEffectCameraEasingType; // w21
  System_Action_o *v29; // x22
  const MethodInfo *v30; // x3
  System_Collections_IEnumerator_o *v31; // x1

  if ( (byte_4B4825B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, squareModel);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass85_0__PlayFullReleaseEffect_b__0__, v9);
    sub_1BDB878(&ClassBoardController___c__DisplayClass85_0_TypeInfo, v10);
    byte_4B4825B = 1;
  }
  v11 = sub_1BDBAC4(ClassBoardController___c__DisplayClass85_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_24;
  *(_QWORD *)(v11 + 16) = squareModel;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)squareModel, v14, v15);
  *(_QWORD *)(v11 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v16, v17);
  *(_QWORD *)(v11 + 32) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)callback, v18, v19);
  if ( !this->fields.isPlayFullReleaseEffect )
    goto LABEL_8;
  ClassBoardRoot = (UnityEngine_Object_o *)this->fields.ClassBoardRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(ClassBoardRoot, 0LL, 0LL) )
  {
LABEL_8:
    ActionExtensions__Call(*(System_Action_o **)(v11 + 32), 0LL);
    return;
  }
  v12 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
          this,
          this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v12
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)v12, 1, 0LL),
        (v12 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                 this,
                 this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0)
    || (ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)v12, 0LL),
        (v21 = *(__int64 **)(v11 + 16)) == 0LL) )
  {
LABEL_24:
    sub_1BDBAD4(v12, v13);
  }
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
        goto LABEL_16;
    }
    v25 = v22 + 16LL * (*(_DWORD *)v24 + 12) + 312;
  }
  else
  {
LABEL_16:
    v25 = sub_1C2C00C(*(_QWORD *)(v11 + 16), IClassBoardSquareModel_TypeInfo, 12LL);
  }
  v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  background = this->fields.background;
  if ( (v12 & 1) != 0 )
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
  v29 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v11,
    Method_ClassBoardController___c__DisplayClass85_0__PlayFullReleaseEffect_b__0__,
    0LL);
  v31 = ClassBoardController__ResetClassBoardCameraCoroutine(
          this,
          fullReleaseEffectCameraResetSec,
          fullReleaseEffectCameraEasingType,
          v29,
          v30);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v31, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__PlayGrandSquareAndLine(
        ClassBoardController_o *this,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B48262 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardController__PlayGrandSquareAndLine_d__93_TypeInfo, method);
    byte_4B48262 = 1;
  }
  v5 = sub_1BDBAC4(ClassBoardController__PlayGrandSquareAndLine_d__93_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(float *)(v5 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__PlayMoveCamera(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  ClassBoardUIController_o *transform; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x22
  IClassBoardSquareModel_c *klass; // x8
  __int64 v19; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  int v22; // w0
  __int64 v23; // x8
  ClassBoardEffectController_o *v24; // x22
  float v25; // s0
  float v26; // s1
  float v27; // s2
  float v28; // s8
  float v29; // s9
  float v30; // s10
  float x; // s11
  float y; // s12
  float z; // s13
  System_Action_o *v34; // x19
  const MethodInfo *v35; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B4825C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, square);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v7);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass86_0__PlayMoveCamera_b__0__, v8);
    sub_1BDB878(&ClassBoardController___c__DisplayClass86_0_TypeInfo, v9);
    byte_4B4825C = 1;
  }
  v10 = sub_1BDBAC4(ClassBoardController___c__DisplayClass86_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_20;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)callback, v15, v16);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !transform )
    goto LABEL_20;
  ClassBoardUIController__TouchDisable(transform, 0LL);
  transform = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                            this,
                                            this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !transform )
    goto LABEL_20;
  ClassBoardUIController__SetCameraWorkBlock(transform, 1, 0LL);
  if ( !square )
    goto LABEL_20;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_20;
  klass = SquareModel_k__BackingField->klass;
  v19 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      p_offset += 2;
      if ( !v19 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1C2C00C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v22 = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          SquareModel_k__BackingField,
          *(_QWORD *)(p_method + 8));
  v23 = 256LL;
  if ( v22 != this->fields.grandBaseId )
    v23 = 128LL;
  v24 = *(ClassBoardEffectController_o **)((char *)&this->klass + v23);
  transform = (ClassBoardUIController_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)square, 0LL);
  if ( !transform )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
  transform = (ClassBoardUIController_o *)this->fields.boardParent;
  if ( !transform )
    goto LABEL_20;
  v28 = v25;
  v29 = v26;
  v30 = v27;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  v34 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v34,
    (Il2CppObject *)v10,
    Method_ClassBoardController___c__DisplayClass86_0__PlayMoveCamera_b__0__,
    0LL);
  if ( !v24 )
LABEL_20:
    sub_1BDBAD4(transform, v12);
  v37.fields.z = v30 * z;
  v37.fields.y = v29 * y;
  v37.fields.x = v28 * x;
  ClassBoardEffectController__PlaySelectMoveCamera(v24, v37, v34, v35);
}


void __fastcall ClassBoardController__PlayReleaseEffect(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x23
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardUIController_o *v20; // x22
  __int64 v21; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v23; // x0
  struct IClassBoardSquareModel_o *v24; // x22
  IClassBoardSquareModel_c *v25; // x8
  __int64 v26; // x9
  IClassBoardSquareModel_c **v27; // x10
  __int64 p_method; // x0
  __int64 v29; // x8
  ClassBoardEffectController_o *v30; // x20
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3

  if ( (byte_4B48253 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, square);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass77_0__PlayReleaseEffect_b__0__, v9);
    sub_1BDB878(&ClassBoardController___c__DisplayClass77_0_TypeInfo, v10);
    byte_4B48253 = 1;
  }
  v11 = sub_1BDBAC4(ClassBoardController___c__DisplayClass77_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_28;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = endAct;
  sub_1BDB81C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)endAct, v16, v17);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
               this,
               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_28;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)Instance, 0LL);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
               this,
               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Instance )
    goto LABEL_28;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 1, 0LL);
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0LL);
  Instance = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
               this,
               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !square )
    goto LABEL_28;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_28;
  klass = SquareModel_k__BackingField->klass;
  v20 = (ClassBoardUIController_o *)Instance;
  v21 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      p_offset += 2;
      if ( !v21 )
        goto LABEL_13;
    }
    v23 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_13:
    v23 = sub_1C2C00C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  Instance = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v23)(
               SquareModel_k__BackingField,
               *(_QWORD *)(v23 + 8));
  if ( !v20 )
    goto LABEL_28;
  ClassBoardUIController__UpdateItemList(v20, Instance & 1, 0LL);
  v24 = square->fields._SquareModel_k__BackingField;
  if ( !v24 )
    goto LABEL_28;
  v25 = v24->klass;
  v26 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    v27 = (IClassBoardSquareModel_c **)&v25->_1.interfaceOffsets->offset;
    while ( *(v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_21;
    }
    p_method = (__int64)&v25->vtable[*(_DWORD *)v27 + 1].method;
  }
  else
  {
LABEL_21:
    p_method = sub_1C2C00C(square->fields._SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v29 = (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8)) == this->fields.grandBaseId
      ? 256LL
      : 128LL;
  v30 = *(ClassBoardEffectController_o **)((char *)&this->klass + v29);
  v31 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v11,
    Method_ClassBoardController___c__DisplayClass77_0__PlayReleaseEffect_b__0__,
    0LL);
  if ( !v30 )
LABEL_28:
    sub_1BDBAD4(Instance, v13);
  ClassBoardEffectController__PlayRelease(v30, square, v31, v32);
}


void __fastcall ClassBoardController__PlayTransitionAnimation(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *GrandBoardRoot; // x0
  struct ClassBoardBackground_o *v5; // x8
  float *p_grandScoreSignEffectStartSecDirectly; // x8
  struct ClassBoardBackground_o *background; // x8
  float v8; // s8
  ClassBoardBackground_o *v9; // x20
  SimpleAnimation_o *boardRootAnimation; // x21
  SimpleAnimation_o *grandBoardRootAnimation; // x22
  System_Action_o *v12; // x23
  bool v13; // w4
  const MethodInfo *v14; // x1
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_4B48261 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController_EndPlayGrandTransitionAnimation__, v3);
    byte_4B48261 = 1;
  }
  GrandBoardRoot = this->fields.GrandBoardRoot;
  this->fields.CurrentBoardType = 2;
  if ( !GrandBoardRoot )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0LL);
  GrandBoardRoot = this->fields.GrandBoardUnderMask;
  if ( !GrandBoardRoot )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(GrandBoardRoot, 1, 0LL);
  if ( this->fields.isDirectlyGrandBoard && !this->fields.isPlayEffectToGrandBoard )
  {
    background = this->fields.background;
    if ( !background )
      goto LABEL_16;
    p_grandScoreSignEffectStartSecDirectly = &background->fields.grandScoreSignEffectStartSecDirectly;
  }
  else
  {
    v5 = this->fields.background;
    if ( !v5 )
      goto LABEL_16;
    p_grandScoreSignEffectStartSecDirectly = &v5->fields.grandScoreSignEffectStartSec;
  }
  v8 = *p_grandScoreSignEffectStartSecDirectly;
  GrandBoardRoot = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._7_get_ClassBoardFigureController.method)(
                                                 this,
                                                 this->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
  if ( !GrandBoardRoot )
LABEL_16:
    sub_1BDBAD4(GrandBoardRoot, method);
  ClassBoardFigureController__SetUIPanelAlpha((ClassBoardFigureController_o *)GrandBoardRoot, 0.0, 0LL);
  v9 = this->fields.background;
  boardRootAnimation = this->fields.boardRootAnimation;
  grandBoardRootAnimation = this->fields.grandBoardRootAnimation;
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardController_EndPlayGrandTransitionAnimation__, 0LL);
  if ( !this->fields.isDirectlyGrandBoard )
  {
    v13 = 0;
    if ( v9 )
      goto LABEL_14;
    goto LABEL_16;
  }
  v13 = !this->fields.isPlayEffectToGrandBoard;
  if ( !v9 )
    goto LABEL_16;
LABEL_14:
  ClassBoardBackground__PlayGrandTransitionAnimation(v9, boardRootAnimation, grandBoardRootAnimation, v12, v13, 0LL);
  v15 = ClassBoardController__PlayGrandSquareAndLine(this, v8, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__RefreshUi(
        ClassBoardController_o *this,
        int32_t currentBaseId,
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  _BOOL8 IsGrand; // x0
  const MethodInfo *v16; // x2
  bool v17; // w20
  System_String_o *v18; // x21
  ClassBoardUIController_o *v19; // x22
  int64_t grandUserSvtId; // x8
  __int64 *v21; // x8
  System_String_o *v22; // x21
  ClassBoardUIController_o *v23; // x22
  ClassBoardUIController_o *v24; // x21
  ClassBoardUIController_o *v25; // x21
  Il2CppClass *klass; // x21
  ClassBoardUIController_o *v27; // x19
  uint32_t cctor_finished; // w9
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4825E & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, *(_QWORD *)&currentBaseId);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&LocalizationManager_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_7001/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/, v8);
    sub_1BDB878(&StringLiteral_7000/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/, v9);
    sub_1BDB878(&StringLiteral_20682/*"img_txt_grandscore"*/, v10);
    sub_1BDB878(&StringLiteral_3437/*"CLASS_BOARD_HEADER_MESSAGE"*/, v11);
    sub_1BDB878(&StringLiteral_6999/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/, v12);
    byte_4B4825E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_36;
  DataMasterBase_object__object__int___TryGetEntity(
    Master_object,
    &entity,
    currentBaseId,
    (const MethodInfo_32E1E88 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_36;
  IsGrand = ClassBoardBaseEntity__IsGrand((ClassBoardBaseEntity_o *)entity, 0LL);
  v17 = IsGrand;
  v18 = IsGrand
      ? (System_String_o *)StringLiteral_20682/*"img_txt_grandscore"*/
      : ClassBoardController__GetHeaderSpriteName((ClassBoardController_o *)IsGrand, currentBaseId, v16);
  v19 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v19 )
    goto LABEL_36;
  ClassBoardUIController__SetHeaderTitle(v19, (AtlasManagerUnit_o *)Master_object, v18, 0LL);
  if ( v17 )
  {
    grandUserSvtId = this->fields.grandUserSvtId;
    if ( grandUserSvtId < 1 )
    {
      cctor_finished = LocalizationManager_TypeInfo->_2.cctor_finished;
      if ( grandUserSvtId )
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = &StringLiteral_7001/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT_INIT"*/;
      }
      else
      {
        if ( !cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v21 = &StringLiteral_7000/*"GRAND_CLASS_BOARD_HEADER_MESSAGE_SVT_SELECT"*/;
      }
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v21 = &StringLiteral_6999/*"GRAND_CLASS_BOARD_HEADER_MESSAGE"*/;
    }
  }
  else
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = &StringLiteral_3437/*"CLASS_BOARD_HEADER_MESSAGE"*/;
  }
  v22 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
  v23 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v23 )
    goto LABEL_36;
  ClassBoardUIController__SetHeaderMessage(
    v23,
    (AtlasManagerUnit_o *)Master_object,
    v22,
    v17,
    this->fields.grandUserSvtId > 0,
    0LL);
  v24 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ConstantMaster__IsFLAG20250516(0LL);
  if ( !v24 )
    goto LABEL_36;
  ClassBoardUIController__ActivateGrandScoreButton(v24, (unsigned __int8)Master_object & !v17 & 1, 0LL);
  v25 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ConstantMaster__IsFLAG20250516(0LL);
  if ( !v25 )
    goto LABEL_36;
  ClassBoardUIController__ActivateShop18Button(v25, (unsigned __int8)Master_object & !v17 & 1, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                                                  this,
                                                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !Master_object )
    goto LABEL_36;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)Master_object, v17, 0LL);
  if ( !entity )
    goto LABEL_36;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0LL) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                                                  this,
                                                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !entity
    || (klass = entity[4].klass,
        v27 = (ClassBoardUIController_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v27) )
  {
LABEL_36:
    sub_1BDBAD4(Master_object, v14);
  }
  ClassBoardUIController__SetItemList(v27, (System_Int32_array *)klass, (AtlasManagerUnit_o *)Master_object, v17, 0LL);
}


void __fastcall ClassBoardController__Release(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  UnityEngine_Object_o *v16; // x20
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v20; // x20
  UnityEngine_Object_o *v21; // x20
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  ClassBoardController___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  System_Action_object__o *_9__59_0; // x21
  Il2CppObject *v26; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x8
  int32_t size; // w2
  int v32; // w9
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  ClassBoardController___c_c *v34; // x8
  System_Collections_Generic_IEnumerable_T__o *v35; // x20
  System_Action_object__o *_9__59_1; // x21
  Il2CppObject *v37; // x22
  struct ClassBoardController___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x8
  int32_t v42; // w2
  int v43; // w9
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  ClassBoardController___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_T__o *v46; // x20
  System_Action_object__o *_9__59_2; // x21
  Il2CppObject *v48; // x22
  struct ClassBoardController___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x8
  int32_t v53; // w2
  int v54; // w9
  System_Collections_Generic_IEnumerable_T__o *v55; // x0
  ClassBoardController___c_c *v56; // x8
  System_Collections_Generic_IEnumerable_T__o *v57; // x20
  System_Action_object__o *_9__59_3; // x21
  Il2CppObject *v59; // x22
  struct ClassBoardController___c_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x8
  int32_t v65; // w2
  int v66; // w9
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3

  if ( (byte_4B48245 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1BDB878(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_ClassBoardLine___, v4);
    sub_1BDB878(&Method_BasicHelper_ExcludeNull_ClassBoardSquare___, v5);
    sub_1BDB878(&Method_BasicHelper_ForEach_ClassBoardLine___, v6);
    sub_1BDB878(&Method_BasicHelper_ForEach_ClassBoardSquare___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare__Clear__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine__Clear__, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&Method_ClassBoardController___c__Release_b__59_0__, v11);
    sub_1BDB878(&Method_ClassBoardController___c__Release_b__59_1__, v12);
    sub_1BDB878(&Method_ClassBoardController___c__Release_b__59_2__, v13);
    sub_1BDB878(&Method_ClassBoardController___c__Release_b__59_3__, v14);
    sub_1BDB878(&ClassBoardController___c_TypeInfo, v15);
    byte_4B48245 = 1;
  }
  v16 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                  this,
                                  this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                       this,
                                       this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v17 )
      goto LABEL_56;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
  }
  v20 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._7_get_ClassBoardFigureController.method)(
                                  this,
                                  this->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0LL, 0LL) )
  {
    v17 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._7_get_ClassBoardFigureController.method)(
                                       this,
                                       this->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
    if ( !v17 )
      goto LABEL_56;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v17, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70284200(v21, 0LL);
  }
  v22 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.squareViewList,
          (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v23 = ClassBoardController___c_TypeInfo;
  v24 = v22;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v23 = ClassBoardController___c_TypeInfo;
  }
  _9__59_0 = (System_Action_object__o *)v23->static_fields->__9__59_0;
  if ( !_9__59_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = ClassBoardController___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__59_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__59_0, v26, Method_ClassBoardController___c__Release_b__59_0__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__59_0 = (struct System_Action_ClassBoardSquare__o *)_9__59_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__59_0, (int32_t)_9__59_0, v28, v29);
  }
  BasicHelper__ForEach_object_(
    v24,
    (System_Action_T__o *)_9__59_0,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  squareViewList = this->fields.squareViewList;
  if ( !squareViewList )
    goto LABEL_56;
  size = squareViewList->fields._size;
  v32 = squareViewList->fields._version + 1;
  squareViewList->fields._size = 0;
  squareViewList->fields._version = v32;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)squareViewList->fields._items, 0, size, 0LL);
  v33 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.lineViewList,
          (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v34 = ClassBoardController___c_TypeInfo;
  v35 = v33;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v34 = ClassBoardController___c_TypeInfo;
  }
  _9__59_1 = (System_Action_object__o *)v34->static_fields->__9__59_1;
  if ( !_9__59_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ClassBoardController___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__59_1 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__59_1, v37, Method_ClassBoardController___c__Release_b__59_1__, 0LL);
    v38 = ClassBoardController___c_TypeInfo->static_fields;
    v38->__9__59_1 = (struct System_Action_ClassBoardLine__o *)_9__59_1;
    sub_1BDB81C((CGThumbnailListItem_o *)&v38->__9__59_1, (int32_t)_9__59_1, v39, v40);
  }
  BasicHelper__ForEach_object_(
    v35,
    (System_Action_T__o *)_9__59_1,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_ClassBoardLine___);
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
    goto LABEL_56;
  v42 = lineViewList->fields._size;
  v43 = lineViewList->fields._version + 1;
  lineViewList->fields._size = 0;
  lineViewList->fields._version = v43;
  if ( v42 >= 1 )
    System_Array__Clear((System_Array_o *)lineViewList->fields._items, 0, v42, 0LL);
  v44 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandSquareViewList,
          (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_ClassBoardSquare___);
  v45 = ClassBoardController___c_TypeInfo;
  v46 = v44;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v45 = ClassBoardController___c_TypeInfo;
  }
  _9__59_2 = (System_Action_object__o *)v45->static_fields->__9__59_2;
  if ( !_9__59_2 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = ClassBoardController___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__59_2 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(_9__59_2, v48, Method_ClassBoardController___c__Release_b__59_2__, 0LL);
    v49 = ClassBoardController___c_TypeInfo->static_fields;
    v49->__9__59_2 = (struct System_Action_ClassBoardSquare__o *)_9__59_2;
    sub_1BDB81C((CGThumbnailListItem_o *)&v49->__9__59_2, (int32_t)_9__59_2, v50, v51);
  }
  BasicHelper__ForEach_object_(
    v46,
    (System_Action_T__o *)_9__59_2,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_ClassBoardSquare___);
  GrandSquareViewList = this->fields.GrandSquareViewList;
  if ( !GrandSquareViewList )
    goto LABEL_56;
  v53 = GrandSquareViewList->fields._size;
  v54 = GrandSquareViewList->fields._version + 1;
  GrandSquareViewList->fields._size = 0;
  GrandSquareViewList->fields._version = v54;
  if ( v53 >= 1 )
    System_Array__Clear((System_Array_o *)GrandSquareViewList->fields._items, 0, v53, 0LL);
  v55 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.GrandLineViewList,
          (const MethodInfo_301D750 *)Method_BasicHelper_ExcludeNull_ClassBoardLine___);
  v56 = ClassBoardController___c_TypeInfo;
  v57 = v55;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    v56 = ClassBoardController___c_TypeInfo;
  }
  _9__59_3 = (System_Action_object__o *)v56->static_fields->__9__59_3;
  if ( !_9__59_3 )
  {
    if ( !v56->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v56);
      v56 = ClassBoardController___c_TypeInfo;
    }
    v59 = (Il2CppObject *)v56->static_fields->__9;
    _9__59_3 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(_9__59_3, v59, Method_ClassBoardController___c__Release_b__59_3__, 0LL);
    v60 = ClassBoardController___c_TypeInfo->static_fields;
    v60->__9__59_3 = (struct System_Action_ClassBoardLine__o *)_9__59_3;
    sub_1BDB81C((CGThumbnailListItem_o *)&v60->__9__59_3, (int32_t)_9__59_3, v61, v62);
  }
  BasicHelper__ForEach_object_(
    v57,
    (System_Action_T__o *)_9__59_3,
    (const MethodInfo_301FA1C *)Method_BasicHelper_ForEach_ClassBoardLine___);
  GrandLineViewList = this->fields.GrandLineViewList;
  if ( !GrandLineViewList )
    goto LABEL_56;
  v65 = GrandLineViewList->fields._size;
  v66 = GrandLineViewList->fields._version + 1;
  GrandLineViewList->fields._size = 0;
  GrandLineViewList->fields._version = v66;
  if ( v65 >= 1 )
    System_Array__Clear((System_Array_o *)GrandLineViewList->fields._items, 0, v65, 0LL);
  this->fields.effectController = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.effectController, 0, v65, v63);
  this->fields.GrandEffectController = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.GrandEffectController, 0, v67, v68);
  this->fields.background = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.background, 0, v69, v70);
  v17 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                                     this,
                                     this->klass->vtable._7_get_ClassBoardFigureController.methodPtr);
  if ( !v17
    || (ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v17, 0LL),
        (v17 = (UnityEngine_Component_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._9_get_GrandBuilder.method)(
                                            this,
                                            this->klass->vtable._10_SetupClassBoardUIController.methodPtr)) == 0LL) )
  {
LABEL_56:
    sub_1BDBAD4(v17, v18);
  }
  ClassBoardModelBuilder__Clear((ClassBoardModelBuilder_o *)v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall ClassBoardController__ResetClassBoardCameraCoroutine(
        ClassBoardController_o *this,
        float sec,
        int32_t easingType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B48260 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardController__ResetClassBoardCameraCoroutine_d__91_TypeInfo, *(_QWORD *)&easingType);
    byte_4B48260 = 1;
  }
  v9 = sub_1BDBAC4(ClassBoardController__ResetClassBoardCameraCoroutine_d__91_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(float *)(v9 + 40) = sec;
  *(_DWORD *)(v9 + 44) = easingType;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall ClassBoardController__SetDirectlyBackAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.directlyBackAction = action;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.directlyBackAction, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardController__SetOnClickBack(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  CGThumbnailListItem_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B48246 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, action);
    byte_4B48246 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = (CGThumbnailListItem_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                    this,
                                    this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v6 )
      sub_1BDBAD4(0LL, v7);
    v6[1].klass = (CGThumbnailListItem_c *)action;
    sub_1BDB81C(v6 + 1, (int32_t)action, v8, v9);
  }
}


void __fastcall ClassBoardController__SetOnClickToGrandServantList(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B48248 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, action);
    byte_4B48248 = 1;
  }
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_get_classBoardUIController.method)(
                                 this,
                                 this->klass->vtable._5_set_classBoardUIController.methodPtr,
                                 method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
           this,
           this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !v6 )
      goto LABEL_14;
    *(_QWORD *)(v6 + 184) = action;
    sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 184), (int32_t)action, v8, v9);
  }
  v10 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._7_get_ClassBoardFigureController.method)(
                                  this,
                                  this->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
  {
    v6 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._7_get_ClassBoardFigureController.method)(
           this,
           this->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
    if ( v6 )
    {
      *(_QWORD *)(v6 + 152) = action;
      sub_1BDB81C((CGThumbnailListItem_o *)(v6 + 152), (int32_t)action, v11, v12);
      return;
    }
LABEL_14:
    sub_1BDBAD4(v6, v7);
  }
}


void __fastcall ClassBoardController__SetToClassBoardSelectAction(
        ClassBoardController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.toClassBoardSelectAction = action;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.toClassBoardSelectAction, (int32_t)action, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__Setup(
        ClassBoardController_o *this,
        IClassBoardResourceCatalog_o *setResourceCatalog,
        ClassBoardBackground_o *classBoardBackground,
        int32_t baseId,
        int32_t iconId,
        bool isDirectlyMoveGrandBoard,
        bool isPlayEffectGrandBoard,
        const MethodInfo *method)
{
  bool v14; // w26
  bool v15; // w25
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  MapCamera_o *mapCamera; // x0
  UnityEngine_Texture_o *RenderTexture; // x24
  __int64 v27; // x1
  const MethodInfo_37F9FB0 *v28; // x2
  MapCamera_o *v29; // x24
  BalanceConfig_c *v30; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Action_o *v33; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  struct System_Collections_Generic_List_ClassBoardSquare__o *squareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *lineViewList; // x23
  MapCamera_o *v40; // x24
  ClassBoardEffectController_o *v41; // x25
  const MethodInfo *v42; // x5
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  ClassBoardController_c *klass; // x8
  System_Nullable_Vector3__o v47; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_float__o size; // [xsp+18h] [xbp-58h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v50; // 0:x3.8
  System_Nullable_Vector3__o v51; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v14 = isDirectlyMoveGrandBoard;
  v15 = isPlayEffectGrandBoard;
  if ( (byte_4B48243 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, setResourceCatalog);
    sub_1BDB878(&BalanceConfig_TypeInfo, v16);
    sub_1BDB878(&Method_ClassBoardController_ShowBoard__, v17);
    sub_1BDB878(&ClassBoardEffectController_TypeInfo, v18);
    sub_1BDB878(&Method_System_Nullable_Vector3___ctor__, v19);
    sub_1BDB878(&Method_System_Nullable_float___ctor__, v20);
    sub_1BDB878(&StringLiteral_12896/*"Sony SO-41B"*/, v21);
    byte_4B48243 = 1;
  }
  this->fields.baseId = baseId;
  this->fields.resourceCatalog = setResourceCatalog;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.resourceCatalog,
    (int32_t)setResourceCatalog,
    (int32_t)classBoardBackground,
    *(const MethodInfo **)&baseId);
  this->fields.background = classBoardBackground;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.background, (int32_t)classBoardBackground, v22, v23);
  mapCamera = this->fields.mapCamera;
  this->fields.CurrentBoardType = 1;
  this->fields.isPlayFullReleaseEffect = 0;
  this->fields.isDirectlyGrandBoard = v14;
  this->fields.isPlayEffectToGrandBoard = v15;
  if ( !mapCamera )
    goto LABEL_22;
  MapCamera__Init(mapCamera, 0LL);
  if ( !classBoardBackground )
    goto LABEL_22;
  ClassBoardBackground__UseClassBoardViewCamera(classBoardBackground, 0LL);
  ClassBoardBackground__ActivateEarthAccessories(classBoardBackground, 1, 0LL);
  RenderTexture = (UnityEngine_Texture_o *)ClassBoardBackground__GetRenderTexture(classBoardBackground, 0LL);
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_maxTextureSize(0LL);
  if ( (int)mapCamera <= 4096 )
    goto LABEL_8;
  mapCamera = (MapCamera_o *)UnityEngine_SystemInfo__get_deviceModel(0LL);
  if ( !mapCamera )
    goto LABEL_22;
  mapCamera = (MapCamera_o *)System_String__Equals_62607564(
                               (System_String_o *)mapCamera,
                               (System_String_o *)StringLiteral_12896/*"Sony SO-41B"*/,
                               0LL);
  if ( ((unsigned __int8)mapCamera & 1) != 0 )
  {
LABEL_8:
    if ( !RenderTexture )
      goto LABEL_22;
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, Il2CppMethodPointer))RenderTexture->klass->vtable._5_set_width.method)(
      RenderTexture,
      4096LL,
      RenderTexture->klass->vtable._6_get_height.methodPtr);
    ((void (__fastcall *)(UnityEngine_Texture_o *, __int64, Il2CppMethodPointer))RenderTexture->klass->vtable._7_set_height.method)(
      RenderTexture,
      2367LL,
      RenderTexture->klass->vtable._8_set_dimension.methodPtr);
  }
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_22;
  MapCamera__SetMapTexture(mapCamera, RenderTexture, 2491, 1440, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !mapCamera )
    goto LABEL_22;
  MapCamera__SetEnable(mapCamera, 1, 0LL);
  v29 = this->fields.mapCamera;
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v27);
    byte_4B3E911 = 1;
  }
  *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v51.fields.hasValue = &v47;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&v47.fields.hasValue = 0LL;
  *(_QWORD *)&v47.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v51, zeroVector, v28);
  v30 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v30 = BalanceConfig_TypeInfo;
  }
  static_fields = v30->static_fields;
  p_size = (System_Nullable_float__o)&size;
  ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
  size = 0LL;
  System_Nullable_float____ctor(
    p_size,
    ClassBoard2DCameraDefaultSize,
    (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
  if ( !v29 )
    goto LABEL_22;
  v50 = size;
  MapCamera__StartAutoWork(v29, 0.0, v47, v50, 0, 0LL, 0LL);
  ClassBoardGlobalObject__SetCamera(this->fields.mapCamera, 0LL);
  v33 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_ClassBoardController_ShowBoard__, 0LL);
  classBoardBackground->fields.showBoardCallback = v33;
  sub_1BDB81C((CGThumbnailListItem_o *)&classBoardBackground->fields.showBoardCallback, (int32_t)v33, v34, v35);
  ClassBoardBackground__SetClassIcon(classBoardBackground, baseId, iconId, 0LL);
  ClassBoardBackground__SetBoardParentAnimation(
    classBoardBackground,
    this->fields.boardParentAnimation,
    this->fields.isPlayEffectToGrandBoard,
    0LL);
  mapCamera = (MapCamera_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._6_get_builder.method)(
                               this,
                               this->klass->vtable._7_get_ClassBoardFigureController.methodPtr);
  if ( !mapCamera )
LABEL_22:
    sub_1BDBAD4(mapCamera, v24);
  ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)mapCamera, baseId, 0LL);
  ClassBoardController__CreateViews(this, 0, v36);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._11_SetupSquareOnClickListener.method)(
    this,
    0LL,
    this->klass->vtable._12_SetupSquareOnClickListener.methodPtr);
  ((void (__fastcall *)(ClassBoardController_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._10_SetupClassBoardUIController.method)(
    this,
    (unsigned int)baseId,
    this->klass->vtable._11_SetupSquareOnClickListener.methodPtr);
  ClassBoardController__SetOnClickBack(this, this->fields.toClassBoardSelectAction, v37);
  squareViewList = this->fields.squareViewList;
  lineViewList = this->fields.lineViewList;
  v40 = this->fields.mapCamera;
  v41 = (ClassBoardEffectController_o *)sub_1BDBAC4(ClassBoardEffectController_TypeInfo);
  ClassBoardEffectController___ctor(
    v41,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)squareViewList,
    (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)lineViewList,
    v40,
    classBoardBackground,
    v42);
  this->fields.effectController = v41;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.effectController, (int32_t)v41, v43, v44);
  ClassBoardController__SetupGrandClassBoard(this, classBoardBackground, v45);
  klass = this->klass;
  if ( isDirectlyMoveGrandBoard )
    ((void (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))klass->vtable._14_PlayDirectlyGrandBoardOpenEffect.method)(
      this,
      klass->vtable._15_SetupClassBoardFigureController.methodPtr);
  else
    ((void (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))klass->vtable._13_PlayClassBoardStartEffect.method)(
      this,
      klass->vtable._14_PlayDirectlyGrandBoardOpenEffect.methodPtr);
}


void __fastcall ClassBoardController__SetupClassBoardFigureController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardController_o *v2; // x19
  __int64 v3; // x1
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x20
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v6; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *effectController; // x20
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 grandUserSvtId; // x20
  bool v15; // cc
  ClassBoardController_o *v16; // x20

  v2 = this;
  if ( (byte_4B48266 & 1) == 0 )
  {
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___, method);
    this = (ClassBoardController_o *)sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v3);
    byte_4B48266 = 1;
  }
  resourceCatalog = v2->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_19;
  klass = resourceCatalog->klass;
  v6 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(v2->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                     resourceCatalog,
                                     *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_19;
  if ( !v2->fields.GrandBoardRoot )
    goto LABEL_19;
  effectController = (Il2CppObject *)this->fields.effectController;
  transform = UnityEngine_GameObject__get_transform(v2->fields.GrandBoardRoot, 0LL);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v2,
                    effectController,
                    transform,
                    0LL,
                    (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardFigureController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, Il2CppMethodPointer))v2->klass->vtable._8_set_ClassBoardFigureController.method)(
    v2,
    Object_object,
    v2->klass->vtable._9_get_GrandBuilder.methodPtr);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v2->klass->vtable._7_get_ClassBoardFigureController.method)(
                                     v2,
                                     v2->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
  if ( !this )
    goto LABEL_19;
  this->fields._builder_k__BackingField = (struct ClassBoardModelBuilder_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._builder_k__BackingField, (int32_t)v2, v12, v13);
  grandUserSvtId = v2->fields.grandUserSvtId;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v2->klass->vtable._7_get_ClassBoardFigureController.method)(
                                     v2,
                                     v2->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
  v15 = grandUserSvtId < 1;
  v16 = this;
  if ( !v15 )
  {
    if ( this )
    {
      ClassBoardFigureController__SetSvtFigure(
        (ClassBoardFigureController_o *)this,
        v2->fields.grandUserSvtId,
        0LL,
        0LL);
      return;
    }
LABEL_19:
    sub_1BDBAD4(this, method);
  }
  this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !v16 )
    goto LABEL_19;
  ClassBoardFigureController__SetServantSelectSprite(
    (ClassBoardFigureController_o *)v16,
    (AtlasManagerUnit_o *)this,
    0LL);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v2->klass->vtable._7_get_ClassBoardFigureController.method)(
                                     v2,
                                     v2->klass->vtable._8_set_ClassBoardFigureController.methodPtr);
  if ( !this )
    goto LABEL_19;
  ClassBoardFigureController__SetServantSelectObj(
    (ClassBoardFigureController_o *)this,
    v2->fields.grandBaseId,
    v2->fields.grandUserSvtId == 0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__SetupClassBoardUIController(
        ClassBoardController_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardController_o *v4; // x19
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
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x21
  IClassBoardResourceCatalog_c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *Object_object; // x0
  __int64 v22; // x21
  System_Action_o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x21
  System_Action_o *v27; // x22
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x21
  System_Action_o *v31; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x21
  System_Action_o *v35; // x22
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  ClassBoardUIController_o *v38; // x21
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x22
  const MethodInfo *v40; // x2
  ClassBoardUIController_o *v41; // x20
  AtlasManagerUnit_o *v42; // x21
  Il2CppClass *v43; // x20
  ClassBoardController_o *v44; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B4824E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&baseId);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardUIController___, v5);
    sub_1BDB878(&Method_ClassBoardController_OnClickEffectList__, v6);
    sub_1BDB878(&Method_ClassBoardController_OnClickGrandScoreButton__, v7);
    sub_1BDB878(&Method_ClassBoardController_OnClickHelp__, v8);
    sub_1BDB878(&Method_ClassBoardController_OnClickShop18Button__, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v10);
    sub_1BDB878(&DataManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v12);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v13);
    sub_1BDB878(&LocalizationManager_TypeInfo, v14);
    this = (ClassBoardController_o *)sub_1BDB878(&StringLiteral_3437/*"CLASS_BOARD_HEADER_MESSAGE"*/, v15);
    byte_4B4824E = 1;
  }
  entity = 0LL;
  resourceCatalog = v4->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_31;
  klass = resourceCatalog->klass;
  v18 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)p_offset - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(v4->fields.resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  this = (ClassBoardController_o *)(*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                                     resourceCatalog,
                                     *(_QWORD *)(p_method + 8));
  if ( !this )
    goto LABEL_31;
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v4,
                    (Il2CppObject *)this->fields.lineViewList,
                    v4->fields.uiRoot,
                    0LL,
                    (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardUIController___);
  ((void (__fastcall *)(ClassBoardController_o *, Il2CppObject *, Il2CppMethodPointer))v4->klass->vtable._5_set_classBoardUIController.method)(
    v4,
    Object_object,
    v4->klass->vtable._6_get_builder.methodPtr);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                     v4,
                                     v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !this )
    goto LABEL_31;
  ClassBoardUIController__Init((ClassBoardUIController_o *)this, 0LL);
  v22 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v23 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v4, Method_ClassBoardController_OnClickHelp__, 0LL);
  if ( !v22 )
    goto LABEL_31;
  *(_QWORD *)(v22 + 144) = v23;
  sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 144), (int32_t)v23, v24, v25);
  v26 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v27 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v4, Method_ClassBoardController_OnClickEffectList__, 0LL);
  if ( !v26 )
    goto LABEL_31;
  *(_QWORD *)(v26 + 152) = v27;
  sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 152), (int32_t)v27, v28, v29);
  v30 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v31 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)v4, Method_ClassBoardController_OnClickGrandScoreButton__, 0LL);
  if ( !v30 )
    goto LABEL_31;
  *(_QWORD *)(v30 + 160) = v31;
  sub_1BDB81C((CGThumbnailListItem_o *)(v30 + 160), (int32_t)v31, v32, v33);
  v34 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
          v4,
          v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v35 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v4, Method_ClassBoardController_OnClickShop18Button__, 0LL);
  if ( !v34 )
    goto LABEL_31;
  *(_QWORD *)(v34 + 168) = v35;
  sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 168), (int32_t)v35, v36, v37);
  v38 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                      v4,
                                      v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  this = (ClassBoardController_o *)ClassBoardController__GetHeaderSpriteName(
                                     (ClassBoardController_o *)UiAtlasManagerUnit,
                                     baseId,
                                     v40);
  if ( !v38 )
    goto LABEL_31;
  ClassBoardUIController__SetHeaderTitle(v38, UiAtlasManagerUnit, (System_String_o *)this, 0LL);
  v41 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                      v4,
                                      v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  v42 = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (ClassBoardController_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3437/*"CLASS_BOARD_HEADER_MESSAGE"*/, 0LL);
  if ( !v41 )
    goto LABEL_31;
  ClassBoardUIController__SetHeaderMessage(v41, v42, (System_String_o *)this, 0, 0, 0LL);
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                     v4,
                                     v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !this )
    goto LABEL_31;
  ClassBoardUIController__ActivateToGrandServantListButton((ClassBoardUIController_o *)this, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ClassBoardController_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !this )
    goto LABEL_31;
  this = (ClassBoardController_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     &entity,
                                     v4->fields.baseId,
                                     (const MethodInfo_32E1E88 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_31;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)entity[4].klass, 0LL) )
    return;
  this = (ClassBoardController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))v4->klass->vtable._4_get_classBoardUIController.method)(
                                     v4,
                                     v4->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !entity
    || (v43 = entity[4].klass,
        v44 = this,
        this = (ClassBoardController_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL),
        !v44) )
  {
LABEL_31:
    sub_1BDBAD4(this, *(_QWORD *)&baseId);
  }
  ClassBoardUIController__SetItemList(
    (ClassBoardUIController_o *)v44,
    (System_Int32_array *)v43,
    (AtlasManagerUnit_o *)this,
    0,
    0LL);
}


void __fastcall ClassBoardController__SetupGrandClassBoard(
        ClassBoardController_o *this,
        ClassBoardBackground_o *classBoardBackground,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ClassBoardBaseMaster_o *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  ClassBoardBaseEntity_o *GrandClassBoardBaseEntity; // x21
  ClassBoardController_c *klass; // x9
  __int64 v14; // x0
  int32_t grandBaseId; // w22
  ClassBoardUIController_o *v16; // x23
  const MethodInfo *v17; // x2
  GrandGraphEntity_o *EntityByParentClassBoardBaseId; // x0
  GrandGraphEntity_o *v19; // x22
  UserServantGrandEntity_o *EntityFromGrandGraphId; // x0
  int64_t userSvtId; // x8
  struct System_Collections_Generic_List_ClassBoardSquare__o *GrandSquareViewList; // x22
  struct System_Collections_Generic_List_ClassBoardLine__o *GrandLineViewList; // x23
  MapCamera_o *mapCamera; // x24
  ClassBoardEffectController_o *v25; // x25
  const MethodInfo *v26; // x5
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4B48244 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardEffectController_TypeInfo, classBoardBackground);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    byte_4B48244 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_25;
  GrandClassBoardBaseEntity = ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                Master_object,
                                this->fields.baseId,
                                0LL);
  if ( GrandClassBoardBaseEntity )
  {
    klass = this->klass;
    this->fields.grandBaseId = GrandClassBoardBaseEntity->fields.id;
    v14 = ((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))klass->vtable._4_get_classBoardUIController.method)(
            this,
            klass->vtable._5_set_classBoardUIController.methodPtr);
    grandBaseId = this->fields.grandBaseId;
    v16 = (ClassBoardUIController_o *)v14;
    Master_object = (ClassBoardBaseMaster_o *)ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
    if ( !v16 )
      goto LABEL_25;
    ClassBoardUIController__SetGrandScoreButton(v16, grandBaseId, (AtlasManagerUnit_o *)Master_object, 0LL);
    if ( ClassBoardBaseEntity__IsOpen(GrandClassBoardBaseEntity, 0LL) )
    {
      Master_object = (ClassBoardBaseMaster_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._9_get_GrandBuilder.method)(
                                                  this,
                                                  this->klass->vtable._10_SetupClassBoardUIController.methodPtr);
      if ( Master_object )
      {
        ClassBoardModelBuilder__Make((ClassBoardModelBuilder_o *)Master_object, this->fields.grandBaseId, 0LL);
        ClassBoardController__CreateViews(this, 1, v17);
        this->fields.grandUserSvtId = -1LL;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphMaster___);
        if ( Master_object )
        {
          EntityByParentClassBoardBaseId = GrandGraphMaster__GetEntityByParentClassBoardBaseId(
                                             (GrandGraphMaster_o *)Master_object,
                                             this->fields.baseId,
                                             0LL);
          if ( EntityByParentClassBoardBaseId )
          {
            v19 = EntityByParentClassBoardBaseId;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            Master_object = (ClassBoardBaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
            if ( !Master_object )
              goto LABEL_25;
            EntityFromGrandGraphId = UserServantGrandMaster__GetEntityFromGrandGraphId(
                                       (UserServantGrandMaster_o *)Master_object,
                                       v19->fields.id,
                                       0LL);
            if ( EntityFromGrandGraphId )
              userSvtId = EntityFromGrandGraphId->fields.userSvtId;
            else
              userSvtId = -1LL;
            this->fields.grandUserSvtId = userSvtId;
          }
          Master_object = (ClassBoardBaseMaster_o *)((__int64 (__fastcall *)(ClassBoardController_o *, void *))this->klass->vtable._15_SetupClassBoardFigureController.method)(
                                                      this,
                                                      this->klass[1]._1.image);
          if ( classBoardBackground )
          {
            ClassBoardBackground__SetGrandClassIcon(classBoardBackground, GrandClassBoardBaseEntity->fields.iconId, 0LL);
            LOBYTE(GrandClassBoardBaseEntity) = 1;
            ((void (__fastcall *)(ClassBoardController_o *, __int64, Il2CppMethodPointer))this->klass->vtable._11_SetupSquareOnClickListener.method)(
              this,
              1LL,
              this->klass->vtable._12_SetupSquareOnClickListener.methodPtr);
            GrandSquareViewList = this->fields.GrandSquareViewList;
            GrandLineViewList = this->fields.GrandLineViewList;
            mapCamera = this->fields.mapCamera;
            v25 = (ClassBoardEffectController_o *)sub_1BDBAC4(ClassBoardEffectController_TypeInfo);
            ClassBoardEffectController___ctor(
              v25,
              (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)GrandSquareViewList,
              (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)GrandLineViewList,
              mapCamera,
              classBoardBackground,
              v26);
            this->fields.GrandEffectController = v25;
            sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.GrandEffectController, (int32_t)v25, v27, v28);
            goto LABEL_24;
          }
        }
      }
LABEL_25:
      sub_1BDBAD4(Master_object, v10);
    }
    LOBYTE(GrandClassBoardBaseEntity) = 1;
  }
LABEL_24:
  ClassBoardController__HideGrandBoardObj(this, (bool)GrandClassBoardBaseEntity, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController__SetupSquareOnClickListener(
        ClassBoardController_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  System_Collections_Generic_List_object__o *v10; // x0
  Il2CppObject *current; // x20
  System_Action_object__o *v12; // x0
  __int64 v13; // x1
  System_Action_ClassBoardSquare__o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B48250 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_ClassBoardSquare__TypeInfo, isGrand);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v8);
    byte_4B48250 = 1;
  }
  v9 = 112LL;
  memset(&v17, 0, sizeof(v17));
  if ( isGrand )
    v9 = 240LL;
  v10 = *(System_Collections_Generic_List_object__o **)((char *)&this->klass + v9);
  if ( !v10 )
    sub_1BDBAD4(0LL, isGrand);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    v10,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__) )
  {
    current = v17.fields._current;
    v12 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardSquare__TypeInfo);
    if ( !this )
      sub_1BDBAD4(v12, v13);
    v14 = (System_Action_ClassBoardSquare__o *)v12;
    System_Action_object____ctor(
      v12,
      (Il2CppObject *)this,
      (intptr_t)this->klass->vtable._13_PlayClassBoardStartEffect.methodPtr,
      0LL);
    if ( !current )
      sub_1BDBAD4(v15, v16);
    ClassBoardSquare__AddClickedListener((ClassBoardSquare_o *)current, v14, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
}


void __fastcall ClassBoardController__SetupSquareOnClickListener_46625948(
        ClassBoardController_o *this,
        ClassBoardSquare_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 *v17; // x22
  __int64 v18; // x8
  __int64 v19; // x9
  IClassBoardSquareModel_c **v20; // x10
  __int64 v21; // x0
  _QWORD *v22; // x8
  __int64 methodPtr_low; // x11
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
  __int64 *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x9
  IClassBoardSquareModel_c **v37; // x10
  __int64 v38; // x0
  char v39; // w0
  const MethodInfo *v40; // x3
  ClassBoardSquare_o *v41; // x21
  System_Action_o *v42; // x22
  const MethodInfo *v43; // x3

  if ( (byte_4B48251 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, square);
    sub_1BDB878(&ClassBoardLock_TypeInfo, v5);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v6);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__1__, v7);
    sub_1BDB878(&ClassBoardController___c__DisplayClass75_0_TypeInfo, v8);
    byte_4B48251 = 1;
  }
  v9 = sub_1BDBAC4(ClassBoardController___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_50;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = square;
  v14 = (__int64 *)(v9 + 32);
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)square, v15, v16);
  if ( !*(_QWORD *)(v9 + 32) )
    goto LABEL_50;
  v17 = *(__int64 **)(*(_QWORD *)(v9 + 32) + 184LL);
  if ( !v17 )
    goto LABEL_50;
  v18 = *v17;
  v19 = *(unsigned __int16 *)(*v17 + 302);
  if ( *(_WORD *)(*v17 + 302) )
  {
    v20 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v18 + 176) + 8LL);
    while ( *(v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 2;
      if ( !v19 )
        goto LABEL_10;
    }
    v21 = v18 + 16LL * (*(_DWORD *)v20 + 15) + 312;
  }
  else
  {
LABEL_10:
    v21 = sub_1C2C00C(v17, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))v21)(v17, 0LL, *(_QWORD *)(v21 + 8));
  *(_DWORD *)(v9 + 16) = v10;
  if ( (v10 & 1) != 0 )
  {
    v22 = (_QWORD *)*v14;
    if ( *v14 )
    {
      methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v22 + 304LL) >= (unsigned int)methodPtr_low
        && *(ClassBoardLock_c **)(*(_QWORD *)(*v22 + 200LL) + 8 * methodPtr_low - 8) == ClassBoardLock_TypeInfo )
      {
        return;
      }
      goto LABEL_19;
    }
  }
  else
  {
    v22 = (_QWORD *)*v14;
  }
  if ( !v22 )
    goto LABEL_50;
LABEL_19:
  v24 = (__int64 *)v22[23];
  if ( !v24 )
    goto LABEL_50;
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
        goto LABEL_24;
    }
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 5) + 312;
  }
  else
  {
LABEL_24:
    v28 = sub_1C2C00C(v24, IClassBoardSquareModel_TypeInfo, 5LL);
  }
  v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
  if ( (v10 & 1) == 0 )
  {
    if ( *v14 )
    {
      v29 = *(__int64 **)(*v14 + 184);
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
              goto LABEL_34;
          }
          v33 = v30 + 16LL * (*(_DWORD *)v32 + 12) + 312;
        }
        else
        {
LABEL_34:
          v33 = sub_1C2C00C(v29, IClassBoardSquareModel_TypeInfo, 12LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) != 0
          && this->fields.grandUserSvtId < 1 )
        {
          return;
        }
        v10 = *v14;
        if ( *v14 )
        {
          ClassBoardSquare__SetSelectedEffectActive((ClassBoardSquare_o *)v10, 1, 0LL);
          if ( *v14 )
          {
            v34 = *(__int64 **)(*v14 + 184);
            if ( v34 )
            {
              v35 = *v34;
              v36 = *(unsigned __int16 *)(*v34 + 302);
              if ( *(_WORD *)(*v34 + 302) )
              {
                v37 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *(v37 - 1) != IClassBoardSquareModel_TypeInfo )
                {
                  --v36;
                  v37 += 2;
                  if ( !v36 )
                    goto LABEL_45;
                }
                v38 = v35 + 16LL * (*(_DWORD *)v37 + 12) + 312;
              }
              else
              {
LABEL_45:
                v38 = sub_1C2C00C(v34, IClassBoardSquareModel_TypeInfo, 12LL);
              }
              v39 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8));
              v41 = (ClassBoardSquare_o *)*v14;
              if ( (v39 & 1) != 0 )
              {
                ClassBoardController__CallbackSquareOnClick(this, v41, *(_DWORD *)(v9 + 16), v40);
              }
              else
              {
                v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                System_Action___ctor(
                  v42,
                  (Il2CppObject *)v9,
                  Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__1__,
                  0LL);
                ClassBoardController__PlayMoveCamera(this, v41, v42, v43);
              }
              return;
            }
          }
        }
      }
    }
LABEL_50:
    sub_1BDBAD4(v10, v11);
  }
}


void __fastcall ClassBoardController__ShowBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = ClassBoardController__ShowBoardCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__ShowBoardCoroutine(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B4825D & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardController__ShowBoardCoroutine_d__88_TypeInfo, method);
    byte_4B4825D = 1;
  }
  v3 = sub_1BDBAC4(ClassBoardController__ShowBoardCoroutine_d__88_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall ClassBoardController__ShowGrandBoard(ClassBoardController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *IsMatchPosAndZoomSize; // x0
  const MethodInfo *v6; // x1
  MapCamera_o *mapCamera; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  const MethodInfo_37F9FB0 *v12; // x2
  struct ClassBoardBackground_o *background; // x8
  float cameraResetSec; // s8
  int32_t cameraResetEasingType; // w20
  MapCamera_o *v16; // x21
  BalanceConfig_c *v17; // x0
  struct BalanceConfig_StaticFields *v18; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  System_Nullable_float__o size; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector3__o v21; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v23; // 0:x3.8
  System_Nullable_Vector3__o v24; // 0:x0.16
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B4825F & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_System_Nullable_Vector3___ctor__, v3);
    sub_1BDB878(&Method_System_Nullable_float___ctor__, v4);
    byte_4B4825F = 1;
  }
  IsMatchPosAndZoomSize = (BalanceConfig_c *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                               this,
                                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !IsMatchPosAndZoomSize )
    goto LABEL_23;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)IsMatchPosAndZoomSize, 1, 0LL);
  IsMatchPosAndZoomSize = (BalanceConfig_c *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                               this,
                                               this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !IsMatchPosAndZoomSize )
    goto LABEL_23;
  ClassBoardUIController__TouchDisable((ClassBoardUIController_o *)IsMatchPosAndZoomSize, 0LL);
  mapCamera = this->fields.mapCamera;
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v6);
    byte_4B3E911 = 1;
  }
  IsMatchPosAndZoomSize = BalanceConfig_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !mapCamera )
    goto LABEL_23;
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  IsMatchPosAndZoomSize = (BalanceConfig_c *)MapCamera__IsMatchPosAndZoomSize(
                                               mapCamera,
                                               v25,
                                               BalanceConfig_TypeInfo->static_fields->ClassBoard2DCameraDefaultSize,
                                               0LL);
  if ( ((unsigned __int8)IsMatchPosAndZoomSize & 1) == 0 )
  {
    background = this->fields.background;
    if ( this->fields.isDirectlyGrandBoard )
    {
      cameraResetSec = 0.0;
      if ( !background )
        goto LABEL_23;
    }
    else
    {
      if ( !background )
        goto LABEL_23;
      cameraResetSec = background->fields.cameraResetSec;
    }
    cameraResetEasingType = background->fields.cameraResetEasingType;
    v16 = this->fields.mapCamera;
    if ( !byte_4B3E911 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v6);
      byte_4B3E911 = 1;
    }
    *(_QWORD *)&v24.fields.hasValue = &v21;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v24.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v21.fields.hasValue = 0LL;
    *(_QWORD *)&v21.fields.value.fields.y = 0LL;
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
    size = 0LL;
    System_Nullable_float____ctor(
      p_size,
      ClassBoard2DCameraDefaultSize,
      (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
    if ( v16 )
    {
      v23 = size;
      MapCamera__StartAutoWork(v16, cameraResetSec, v21, v23, cameraResetEasingType, 0LL, 0LL);
      goto LABEL_22;
    }
LABEL_23:
    sub_1BDBAD4(IsMatchPosAndZoomSize, v6);
  }
LABEL_22:
  ClassBoardController__PlayTransitionAnimation(this, v6);
}


void __fastcall ClassBoardController__Update(ClassBoardController_o *this, const MethodInfo *method)
{
  ;
}


System_Collections_IEnumerator_o *__fastcall ClassBoardController__WaitFinishedClassBoardStartEffect(
        ClassBoardController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B48256 & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_TypeInfo, callback);
    byte_4B48256 = 1;
  }
  v5 = sub_1BDBAC4(ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall ClassBoardController___EndPlayGrandReturnTransitionAnimation_b__96_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BDBAD4(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___EndPlayGrandTransitionAnimation_b__94_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B4826B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__EndPlayGrandTransitionAnimation_b__94_1__, v3);
    byte_4B4826B = 1;
  }
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_ClassBoardController__EndPlayGrandTransitionAnimation_b__94_1__,
    0LL);
  EventTutorialMaster__CheckTutorial(0, 100, v4, 0, 0, 0, 0, 0LL);
}


void __fastcall ClassBoardController___EndPlayGrandTransitionAnimation_b__94_1(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BDBAD4(0LL, v3);
  ClassBoardUIController__TouchEnable(v2, 0LL);
}


void __fastcall ClassBoardController___OnClickEffectList_b__65_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B4826A & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B4826A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseClassBoardEffectListDialog((CommonUI_o *)Instance, 0LL, 0LL),
        (Instance = (Il2CppObject *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                      this,
                                      this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v4);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)Instance, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__63_0(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BDBAD4(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___OnClickHelp_b__63_1(ClassBoardController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BDBAD4(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


void __fastcall ClassBoardController___PlayDirectlyGrandBoardOpenEffect_b__79_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardBackground_o *background; // x0

  background = this->fields.background;
  if ( !background
    || (ClassBoardBackground__CallAnimationEventBoardParent(background, 0LL),
        (background = this->fields.background) == 0LL) )
  {
    sub_1BDBAD4(background, method);
  }
  ClassBoardBackground__CallAnimationEventShowBoard(background, 0LL);
  this->fields.isFinishedClassScoreAnimation = 1;
}


void __fastcall ClassBoardController___ShowBoardCoroutine_b__88_0(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x0
  __int64 v3; // x1

  v2 = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardController_o *, Il2CppMethodPointer))this->klass->vtable._4_get_classBoardUIController.method)(
                                     this,
                                     this->klass->vtable._5_set_classBoardUIController.methodPtr);
  if ( !v2 )
    sub_1BDBAD4(0LL, v3);
  ClassBoardUIController__SetCameraWorkBlock(v2, 0, 0LL);
}


int32_t __fastcall ClassBoardController__get_BaseId(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.baseId;
}


ClassBoardFigureController_o *__fastcall ClassBoardController__get_ClassBoardFigureController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassBoardFigureController_k__BackingField;
}


ClassBoardModelBuilder_o *__fastcall ClassBoardController__get_GrandBuilder(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBuilder_k__BackingField;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *__fastcall ClassBoardController__get_LineViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *)this->fields.lineViewList;
}


MapCamera_o *__fastcall ClassBoardController__get_MapCamera(ClassBoardController_o *this, const MethodInfo *method)
{
  return this->fields.mapCamera;
}


System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *__fastcall ClassBoardController__get_SquareViewList(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *)this->fields.squareViewList;
}


ClassBoardModelBuilder_o *__fastcall ClassBoardController__get_builder(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._builder_k__BackingField;
}


ClassBoardUIController_o *__fastcall ClassBoardController__get_classBoardUIController(
        ClassBoardController_o *this,
        const MethodInfo *method)
{
  return this->fields._classBoardUIController_k__BackingField;
}


void __fastcall ClassBoardController__set_ClassBoardFigureController(
        ClassBoardController_o *this,
        ClassBoardFigureController_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClassBoardFigureController_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._ClassBoardFigureController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardController__set_classBoardUIController(
        ClassBoardController_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._classBoardUIController_k__BackingField = value;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields._classBoardUIController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardController__PlayGrandSquareAndLine_d__93___ctor(
        ClassBoardController__PlayGrandSquareAndLine_d__93_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardController__PlayGrandSquareAndLine_d__93__MoveNext(
        ClassBoardController__PlayGrandSquareAndLine_d__93_o *this,
        const MethodInfo *method)
{
  ClassBoardController__PlayGrandSquareAndLine_d__93_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x21
  float waitTime; // s8
  UnityEngine_WaitForSeconds_o *v14; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  bool result; // w0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  CGThumbnailListItem_o *v22; // x19
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+0h] [xbp-80h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+18h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4B48288 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__, v9);
    this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)sub_1BDB878(
                                                                     &UnityEngine_WaitForSeconds_TypeInfo,
                                                                     v10);
    byte_4B48288 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v25, 0, sizeof(v25));
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_33;
  }
  else
  {
    if ( _1__state == 1 )
    {
      v2->fields.__1__state = -1;
    }
    else
    {
      if ( _1__state )
        return 0;
      waitTime = v2->fields.waitTime;
      v2->fields.__1__state = -1;
      if ( waitTime > 0.0 )
      {
        v14 = (UnityEngine_WaitForSeconds_o *)sub_1BDBAC4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v14, waitTime, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v14;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BDB81C(p__2__current, (int32_t)v14, v16, v17);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
    if ( !_4__this )
      goto LABEL_33;
    this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)_4__this->fields.GrandBoardObjectsParent;
    if ( !this )
      goto LABEL_33;
    this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this,
                                                                     0LL);
    if ( !this )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  }
  this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)_4__this->fields.GrandBoardObjectsParent;
  if ( !this )
    goto LABEL_33;
  this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
  if ( !this )
    goto LABEL_33;
  if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
  {
    v2->fields.__2__current = 0LL;
    v22 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
    sub_1BDB81C(v22, 0, v19, v20);
    result = 1;
    LODWORD(v22[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return result;
  }
  if ( (_4__this->fields.grandUserSvtId & 0x8000000000000000LL) == 0 )
  {
    this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)_4__this->fields.GrandSquareViewList;
    if ( this )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v24,
        (System_Collections_Generic_List_object__o *)this,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
      for ( i = v24;
            System_Collections_Generic_List_Enumerator_object___MoveNext(
              &i,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
            ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
      {
        if ( !i.fields._current )
          sub_1BDBAD4(0LL, v21);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
      this = (ClassBoardController__PlayGrandSquareAndLine_d__93_o *)_4__this->fields.GrandLineViewList;
      if ( this )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v25,
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v25,
                  (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
        {
          if ( !v25.fields._current )
            sub_1BDBAD4(0LL, v23);
          ClassBoardLine__PlayTransition((ClassBoardLine_o *)v25.fields._current, 0, 0LL);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v25,
          (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
        return 0;
      }
    }
LABEL_33:
    sub_1BDBAD4(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardController__PlayGrandSquareAndLine_d__93__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardController__PlayGrandSquareAndLine_d__93__System_Collections_IEnumerator_Reset(
        ClassBoardController__PlayGrandSquareAndLine_d__93_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_ClassBoardController__PlayGrandSquareAndLine_d__93_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall ClassBoardController__PlayGrandSquareAndLine_d__93__System_Collections_IEnumerator_get_Current(
        ClassBoardController__PlayGrandSquareAndLine_d__93_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardController__PlayGrandSquareAndLine_d__93__System_IDisposable_Dispose(
        ClassBoardController__PlayGrandSquareAndLine_d__93_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController__ResetClassBoardCameraCoroutine_d__91___ctor(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardController__ResetClassBoardCameraCoroutine_d__91__MoveNext(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *this,
        const MethodInfo *method)
{
  const MethodInfo_37F9FB0 *v2; // x2
  ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct ClassBoardController_o *_4__this; // x21
  MapCamera_o *mapCamera; // x20
  float sec; // s8
  BalanceConfig_c *v10; // x0
  struct BalanceConfig_StaticFields *static_fields; // x8
  float ClassBoard2DCameraDefaultSize; // s0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Nullable_float__o size; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector3__o v18; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v20; // 0:x3.8
  System_Nullable_Vector3__o v21; // 0:x0.16
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B48289 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_System_Nullable_Vector3___ctor__, v4);
    this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *)sub_1BDB878(
                                                                             &Method_System_Nullable_float___ctor__,
                                                                             v5);
    byte_4B48289 = 1;
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
    if ( !byte_4B3E911 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
      byte_4B3E911 = 1;
    }
    *(_QWORD *)&v21.fields.hasValue = &v18;
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    *(_QWORD *)&v21.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
    *(_QWORD *)&v18.fields.hasValue = 0LL;
    *(_QWORD *)&v18.fields.value.fields.y = 0LL;
    System_Nullable_Vector3____ctor(v21, zeroVector, v2);
    v10 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v10 = BalanceConfig_TypeInfo;
    }
    static_fields = v10->static_fields;
    p_size = (System_Nullable_float__o)&size;
    ClassBoard2DCameraDefaultSize = static_fields->ClassBoard2DCameraDefaultSize;
    size = 0LL;
    System_Nullable_float____ctor(
      p_size,
      ClassBoard2DCameraDefaultSize,
      (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
    if ( !mapCamera )
LABEL_18:
      sub_1BDBAD4(this, method);
    v20 = size;
    MapCamera__StartAutoWork(mapCamera, sec, v18, v20, v3->fields.easingType, 0LL, 0LL);
  }
  this = (ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *)_4__this->fields.mapCamera;
  if ( !this )
    goto LABEL_18;
  if ( MapCamera__IsAutoWork((MapCamera_o *)this, 0LL) )
  {
    v3->fields.__2__current = 0LL;
    p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
    sub_1BDB81C(p__2__current, 0, v13, v14);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  ActionExtensions__Call(v3->fields.callback, 0LL);
  return 0;
}


Il2CppObject *__fastcall ClassBoardController__ResetClassBoardCameraCoroutine_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardController__ResetClassBoardCameraCoroutine_d__91__System_Collections_IEnumerator_Reset(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_ClassBoardController__ResetClassBoardCameraCoroutine_d__91_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall ClassBoardController__ResetClassBoardCameraCoroutine_d__91__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardController__ResetClassBoardCameraCoroutine_d__91__System_IDisposable_Dispose(
        ClassBoardController__ResetClassBoardCameraCoroutine_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController__ShowBoardCoroutine_d__88___ctor(
        ClassBoardController__ShowBoardCoroutine_d__88_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardController__ShowBoardCoroutine_d__88__MoveNext(
        ClassBoardController__ShowBoardCoroutine_d__88_o *this,
        const MethodInfo *method)
{
  ClassBoardController__ShowBoardCoroutine_d__88_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct ClassBoardController_o *_4__this; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  CGThumbnailListItem_o *p__2__current; // x20
  bool result; // w0
  __int64 v18; // x1
  System_Action_o *v19; // x20
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-40h] BYREF

  v2 = this;
  if ( (byte_4B4828A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController__ShowBoardCoroutine_b__88_0__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__get_Current__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__, v10);
    this = (ClassBoardController__ShowBoardCoroutine_d__88_o *)sub_1BDB878(
                                                                 &Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__,
                                                                 v11);
    byte_4B4828A = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v21, 0, sizeof(v21));
  if ( v2->fields.__1__state < 2u )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__88_o *)_4__this->fields.boardObjectsParent;
    if ( !this )
      goto LABEL_26;
    this = (ClassBoardController__ShowBoardCoroutine_d__88_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
    if ( !this )
      goto LABEL_26;
    if ( !UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0LL) )
    {
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BDB81C(p__2__current, 0, v13, v14);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    this = (ClassBoardController__ShowBoardCoroutine_d__88_o *)_4__this->fields.squareViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardSquare__GetEnumerator__);
    for ( i = v20;
          System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__MoveNext__);
          ((void (*)(void))i.fields._current->klass->vtable[7].method)() )
    {
      if ( !i.fields._current )
        sub_1BDBAD4(0LL, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardSquare__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__88_o *)_4__this->fields.lineViewList;
    if ( !this )
      goto LABEL_26;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ClassBoardLine__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__MoveNext__) )
    {
      if ( !v21.fields._current )
        sub_1BDBAD4(0LL, v18);
      ClassBoardLine__PlayTransition(
        (ClassBoardLine_o *)v21.fields._current,
        _4__this->fields.isDirectlyGrandBoard,
        0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardLine__Dispose__);
    this = (ClassBoardController__ShowBoardCoroutine_d__88_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                                 _4__this,
                                                                 _4__this->klass->vtable._5_set_classBoardUIController.methodPtr);
    if ( !this )
LABEL_26:
      sub_1BDBAD4(this, method);
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    if ( !_4__this->fields.isDirectlyGrandBoard )
    {
      v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)_4__this,
        Method_ClassBoardController__ShowBoardCoroutine_b__88_0__,
        0LL);
      EventTutorialMaster__CheckTutorial(0, 82, v19, 0, 0, 0, 0, 0LL);
    }
  }
  return 0;
}


Il2CppObject *__fastcall ClassBoardController__ShowBoardCoroutine_d__88__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__ShowBoardCoroutine_d__88_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardController__ShowBoardCoroutine_d__88__System_Collections_IEnumerator_Reset(
        ClassBoardController__ShowBoardCoroutine_d__88_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_ClassBoardController__ShowBoardCoroutine_d__88_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall ClassBoardController__ShowBoardCoroutine_d__88__System_Collections_IEnumerator_get_Current(
        ClassBoardController__ShowBoardCoroutine_d__88_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardController__ShowBoardCoroutine_d__88__System_IDisposable_Dispose(
        ClassBoardController__ShowBoardCoroutine_d__88_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController__WaitFinishedClassBoardStartEffect_d__80___ctor(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ClassBoardController__WaitFinishedClassBoardStartEffect_d__80__MoveNext(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v3; // x3
  struct ClassBoardController_o *_4__this; // x0
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BDBAD4(0LL, method);
  if ( _4__this->fields.isFinishedClassScoreAnimation )
  {
    ClassBoardController__FinishedClassBoardStartEffect(_4__this, this->fields.callback, v2);
    return 0;
  }
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, 0, (int32_t)v2, v3);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall ClassBoardController__WaitFinishedClassBoardStartEffect_d__80__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ClassBoardController__WaitFinishedClassBoardStartEffect_d__80__System_Collections_IEnumerator_Reset(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall ClassBoardController__WaitFinishedClassBoardStartEffect_d__80__System_Collections_IEnumerator_get_Current(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ClassBoardController__WaitFinishedClassBoardStartEffect_d__80__System_IDisposable_Dispose(
        ClassBoardController__WaitFinishedClassBoardStartEffect_d__80_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4826C & 1) == 0 )
  {
    sub_1BDB878(&ClassBoardController___c_TypeInfo, v1);
    byte_4B4826C = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(ClassBoardController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardController___c_TypeInfo->static_fields->__9 = (struct ClassBoardController___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)ClassBoardController___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ClassBoardController___c___ctor(ClassBoardController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c___CallbackSquareOnClick_b__76_3(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___CallbackSquareOnClick_b__76_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__83_0(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  IClassBoardLockModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int v9; // w1
  const MethodInfo *v10; // x2
  IClassBoardLockModel_c *v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10
  __int64 v14; // x0
  IClassBoardLockModel_c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  IClassBoardLockModel_c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  char v23; // w8
  __int64 v25; // [xsp+0h] [xbp-30h] BYREF
  int v26; // [xsp+8h] [xbp-28h]
  ClassBoardCondData_o v27; // 0:x0.12

  if ( (byte_4B48275 & 1) == 0 )
  {
    sub_1BDB878(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4B48275 = 1;
  }
  v26 = 0;
  v25 = 0LL;
  if ( !x )
    sub_1BDBAD4(this, x);
  klass = x->klass;
  v6 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(x, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
  v26 = v9;
  *(_QWORD *)&v27.fields.Type = &v25;
  v27.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v27, v10) )
    goto LABEL_30;
  v11 = x->klass;
  v12 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v13 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v13 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_15;
    }
    v14 = (__int64)&v11->vtable[*v13 + 15].method;
  }
  else
  {
LABEL_15:
    v14 = sub_1C2C00C(x, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v14)(x, 0LL, *(_QWORD *)(v14 + 8)) & 2) != 0 )
    goto LABEL_30;
  v15 = x->klass;
  v16 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v17 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_22;
    }
    v18 = (__int64)&v15->vtable[*v17 + 15].method;
  }
  else
  {
LABEL_22:
    v18 = sub_1C2C00C(x, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD, _QWORD))v18)(x, 0LL, *(_QWORD *)(v18 + 8)) & 4) != 0 )
  {
LABEL_30:
    v23 = 0;
  }
  else
  {
    v19 = x->klass;
    v20 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((IClassBoardLockModel_c **)v21 - 1) != IClassBoardLockModel_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_29;
      }
      v22 = (__int64)&v19->vtable[*v21 + 1].method;
    }
    else
    {
LABEL_29:
      v22 = sub_1C2C00C(x, IClassBoardLockModel_TypeInfo, 1LL);
    }
    v23 = (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))v22)(x, *(_QWORD *)(v22 + 8)) ^ 1;
  }
  return v23 & 1;
}


int32_t __fastcall ClassBoardController___c___CheckOpenMissionClearDialogSave_b__83_1(
        ClassBoardController___c_o *this,
        IClassBoardLockModel_o *x,
        const MethodInfo *method)
{
  IClassBoardLockModel_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B48276 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&IClassBoardSquareModel_TypeInfo, x);
    byte_4B48276 = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C2C00C(x, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(IClassBoardLockModel_o *, _QWORD))p_method)(x, *(_QWORD *)(p_method + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__78_0(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v6; // x20
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  int v10; // w1
  const MethodInfo *v11; // x2
  ClassBoardController___c_c *v12; // x8
  ClassBoardController___c_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ClassBoardController___c_c *v17; // x8
  ClassBoardController___c_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ClassBoardController___c_c *v22; // x8
  ClassBoardController___c_o *v23; // x19
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  char v27; // w8
  __int64 v29; // [xsp+0h] [xbp-40h] BYREF
  int v30; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v31; // 0:x0.12

  if ( (byte_4B48271 & 1) == 0 )
  {
    sub_1BDB878(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4B48271 = 1;
  }
  v30 = 0;
  v29 = 0LL;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v6 = this;
  v7 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_1C2C00C(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  v30 = v10;
  *(_QWORD *)&v31.fields.Type = &v29;
  v31.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v31, v11) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v12 = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_17;
    }
    v16 = (__int64)(&v12[1].static_fields + 2 * *v15);
  }
  else
  {
LABEL_17:
    v16 = sub_1C2C00C(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v16)(v13, 0LL, *(_QWORD *)(v16 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v17 = this->klass;
  v18 = this;
  v19 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_25;
    }
    v21 = (__int64)(&v17[1].static_fields + 2 * *v20);
  }
  else
  {
LABEL_25:
    v21 = sub_1C2C00C(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v21)(v18, 0LL, *(_QWORD *)(v21 + 8)) & 4) != 0 )
  {
LABEL_34:
    v27 = 0;
    return v27 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_38:
    sub_1BDBAD4(this, x);
  v22 = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v25 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)(&v22->vtable._1_Finalize.method + 2 * *v25);
  }
  else
  {
LABEL_33:
    v26 = sub_1C2C00C(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v27 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8)) ^ 1;
  return v27 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__78_1(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B48272 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&IClassBoardSquareModel_TypeInfo, x);
    byte_4B48272 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1BDBAD4(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_1C2C00C(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


bool __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__78_2(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v6; // x20
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  int v10; // w1
  const MethodInfo *v11; // x2
  ClassBoardController___c_c *v12; // x8
  ClassBoardController___c_o *v13; // x20
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ClassBoardController___c_c *v17; // x8
  ClassBoardController___c_o *v18; // x20
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  ClassBoardController___c_c *v22; // x8
  ClassBoardController___c_o *v23; // x19
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  char v27; // w8
  __int64 v29; // [xsp+0h] [xbp-40h] BYREF
  int v30; // [xsp+8h] [xbp-38h]
  ClassBoardCondData_o v31; // 0:x0.12

  if ( (byte_4B48273 & 1) == 0 )
  {
    sub_1BDB878(&IClassBoardLockModel_TypeInfo, x);
    this = (ClassBoardController___c_o *)sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v4);
    byte_4B48273 = 1;
  }
  v30 = 0;
  v29 = 0LL;
  if ( !x )
    goto LABEL_38;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  klass = this->klass;
  v6 = this;
  v7 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)p_offset - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_1C2C00C(this, IClassBoardLockModel_TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  v30 = v10;
  *(_QWORD *)&v31.fields.Type = &v29;
  v31.fields.Num = 0;
  if ( !ClassBoardCondData__get_HasCond(v31, v11) )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v12 = this->klass;
  v13 = this;
  v14 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v15 = &v12->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v15 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_17;
    }
    v16 = (__int64)(&v12[1].static_fields + 2 * *v15);
  }
  else
  {
LABEL_17:
    v16 = sub_1C2C00C(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v16)(v13, 0LL, *(_QWORD *)(v16 + 8)) & 2) != 0 )
    goto LABEL_34;
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
    goto LABEL_38;
  v17 = this->klass;
  v18 = this;
  v19 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v20 = &v17->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v20 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_25;
    }
    v21 = (__int64)(&v17[1].static_fields + 2 * *v20);
  }
  else
  {
LABEL_25:
    v21 = sub_1C2C00C(this, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  if ( ((*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD, _QWORD))v21)(v18, 0LL, *(_QWORD *)(v21 + 8)) & 4) != 0 )
  {
LABEL_34:
    v27 = 0;
    return v27 & 1;
  }
  this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL);
  if ( !this )
LABEL_38:
    sub_1BDBAD4(this, x);
  v22 = this->klass;
  v23 = this;
  v24 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    v25 = &v22->_1.interfaceOffsets->offset;
    while ( *((IClassBoardLockModel_c **)v25 - 1) != IClassBoardLockModel_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_33;
    }
    v26 = (__int64)(&v22->vtable._1_Finalize.method + 2 * *v25);
  }
  else
  {
LABEL_33:
    v26 = sub_1C2C00C(this, IClassBoardLockModel_TypeInfo, 1LL);
  }
  v27 = (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8)) ^ 1;
  return v27 & 1;
}


int32_t __fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__78_3(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  ClassBoardController___c_c *klass; // x8
  ClassBoardController___c_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B48274 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&IClassBoardSquareModel_TypeInfo, x);
    byte_4B48274 = 1;
  }
  if ( !x || (this = (ClassBoardController___c_o *)ClassBoardLock__get_LockModel(x, 0LL)) == 0LL )
    sub_1BDBAD4(this, x);
  klass = this->klass;
  v5 = this;
  v6 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_1C2C00C(this, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(ClassBoardController___c_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__78_4(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


IClassBoardLockModel_o *__fastcall ClassBoardController___c___PlayClassBoardStartEffect_b__78_5(
        ClassBoardController___c_o *this,
        ClassBoardLock_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return ClassBoardLock__get_LockModel(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__77_1(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__77_2(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__77_3(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  ClassBoardSquare__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___PlayReleaseEffect_b__77_4(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  ClassBoardLine__ReleaseAfterUpdate(x, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__59_0(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B4826D & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B4826D = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__59_1(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B4826E & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B4826E = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__59_2(
        ClassBoardController___c_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B4826F & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B4826F = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___Release_b__59_3(
        ClassBoardController___c_o *this,
        ClassBoardLine_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B48270 & 1) == 0 )
  {
    this = (ClassBoardController___c_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B48270 = 1;
  }
  if ( !x )
    sub_1BDBAD4(this, x);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
}


void __fastcall ClassBoardController___c___SetupSquareOnClickListener_b__75_5(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c___SetupSquareOnClickListener_b__75_7(
        ClassBoardController___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardController___c__DisplayClass75_0___ctor(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__0(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass75_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  int32_t acquireFlag; // w8
  struct ClassBoardSquare_o *v23; // x8
  __int64 methodPtr_low; // x11
  struct ClassBoardSquare_o *v25; // x22
  BaseMonoBehaviour_o *_4__this; // x20
  BaseMonoBehaviour_c *klass; // x21
  _QWORD *image; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  BaseMonoBehaviour_o *v32; // x20
  BaseMonoBehaviour_c *v33; // x21
  _QWORD *v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  struct ClassBoardController_o *v38; // x8
  ClassBoardController___c__DisplayClass75_0_o *v39; // x20
  System_Action_o *_9__2; // x23
  ClassBoardSquare_o *square; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BaseMonoBehaviour_o *v44; // x20
  BaseMonoBehaviour_c *v45; // x21
  _QWORD *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  struct ClassBoardController_o *v50; // x8
  ClassBoardController___c__DisplayClass75_0_o *v51; // x20
  const MethodInfo *v52; // x3
  System_Action_o *_9__3; // x23
  ClassBoardSquare_o *v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  BaseMonoBehaviour_o *v57; // x20
  BaseMonoBehaviour_c *v58; // x21
  _QWORD *v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  struct ClassBoardController_o *v63; // x8
  ClassBoardController___c__DisplayClass75_0_o *v64; // x20
  System_Action_o *_9__4; // x23
  ClassBoardSquare_o *v66; // x21
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  BaseMonoBehaviour_o *v69; // x20
  BaseMonoBehaviour_c *v70; // x21
  _QWORD *v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  struct ClassBoardController_o *v75; // x8
  ClassBoardController___c__DisplayClass75_0_o *v76; // x20
  ClassBoardSquare_o *v77; // x21
  ClassBoardController___c_c *v78; // x0
  System_Action_o *_9__75_5; // x22
  Il2CppObject *v80; // x23
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Action_o *_9__6; // x23
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  ClassBoardLockOpenConfirmDialog_o *v87; // x0
  ClassBoardSquare_o *v88; // x1
  bool v89; // w2
  struct ClassBoardController_o *v90; // x8
  ClassBoardController___c__DisplayClass75_0_o *v91; // x20
  ClassBoardSquare_o *v92; // x21
  ClassBoardController___c_c *v93; // x0
  System_Action_o *_9__75_7; // x22
  Il2CppObject *v95; // x23
  struct ClassBoardController___c_StaticFields *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  System_Action_o *_9__8; // x23
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  ClassBoardSquareOpenConfirmDialog_o *v102; // x0
  ClassBoardSquare_o *v103; // x1
  bool v104; // w2
  BaseMonoBehaviour_o *v105; // x20
  BaseMonoBehaviour_c *v106; // x21
  _QWORD *v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  struct ClassBoardController_o *v111; // x8
  ClassBoardController___c__DisplayClass75_0_o *v112; // x20
  ClassBoardSquare_o *v113; // x21
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  ClassBoardController___c__DisplayClass75_0_o *v118; // x20
  ClassBoardSquare_o *v119; // x21
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  int32_t v122; // w2
  const MethodInfo *v123; // x3

  v2 = this;
  if ( (byte_4B48277 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___, v3);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___, v4);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___, v5);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___, v6);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___, v7);
    sub_1BDB878(&ClassBoardLock_TypeInfo, v8);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v9);
    sub_1BDB878(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__75_5__, v10);
    sub_1BDB878(&Method_ClassBoardController___c__SetupSquareOnClickListener_b__75_7__, v11);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__10__, v12);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__13__, v13);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__14__, v14);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__2__, v15);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__3__, v16);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__4__, v17);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__6__, v18);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__8__, v19);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__9__, v20);
    this = (ClassBoardController___c__DisplayClass75_0_o *)sub_1BDB878(&ClassBoardController___c_TypeInfo, v21);
    byte_4B48277 = 1;
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
    v29 = *((unsigned __int16 *)klass->_1.image + 151);
    if ( *((_WORD *)klass->_1.image + 151) )
    {
      v30 = (int *)(image[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v30 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_17;
      }
      v31 = (__int64)&image[2 * *v30 + 39];
    }
    else
    {
LABEL_17:
      v31 = sub_1C2C00C(_4__this[3].klass, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v31)(
                                                             klass,
                                                             *(_QWORD *)(v31 + 8));
    if ( !this )
      goto LABEL_136;
    v38 = v2->fields.__4__this;
    if ( !v38 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             _4__this,
                                                             (Il2CppObject *)this->fields.__9__16,
                                                             v38->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareDetailDialog___);
    if ( !this )
      goto LABEL_136;
    v39 = this;
    ClassBoardSquareDetailDialog__Init((ClassBoardSquareDetailDialog_o *)this, 0LL);
    this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    _9__2 = v2->fields.__9__2;
    square = v2->fields.square;
    if ( !_9__2 )
    {
      _9__2 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__2,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__2__,
        0LL);
      v2->fields.__9__2 = _9__2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v42, v43);
    }
    ClassBoardSquareDetailDialog__Open((ClassBoardSquareDetailDialog_o *)v39, square, _9__2, 0LL);
  }
  else if ( (acquireFlag & 2) != 0 )
  {
    v32 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v32 )
      goto LABEL_136;
    v33 = v32[3].klass;
    if ( !v33 )
      goto LABEL_136;
    v34 = v33->_1.image;
    v35 = *((unsigned __int16 *)v33->_1.image + 151);
    if ( *((_WORD *)v33->_1.image + 151) )
    {
      v36 = (int *)(v34[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v36 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_24;
      }
      v37 = (__int64)&v34[2 * *v36 + 39];
    }
    else
    {
LABEL_24:
      v37 = sub_1C2C00C(v32[3].klass, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v37)(
                                                             v33,
                                                             *(_QWORD *)(v37 + 8));
    if ( !this )
      goto LABEL_136;
    v50 = v2->fields.__4__this;
    if ( !v50 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v32,
                                                             (Il2CppObject *)this->fields.__9__12,
                                                             v50->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardDisableOpenDialog___);
    if ( !this )
      goto LABEL_136;
    v51 = this;
    LOBYTE(this[3].fields.__9__2) = 0;
    ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, method);
    this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    _9__3 = v2->fields.__9__3;
    v54 = v2->fields.square;
    if ( !_9__3 )
    {
      _9__3 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__3,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__3__,
        0LL);
      v2->fields.__9__3 = _9__3;
      sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v55, v56);
    }
    ClassBoardDisableOpenDialog__Open((ClassBoardDisableOpenDialog_o *)v51, v54, _9__3, v52);
  }
  else if ( (acquireFlag & 4) != 0 )
  {
    v44 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
    if ( !v44 )
      goto LABEL_136;
    v45 = v44[3].klass;
    if ( !v45 )
      goto LABEL_136;
    v46 = v45->_1.image;
    v47 = *((unsigned __int16 *)v45->_1.image + 151);
    if ( *((_WORD *)v45->_1.image + 151) )
    {
      v48 = (int *)(v46[22] + 8LL);
      while ( *((IClassBoardResourceCatalog_c **)v48 - 1) != IClassBoardResourceCatalog_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_40;
      }
      v49 = (__int64)&v46[2 * *v48 + 39];
    }
    else
    {
LABEL_40:
      v49 = sub_1C2C00C(v44[3].klass, IClassBoardResourceCatalog_TypeInfo, 0LL);
    }
    this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v49)(
                                                             v45,
                                                             *(_QWORD *)(v49 + 8));
    if ( !this )
      goto LABEL_136;
    v63 = v2->fields.__4__this;
    if ( !v63 )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                             v44,
                                                             (Il2CppObject *)this->fields.__9__10,
                                                             v63->fields.uiRoot,
                                                             0LL,
                                                             (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockReleaseConditionDialog___);
    if ( !this )
      goto LABEL_136;
    v64 = this;
    ClassBoardLockReleaseConditionDialog__Init((ClassBoardLockReleaseConditionDialog_o *)this, 0LL);
    this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_136;
    this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                             this,
                                                             this->klass[1]._1.name);
    if ( !this )
      goto LABEL_136;
    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
    _9__4 = v2->fields.__9__4;
    v66 = v2->fields.square;
    if ( !_9__4 )
    {
      _9__4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__4,
        (Il2CppObject *)v2,
        Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__4__,
        0LL);
      v2->fields.__9__4 = _9__4;
      sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__4, (int32_t)_9__4, v67, v68);
    }
    ClassBoardLockReleaseConditionDialog__Open((ClassBoardLockReleaseConditionDialog_o *)v64, v66, 0, _9__4, 0LL);
  }
  else
  {
    if ( (acquireFlag & 0x10) != 0 )
    {
      v57 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( v57 )
      {
        v58 = v57[3].klass;
        if ( v58 )
        {
          v59 = v58->_1.image;
          v60 = *((unsigned __int16 *)v58->_1.image + 151);
          if ( *((_WORD *)v58->_1.image + 151) )
          {
            v61 = (int *)(v59[22] + 8LL);
            while ( *((IClassBoardResourceCatalog_c **)v61 - 1) != IClassBoardResourceCatalog_TypeInfo )
            {
              --v60;
              v61 += 4;
              if ( !v60 )
                goto LABEL_56;
            }
            v62 = (__int64)&v59[2 * *v61 + 39];
          }
          else
          {
LABEL_56:
            v62 = sub_1C2C00C(v57[3].klass, IClassBoardResourceCatalog_TypeInfo, 0LL);
          }
          this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v62)(
                                                                   v58,
                                                                   *(_QWORD *)(v62 + 8));
          if ( this )
          {
            v75 = v2->fields.__4__this;
            if ( v75 )
            {
              this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                       v57,
                                                                       (Il2CppObject *)this->fields.__9__9,
                                                                       v75->fields.uiRoot,
                                                                       0LL,
                                                                       (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
              if ( this )
              {
                v76 = this;
                ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, 0LL);
                this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
                if ( this )
                {
                  this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                           this,
                                                                           this->klass[1]._1.name);
                  if ( this )
                  {
                    ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
                    v77 = v2->fields.square;
                    v78 = ClassBoardController___c_TypeInfo;
                    if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
                      v78 = ClassBoardController___c_TypeInfo;
                    }
                    _9__75_5 = v78->static_fields->__9__75_5;
                    if ( !_9__75_5 )
                    {
                      if ( !v78->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v78);
                        v78 = ClassBoardController___c_TypeInfo;
                      }
                      v80 = (Il2CppObject *)v78->static_fields->__9;
                      _9__75_5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__75_5,
                        v80,
                        Method_ClassBoardController___c__SetupSquareOnClickListener_b__75_5__,
                        0LL);
                      static_fields = ClassBoardController___c_TypeInfo->static_fields;
                      static_fields->__9__75_5 = _9__75_5;
                      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__75_5, (int32_t)_9__75_5, v82, v83);
                    }
                    _9__6 = v2->fields.__9__6;
                    if ( !_9__6 )
                    {
                      _9__6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__6,
                        (Il2CppObject *)v2,
                        Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__6__,
                        0LL);
                      v2->fields.__9__6 = _9__6;
                      sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__6, (int32_t)_9__6, v85, v86);
                    }
                    v87 = (ClassBoardLockOpenConfirmDialog_o *)v76;
                    v88 = v77;
                    v89 = 0;
                    goto LABEL_125;
                  }
                }
              }
            }
          }
        }
      }
LABEL_136:
      sub_1BDBAD4(this, method);
    }
    if ( (acquireFlag & 8) != 0 )
    {
      v69 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v69 )
        goto LABEL_136;
      v70 = v69[3].klass;
      if ( !v70 )
        goto LABEL_136;
      v71 = v70->_1.image;
      v72 = *((unsigned __int16 *)v70->_1.image + 151);
      if ( *((_WORD *)v70->_1.image + 151) )
      {
        v73 = (int *)(v71[22] + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v73 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v72;
          v73 += 4;
          if ( !v72 )
            goto LABEL_72;
        }
        v74 = (__int64)&v71[2 * *v73 + 39];
      }
      else
      {
LABEL_72:
        v74 = sub_1C2C00C(v69[3].klass, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v74)(
                                                               v70,
                                                               *(_QWORD *)(v74 + 8));
      if ( !this )
        goto LABEL_136;
      v90 = v2->fields.__4__this;
      if ( !v90 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v69,
                                                               (Il2CppObject *)this->fields.__9__11,
                                                               v90->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v91 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0LL);
      this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
      v92 = v2->fields.square;
      v93 = ClassBoardController___c_TypeInfo;
      if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
        v93 = ClassBoardController___c_TypeInfo;
      }
      _9__75_7 = v93->static_fields->__9__75_7;
      if ( !_9__75_7 )
      {
        if ( !v93->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v93);
          v93 = ClassBoardController___c_TypeInfo;
        }
        v95 = (Il2CppObject *)v93->static_fields->__9;
        _9__75_7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(_9__75_7, v95, Method_ClassBoardController___c__SetupSquareOnClickListener_b__75_7__, 0LL);
        v96 = ClassBoardController___c_TypeInfo->static_fields;
        v96->__9__75_7 = _9__75_7;
        sub_1BDB81C((CGThumbnailListItem_o *)&v96->__9__75_7, (int32_t)_9__75_7, v97, v98);
      }
      _9__8 = v2->fields.__9__8;
      if ( !_9__8 )
      {
        _9__8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__8,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__8__,
          0LL);
        v2->fields.__9__8 = _9__8;
        sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__8, (int32_t)_9__8, v100, v101);
      }
      v102 = (ClassBoardSquareOpenConfirmDialog_o *)v91;
      v103 = v92;
      v104 = 0;
    }
    else
    {
      v23 = v2->fields.square;
      if ( v23
        && (methodPtr_low = LOBYTE(ClassBoardLock_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v23->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (ClassBoardLock_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLock_TypeInfo )
          v25 = v2->fields.square;
        else
          v25 = 0LL;
      }
      else
      {
        v25 = 0LL;
      }
      v105 = (BaseMonoBehaviour_o *)v2->fields.__4__this;
      if ( !v105 )
        goto LABEL_136;
      v106 = v105[3].klass;
      if ( !v106 )
        goto LABEL_136;
      v107 = v106->_1.image;
      v108 = *((unsigned __int16 *)v106->_1.image + 151);
      if ( *((_WORD *)v106->_1.image + 151) )
      {
        v109 = (int *)(v107[22] + 8LL);
        while ( *((IClassBoardResourceCatalog_c **)v109 - 1) != IClassBoardResourceCatalog_TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_112;
        }
        v110 = (__int64)&v107[2 * *v109 + 39];
      }
      else
      {
LABEL_112:
        v110 = sub_1C2C00C(v105[3].klass, IClassBoardResourceCatalog_TypeInfo, 0LL);
      }
      this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(BaseMonoBehaviour_c *, _QWORD))v110)(
                                                               v106,
                                                               *(_QWORD *)(v110 + 8));
      if ( !this )
        goto LABEL_136;
      v111 = v2->fields.__4__this;
      if ( v25 )
      {
        if ( v111 )
        {
          this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                                   v105,
                                                                   (Il2CppObject *)this->fields.__9__9,
                                                                   v111->fields.uiRoot,
                                                                   0LL,
                                                                   (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardLockOpenConfirmDialog___);
          if ( this )
          {
            v112 = this;
            ClassBoardLockOpenConfirmDialog__Init((ClassBoardLockOpenConfirmDialog_o *)this, 0LL);
            this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
            if ( this )
            {
              this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                       this,
                                                                       this->klass[1]._1.name);
              if ( this )
              {
                ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
                _9__75_5 = v2->fields.__9__9;
                v113 = v2->fields.square;
                if ( !_9__75_5 )
                {
                  _9__75_5 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__75_5,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__9__,
                    0LL);
                  v2->fields.__9__9 = _9__75_5;
                  sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__9, (int32_t)_9__75_5, v114, v115);
                }
                _9__6 = v2->fields.__9__10;
                if ( !_9__6 )
                {
                  _9__6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                  System_Action___ctor(
                    _9__6,
                    (Il2CppObject *)v2,
                    Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__10__,
                    0LL);
                  v2->fields.__9__10 = _9__6;
                  sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__10, (int32_t)_9__6, v116, v117);
                }
                v89 = 1;
                v87 = (ClassBoardLockOpenConfirmDialog_o *)v112;
                v88 = v113;
LABEL_125:
                ClassBoardLockOpenConfirmDialog__Open(v87, v88, v89, _9__75_5, _9__6, 0LL);
                return;
              }
            }
          }
        }
        goto LABEL_136;
      }
      if ( !v111 )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass75_0_o *)BaseMonoBehaviour__createObject_object_(
                                                               v105,
                                                               (Il2CppObject *)this->fields.__9__11,
                                                               v111->fields.uiRoot,
                                                               0LL,
                                                               (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardSquareOpenConfirmDialog___);
      if ( !this )
        goto LABEL_136;
      v118 = this;
      ClassBoardSquareOpenConfirmDialog__Init((ClassBoardSquareOpenConfirmDialog_o *)this, 0LL);
      this = (ClassBoardController___c__DisplayClass75_0_o *)v2->fields.__4__this;
      if ( !this )
        goto LABEL_136;
      this = (ClassBoardController___c__DisplayClass75_0_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass75_0_o *, const char *))this->klass[1]._1.gc_desc)(
                                                               this,
                                                               this->klass[1]._1.name);
      if ( !this )
        goto LABEL_136;
      ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 1, 0LL);
      _9__75_7 = v2->fields.__9__13;
      v119 = v2->fields.square;
      if ( !_9__75_7 )
      {
        _9__75_7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__75_7,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__13__,
          0LL);
        v2->fields.__9__13 = _9__75_7;
        sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__13, (int32_t)_9__75_7, v120, v121);
      }
      _9__8 = v2->fields.__9__14;
      if ( !_9__8 )
      {
        _9__8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__8,
          (Il2CppObject *)v2,
          Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__14__,
          0LL);
        v2->fields.__9__14 = _9__8;
        sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__14, (int32_t)_9__8, v122, v123);
      }
      v104 = 1;
      v102 = (ClassBoardSquareOpenConfirmDialog_o *)v118;
      v103 = v119;
    }
    ClassBoardSquareOpenConfirmDialog__Open(v102, v103, v104, _9__75_7, _9__8, 0LL);
  }
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__1(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, method);
  ClassBoardController__CallbackSquareOnClick(this->fields.__4__this, this->fields.square, this->fields.acquireFlag, v2);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__10(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__11(
        ClassBoardController___c__DisplayClass75_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass75_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__12; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4B48279 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass75_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__12__,
                                                             v5);
    byte_4B48279 = 1;
  }
  _9__12 = v4->fields.__9__12;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__12 )
  {
    _9__12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__12,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__12__,
      0LL);
    v4->fields.__9__12 = _9__12;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__12, (int32_t)_9__12, v9, v10);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__12, v3);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__12(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__13(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass75_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Action_object__o *_9__15; // x21
  ClassBoardController___c__DisplayClass75_0_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ClassBoardController___c__DisplayClass75_0_c *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareUser_c **v18; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4B4827A & 1) == 0 )
  {
    sub_1BDB878(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1BDB878(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass75_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__15__,
                                                             v5);
    byte_4B4827A = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(p_method + 8));
  _9__15 = (System_Action_object__o *)v2->fields.__9__15;
  v13 = this;
  if ( !_9__15 )
  {
    _9__15 = (System_Action_object__o *)sub_1BDBAC4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__15,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__15__,
      0LL);
    v2->fields.__9__15 = (struct System_Action_IClassBoardSquareUser__o *)_9__15;
    sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__15, (int32_t)_9__15, v14, v15);
  }
  if ( !v13 )
LABEL_21:
    sub_1BDBAD4(this, method);
  v16 = v13->klass;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v18 = (IClassBoardSquareUser_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1C2C00C(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass75_0_o *, System_Action_object__o *, _QWORD))v19)(
    v13,
    _9__15,
    *(_QWORD *)(v19 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__14(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__15(
        ClassBoardController___c__DisplayClass75_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass75_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__16; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4B4827B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass75_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__16__,
                                                             v5);
    byte_4B4827B = 1;
  }
  _9__16 = v4->fields.__9__16;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__16 )
  {
    _9__16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__16,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__16__,
      0LL);
    v4->fields.__9__16 = _9__16;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__16, (int32_t)_9__16, v9, v10);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__16, v3);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__16(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__2(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__3(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__4(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__6(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__8(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass75_0___SetupSquareOnClickListener_b__9(
        ClassBoardController___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass75_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Action_object__o *_9__11; // x21
  ClassBoardController___c__DisplayClass75_0_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ClassBoardController___c__DisplayClass75_0_c *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareUser_c **v18; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4B48278 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1BDB878(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass75_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__11__,
                                                             v5);
    byte_4B48278 = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  this = (ClassBoardController___c__DisplayClass75_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(p_method + 8));
  _9__11 = (System_Action_object__o *)v2->fields.__9__11;
  v13 = this;
  if ( !_9__11 )
  {
    _9__11 = (System_Action_object__o *)sub_1BDBAC4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__11,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass75_0__SetupSquareOnClickListener_b__11__,
      0LL);
    v2->fields.__9__11 = (struct System_Action_IClassBoardSquareUser__o *)_9__11;
    sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__11, (int32_t)_9__11, v14, v15);
  }
  if ( !v13 )
LABEL_21:
    sub_1BDBAD4(this, method);
  v16 = v13->klass;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v18 = (IClassBoardSquareUser_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1C2C00C(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass75_0_o *, System_Action_object__o *, _QWORD))v19)(
    v13,
    _9__11,
    *(_QWORD *)(v19 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass76_0___ctor(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__0(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__1(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__10(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__11(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass76_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Action_object__o *_9__13; // x21
  ClassBoardController___c__DisplayClass76_0_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ClassBoardController___c__DisplayClass76_0_c *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareUser_c **v18; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4B4827E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1BDB878(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass76_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__13__,
                                                             v5);
    byte_4B4827E = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  this = (ClassBoardController___c__DisplayClass76_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(p_method + 8));
  _9__13 = (System_Action_object__o *)v2->fields.__9__13;
  v13 = this;
  if ( !_9__13 )
  {
    _9__13 = (System_Action_object__o *)sub_1BDBAC4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__13,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__13__,
      0LL);
    v2->fields.__9__13 = (struct System_Action_IClassBoardSquareUser__o *)_9__13;
    sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__13, (int32_t)_9__13, v14, v15);
  }
  if ( !v13 )
LABEL_21:
    sub_1BDBAD4(this, method);
  v16 = v13->klass;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v18 = (IClassBoardSquareUser_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1C2C00C(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass76_0_o *, System_Action_object__o *, _QWORD))v19)(
    v13,
    _9__13,
    *(_QWORD *)(v19 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__12(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__13(
        ClassBoardController___c__DisplayClass76_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass76_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__14; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4B4827F & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass76_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__14__,
                                                             v5);
    byte_4B4827F = 1;
  }
  _9__14 = v4->fields.__9__14;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__14 )
  {
    _9__14 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__14,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__14__,
      0LL);
    v4->fields.__9__14 = _9__14;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__14, (int32_t)_9__14, v9, v10);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__14, v3);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__14(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  const MethodInfo *v4; // x2
  struct ClassBoardSquare_o *square; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (square = this->fields.square) == 0LL)
    || (_4__this = this->fields.__4__this) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardController__EndPlayReleaseEffect(_4__this, square->fields._SquareModel_k__BackingField, v4);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__2(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__4(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__6(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__7(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass76_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v9; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Action_object__o *_9__9; // x21
  ClassBoardController___c__DisplayClass76_0_o *v13; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  ClassBoardController___c__DisplayClass76_0_c *v16; // x8
  __int64 v17; // x9
  IClassBoardSquareUser_c **v18; // x10
  __int64 v19; // x0

  v2 = this;
  if ( (byte_4B4827C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_IClassBoardSquareUser__TypeInfo, method);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v3);
    sub_1BDB878(&IClassBoardSquareUser_TypeInfo, v4);
    this = (ClassBoardController___c__DisplayClass76_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__9__,
                                                             v5);
    byte_4B4827C = 1;
  }
  square = v2->fields.square;
  if ( !square )
    goto LABEL_21;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_21;
  klass = SquareModel_k__BackingField->klass;
  v9 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C2C00C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 14LL);
  }
  this = (ClassBoardController___c__DisplayClass76_0_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                           SquareModel_k__BackingField,
                                                           *(_QWORD *)(p_method + 8));
  _9__9 = (System_Action_object__o *)v2->fields.__9__9;
  v13 = this;
  if ( !_9__9 )
  {
    _9__9 = (System_Action_object__o *)sub_1BDBAC4(System_Action_IClassBoardSquareUser__TypeInfo);
    System_Action_object____ctor(
      _9__9,
      (Il2CppObject *)v2,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__9__,
      0LL);
    v2->fields.__9__9 = (struct System_Action_IClassBoardSquareUser__o *)_9__9;
    sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.__9__9, (int32_t)_9__9, v14, v15);
  }
  if ( !v13 )
LABEL_21:
    sub_1BDBAD4(this, method);
  v16 = v13->klass;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    v18 = (IClassBoardSquareUser_c **)&v16->_1.interfaceOffsets->offset;
    while ( *(v18 - 1) != IClassBoardSquareUser_TypeInfo )
    {
      --v17;
      v18 += 2;
      if ( !v17 )
        goto LABEL_18;
    }
    v19 = (__int64)(&v16->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v18);
  }
  else
  {
LABEL_18:
    v19 = sub_1C2C00C(v13, IClassBoardSquareUser_TypeInfo, 2LL);
  }
  (*(void (__fastcall **)(ClassBoardController___c__DisplayClass76_0_o *, System_Action_object__o *, _QWORD))v19)(
    v13,
    _9__9,
    *(_QWORD *)(v19 + 8));
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__8(
        ClassBoardController___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass76_0___CallbackSquareOnClick_b__9(
        ClassBoardController___c__DisplayClass76_0_o *this,
        IClassBoardSquareUser_o *_,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ClassBoardController___c__DisplayClass76_0_o *v4; // x19
  __int64 v5; // x1
  System_Action_o *_9__10; // x22
  ClassBoardController_o *_4__this; // x20
  ClassBoardSquare_o *square; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4B4827D & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, _);
    this = (ClassBoardController___c__DisplayClass76_0_o *)sub_1BDB878(
                                                             &Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__10__,
                                                             v5);
    byte_4B4827D = 1;
  }
  _9__10 = v4->fields.__9__10;
  _4__this = v4->fields.__4__this;
  square = v4->fields.square;
  if ( !_9__10 )
  {
    _9__10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__10,
      (Il2CppObject *)v4,
      Method_ClassBoardController___c__DisplayClass76_0__CallbackSquareOnClick_b__10__,
      0LL);
    v4->fields.__9__10 = _9__10;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__9__10, (int32_t)_9__10, v9, v10);
  }
  if ( !_4__this )
    sub_1BDBAD4(this, _);
  ClassBoardController__PlayReleaseEffect(_4__this, square, _9__10, v3);
}


void __fastcall ClassBoardController___c__DisplayClass77_0___ctor(
        ClassBoardController___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass77_0___PlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *_4__this; // x0
  struct ClassBoardController_o *v12; // x8
  System_Collections_Generic_List_object__o *squareViewList; // x20
  System_Action_object__o *v14; // x21
  Il2CppObject *v15; // x22
  struct ClassBoardController___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct ClassBoardController_o *v19; // x8
  System_Collections_Generic_List_object__o *lineViewList; // x20
  System_Action_object__o *v21; // x21
  Il2CppObject *v22; // x22
  struct ClassBoardController___c_StaticFields *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct ClassBoardController_o *v26; // x8
  System_Collections_Generic_List_object__o *GrandSquareViewList; // x20
  System_Action_object__o *v28; // x21
  Il2CppObject *v29; // x22
  struct ClassBoardController___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct ClassBoardController_o *v33; // x8
  System_Collections_Generic_List_object__o *GrandLineViewList; // x20
  System_Action_object__o *v35; // x21
  Il2CppObject *v36; // x22
  struct ClassBoardController___c_StaticFields *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4B48280 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_ClassBoardSquare__TypeInfo, method);
    sub_1BDB878(&System_Action_ClassBoardLine__TypeInfo, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_ClassBoardLine__ForEach__, v5);
    sub_1BDB878(&Method_ClassBoardController___c__PlayReleaseEffect_b__77_1__, v6);
    sub_1BDB878(&Method_ClassBoardController___c__PlayReleaseEffect_b__77_2__, v7);
    sub_1BDB878(&Method_ClassBoardController___c__PlayReleaseEffect_b__77_3__, v8);
    sub_1BDB878(&Method_ClassBoardController___c__PlayReleaseEffect_b__77_4__, v9);
    sub_1BDB878(&ClassBoardController___c_TypeInfo, v10);
    byte_4B48280 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_40;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_40;
  ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_40;
  _4__this = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)_4__this + 376LL))(
                       _4__this,
                       *(_QWORD *)(*(_QWORD *)_4__this + 384LL));
  if ( !_4__this )
    goto LABEL_40;
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_40;
  squareViewList = (System_Collections_Generic_List_object__o *)v12->fields.squareViewList;
  _4__this = ClassBoardController___c_TypeInfo;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v14 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 72LL);
  if ( !v14 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v15 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v14 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v14, v15, Method_ClassBoardController___c__PlayReleaseEffect_b__77_1__, 0LL);
    static_fields = ClassBoardController___c_TypeInfo->static_fields;
    static_fields->__9__77_1 = (struct System_Action_ClassBoardSquare__o *)v14;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__77_1, (int32_t)v14, v17, v18);
  }
  if ( !squareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    squareViewList,
    (System_Action_T__o *)v14,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v19 = this->fields.__4__this;
  if ( !v19 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  lineViewList = (System_Collections_Generic_List_object__o *)v19->fields.lineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v21 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 80LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v21 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v21, v22, Method_ClassBoardController___c__PlayReleaseEffect_b__77_2__, 0LL);
    v23 = ClassBoardController___c_TypeInfo->static_fields;
    v23->__9__77_2 = (struct System_Action_ClassBoardLine__o *)v21;
    sub_1BDB81C((CGThumbnailListItem_o *)&v23->__9__77_2, (int32_t)v21, v24, v25);
  }
  if ( !lineViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    lineViewList,
    (System_Action_T__o *)v21,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
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
    v28 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardSquare__TypeInfo);
    System_Action_object____ctor(v28, v29, Method_ClassBoardController___c__PlayReleaseEffect_b__77_3__, 0LL);
    v30 = ClassBoardController___c_TypeInfo->static_fields;
    v30->__9__77_3 = (struct System_Action_ClassBoardSquare__o *)v28;
    sub_1BDB81C((CGThumbnailListItem_o *)&v30->__9__77_3, (int32_t)v28, v31, v32);
  }
  if ( !GrandSquareViewList )
    goto LABEL_40;
  System_Collections_Generic_List_object___ForEach(
    GrandSquareViewList,
    (System_Action_T__o *)v28,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ClassBoardSquare__ForEach__);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_40;
  _4__this = ClassBoardController___c_TypeInfo;
  GrandLineViewList = (System_Collections_Generic_List_object__o *)v33->fields.GrandLineViewList;
  if ( !ClassBoardController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardController___c_TypeInfo);
    _4__this = ClassBoardController___c_TypeInfo;
  }
  v35 = *(System_Action_object__o **)(*((_QWORD *)_4__this + 23) + 96LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)_4__this + 56) )
    {
      j_il2cpp_runtime_class_init_0(_4__this);
      _4__this = ClassBoardController___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)_4__this + 23);
    v35 = (System_Action_object__o *)sub_1BDBAC4(System_Action_ClassBoardLine__TypeInfo);
    System_Action_object____ctor(v35, v36, Method_ClassBoardController___c__PlayReleaseEffect_b__77_4__, 0LL);
    v37 = ClassBoardController___c_TypeInfo->static_fields;
    v37->__9__77_4 = (struct System_Action_ClassBoardLine__o *)v35;
    sub_1BDB81C((CGThumbnailListItem_o *)&v37->__9__77_4, (int32_t)v35, v38, v39);
  }
  if ( !GrandLineViewList )
LABEL_40:
    sub_1BDBAD4(_4__this, method);
  System_Collections_Generic_List_object___ForEach(
    GrandLineViewList,
    (System_Action_T__o *)v35,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_ClassBoardLine__ForEach__);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass78_0___ctor(
        ClassBoardController___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass78_0___PlayClassBoardStartEffect_b__6(
        ClassBoardController___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ClassBoardUIController_o *_4__this; // x0
  _BOOL4 isLockCondReleased; // w21
  ClassBoardUIController_o *v7; // x20
  System_Action_o *_9__7; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B48281 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v3);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass78_0__PlayClassBoardStartEffect_b__7__, v4);
    byte_4B48281 = 1;
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  isLockCondReleased = this->fields.isLockCondReleased;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__TouchEnable(_4__this, 0LL);
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name);
  v7 = _4__this;
  if ( isLockCondReleased )
  {
    _9__7 = this->fields.__9__7;
    if ( !_9__7 )
    {
      _9__7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__7,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass78_0__PlayClassBoardStartEffect_b__7__,
        0LL);
      this->fields.__9__7 = _9__7;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__7, (int32_t)_9__7, v9, v10);
    }
    if ( v7 )
    {
      ClassBoardUIController__OpenMissionClearDialog(v7, _9__7, 0LL);
      goto LABEL_13;
    }
LABEL_15:
    sub_1BDBAD4(_4__this, method);
  }
  if ( !_4__this )
    goto LABEL_15;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0LL);
LABEL_13:
  _4__this = (ClassBoardUIController_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this )
    goto LABEL_15;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass78_0___PlayClassBoardStartEffect_b__7(
        ClassBoardController___c__DisplayClass78_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass81_0___ctor(
        ClassBoardController___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass81_0___FinishedClassBoardStartEffect_b__0(
        ClassBoardController___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ClassBoardController___c__DisplayClass81_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *_4__this; // x20
  System_Action_o *klass; // x1
  ClassBoardController_o *v8; // x0
  System_Action_o *v9; // x21

  v3 = this;
  if ( (byte_4B48282 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_ClassBoardController_HideGrandBoard__, v4);
    this = (ClassBoardController___c__DisplayClass81_0_o *)sub_1BDB878(
                                                             &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                             v5);
    byte_4B48282 = 1;
  }
  _4__this = (Il2CppObject *)v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  klass = (System_Action_o *)_4__this[10].klass;
  if ( klass )
  {
    v8 = v3->fields.__4__this;
  }
  else
  {
    v9 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v9, _4__this, Method_ClassBoardController_HideGrandBoard__, 0LL);
    v8 = (ClassBoardController_o *)_4__this;
    klass = v9;
  }
  ClassBoardController__SetOnClickBack(v8, klass, v2);
  this = (ClassBoardController___c__DisplayClass81_0_o *)v3->fields.__4__this;
  if ( !this
    || (ClassBoardController__ShowGrandBoard((ClassBoardController_o *)this, method),
        (this = (ClassBoardController___c__DisplayClass81_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
  ActionExtensions__Call(v3->fields.callback, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass82_0___ctor(
        ClassBoardController___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass82_0___EndPlayReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass82_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, f);
  ClassBoardController__CheckOpenMissionClearDialogSave(this->fields.__4__this, this->fields.squareModel, f, v3);
}


void __fastcall ClassBoardController___c__DisplayClass82_0___EndPlayReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass82_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, f);
  ClassBoardController__CheckQuestOpenDialog(this->fields.__4__this, this->fields.squareModel, f, v3);
}


void __fastcall ClassBoardController___c__DisplayClass82_0___EndPlayReleaseEffect_b__2(
        ClassBoardController___c__DisplayClass82_0_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BDBAD4(this, f);
  ClassBoardController__PlayFullReleaseEffect(this->fields.__4__this, this->fields.squareModel, f, v3);
}


void __fastcall ClassBoardController___c__DisplayClass82_0___EndPlayReleaseEffect_b__3(
        ClassBoardController___c__DisplayClass82_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass82_0_o *v2; // x19
  struct ClassBoardController_o *_4__this; // x8

  v2 = this;
  if ( (byte_4B48283 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass82_0_o *)sub_1BDB878(
                                                             &Method_SingletonTemplate_MissionNotifyManager__get_Instance__,
                                                             method);
    byte_4B48283 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.isPlayFullReleaseEffect = 0,
        (this = (ClassBoardController___c__DisplayClass82_0_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass83_0___ctor(
        ClassBoardController___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass83_0___CheckOpenMissionClearDialogSave_b__2(
        ClassBoardController___c__DisplayClass83_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass84_0___ctor(
        ClassBoardController___c__DisplayClass84_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass84_0___CheckQuestOpenDialog_b__0(
        ClassBoardController___c__DisplayClass84_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass84_0_Fields *p_transitionAction; // x8
  ClassBoardQuestOpenConfirmDialog_o *questOpenConfirmDialog; // x0

  if ( isDecide )
  {
    p_transitionAction = (ClassBoardController___c__DisplayClass84_0_Fields *)&this->fields.transitionAction;
  }
  else
  {
    questOpenConfirmDialog = this->fields.questOpenConfirmDialog;
    if ( !questOpenConfirmDialog )
      sub_1BDBAD4(0LL, isDecide);
    ClassBoardQuestOpenConfirmDialog__Close(questOpenConfirmDialog, 0LL);
    p_transitionAction = &this->fields;
  }
  ActionExtensions__Call(p_transitionAction->callback, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass85_0___ctor(
        ClassBoardController___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass85_0___PlayFullReleaseEffect_b__0(
        ClassBoardController___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 ClassBoardRoot; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct IClassBoardSquareModel_o *squareModel; // x21
  IClassBoardSquareModel_c *klass; // x8
  __int64 v16; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v18; // x0
  struct ClassBoardController_o *_4__this; // x8
  struct IClassBoardResourceCatalog_o *resourceCatalog; // x22
  IClassBoardResourceCatalog_c *v21; // x8
  char v22; // w21
  __int64 v23; // x9
  int *v24; // x10
  __int64 p_method; // x0
  __int64 v26; // x9
  UnityEngine_Object_o *v27; // x21
  struct ClassBoardController_o *v28; // x22
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Object_object; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct IClassBoardSquareModel_o *v33; // x22
  IClassBoardSquareModel_c *v34; // x8
  ClassBoardFullReleaseEffectComponent_o *v35; // x21
  __int64 v36; // x9
  IClassBoardSquareModel_c **v37; // x10
  __int64 v38; // x0
  struct ClassBoardController_o *v39; // x8
  __int64 v40; // x9
  ClassBoardFullReleaseEffectComponent_o *v41; // x19
  System_Action_o *v42; // x21

  if ( (byte_4B48284 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___, v3);
    sub_1BDB878(&IClassBoardResourceCatalog_TypeInfo, v4);
    sub_1BDB878(&IClassBoardSquareModel_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass85_1__PlayFullReleaseEffect_b__1__, v7);
    sub_1BDB878(&ClassBoardController___c__DisplayClass85_1_TypeInfo, v8);
    byte_4B48284 = 1;
  }
  v9 = sub_1BDBAC4(ClassBoardController___c__DisplayClass85_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_41;
  *(_QWORD *)(v9 + 24) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v12, v13);
  squareModel = this->fields.squareModel;
  if ( !squareModel )
    goto LABEL_41;
  klass = squareModel->klass;
  v16 = *(unsigned __int16 *)(&squareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&squareModel->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v16;
      p_offset += 2;
      if ( !v16 )
        goto LABEL_9;
    }
    v18 = (__int64)&(&klass->rgctx_data)[2 * *(_DWORD *)p_offset + 39];
  }
  else
  {
LABEL_9:
    v18 = sub_1C2C00C(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  ClassBoardRoot = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v18)(
                     squareModel,
                     *(_QWORD *)(v18 + 8));
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_41;
  resourceCatalog = _4__this->fields.resourceCatalog;
  if ( !resourceCatalog )
    goto LABEL_41;
  v21 = resourceCatalog->klass;
  v22 = ClassBoardRoot;
  v23 = *(unsigned __int16 *)(&resourceCatalog->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&resourceCatalog->klass->_2.bitflags2 + 3) )
  {
    v24 = &v21->_1.interfaceOffsets->offset;
    while ( *((IClassBoardResourceCatalog_c **)v24 - 1) != IClassBoardResourceCatalog_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_17;
    }
    p_method = (__int64)&v21->vtable[*v24].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C2C00C(resourceCatalog, IClassBoardResourceCatalog_TypeInfo, 0LL);
  }
  ClassBoardRoot = (*(__int64 (__fastcall **)(struct IClassBoardResourceCatalog_o *, _QWORD))p_method)(
                     resourceCatalog,
                     *(_QWORD *)(p_method + 8));
  if ( !ClassBoardRoot )
    goto LABEL_41;
  v26 = 144LL;
  if ( (v22 & 1) != 0 )
    v26 = 152LL;
  v27 = *(UnityEngine_Object_o **)(ClassBoardRoot + v26);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ClassBoardRoot = UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
  if ( (ClassBoardRoot & 1) != 0 )
  {
    ActionExtensions__Call(this->fields.callback, 0LL);
    return;
  }
  v28 = this->fields.__4__this;
  if ( !v28 )
    goto LABEL_41;
  ClassBoardRoot = (__int64)v28->fields.ClassBoardRoot;
  if ( !ClassBoardRoot )
    goto LABEL_41;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ClassBoardRoot, 0LL);
  Object_object = BaseMonoBehaviour__createObject_object_(
                    (BaseMonoBehaviour_o *)v28,
                    (Il2CppObject *)v27,
                    transform,
                    0LL,
                    (const MethodInfo_301C6D4 *)Method_BaseMonoBehaviour_createObject_ClassBoardFullReleaseEffectComponent___);
  *(_QWORD *)(v9 + 16) = Object_object;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)Object_object, v31, v32);
  v33 = this->fields.squareModel;
  if ( !v33 )
    goto LABEL_41;
  v34 = v33->klass;
  v35 = *(ClassBoardFullReleaseEffectComponent_o **)(v9 + 16);
  v36 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    v37 = (IClassBoardSquareModel_c **)&v34->_1.interfaceOffsets->offset;
    while ( *(v37 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v36;
      v37 += 2;
      if ( !v36 )
        goto LABEL_33;
    }
    v38 = (__int64)&(&v34->rgctx_data)[2 * *(_DWORD *)v37 + 39];
  }
  else
  {
LABEL_33:
    v38 = sub_1C2C00C(this->fields.squareModel, IClassBoardSquareModel_TypeInfo, 12LL);
  }
  ClassBoardRoot = (*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v38)(v33, *(_QWORD *)(v38 + 8));
  v39 = this->fields.__4__this;
  if ( !v39 || !v35 )
    goto LABEL_41;
  v40 = 144LL;
  if ( (ClassBoardRoot & 1) != 0 )
    v40 = 216LL;
  ClassBoardFullReleaseEffectComponent__SetClassIcon(v35, *(_DWORD *)((char *)&v39->klass + v40), 0LL);
  v41 = *(ClassBoardFullReleaseEffectComponent_o **)(v9 + 16);
  v42 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v9,
    Method_ClassBoardController___c__DisplayClass85_1__PlayFullReleaseEffect_b__1__,
    0LL);
  if ( !v41 )
LABEL_41:
    sub_1BDBAD4(ClassBoardRoot, v11);
  ClassBoardFullReleaseEffectComponent__Play(v41, v42, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass85_1___ctor(
        ClassBoardController___c__DisplayClass85_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass85_1___PlayFullReleaseEffect_b__1(
        ClassBoardController___c__DisplayClass85_1_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass85_1_o *v2; // x19
  struct ClassBoardController___c__DisplayClass85_0_o *CS___8__locals1; // x8
  struct ClassBoardController___c__DisplayClass85_0_o *v4; // x8
  struct ClassBoardController___c__DisplayClass85_0_o *v5; // x8
  UnityEngine_Object_o *gameObject; // x19

  v2 = this;
  if ( (byte_4B48285 & 1) == 0 )
  {
    this = (ClassBoardController___c__DisplayClass85_1_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B48285 = 1;
  }
  CS___8__locals1 = v2->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_14;
  ActionExtensions__Call(CS___8__locals1->fields.callback, 0LL);
  v4 = v2->fields.CS___8__locals1;
  if ( !v4 )
    goto LABEL_14;
  this = (ClassBoardController___c__DisplayClass85_1_o *)v4->fields.__4__this;
  if ( !this
    || (this = (ClassBoardController___c__DisplayClass85_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass85_1_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                 this,
                                                                 this->klass[1]._1.name)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)this, 0, 0LL),
        (v5 = v2->fields.CS___8__locals1) == 0LL)
    || (this = (ClassBoardController___c__DisplayClass85_1_o *)v5->fields.__4__this) == 0LL
    || (this = (ClassBoardController___c__DisplayClass85_1_o *)((__int64 (__fastcall *)(ClassBoardController___c__DisplayClass85_1_o *, const char *))this->klass[1]._1.gc_desc)(
                                                                 this,
                                                                 this->klass[1]._1.name)) == 0LL
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)this, 0LL),
        (this = (ClassBoardController___c__DisplayClass85_1_o *)v2->fields.fullReleaseEffect) == 0LL) )
  {
LABEL_14:
    sub_1BDBAD4(this, method);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass86_0___ctor(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass86_0___PlayMoveCamera_b__0(
        ClassBoardController___c__DisplayClass86_0_o *this,
        const MethodInfo *method)
{
  struct ClassBoardController_o *_4__this; // x0
  struct System_Action_o *callback; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__TouchEnable((ClassBoardUIController_o *)_4__this, 0LL),
        (_4__this = this->fields.__4__this) == 0LL)
    || (_4__this = (struct ClassBoardController_o *)((__int64 (__fastcall *)(struct ClassBoardController_o *, Il2CppMethodPointer))_4__this->klass->vtable._4_get_classBoardUIController.method)(
                                                      _4__this,
                                                      _4__this->klass->vtable._5_set_classBoardUIController.methodPtr)) == 0LL
    || (ClassBoardUIController__SetCameraWorkBlock((ClassBoardUIController_o *)_4__this, 0, 0LL),
        (callback = this->fields.callback) == 0LL) )
  {
    sub_1BDBAD4(_4__this, method);
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall ClassBoardController___c__DisplayClass98_0___ctor(
        ClassBoardController___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardController___c__DisplayClass98_0___OnClickShop18Button_b__0(
        ClassBoardController___c__DisplayClass98_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *commonUI; // x20
  ClassBoardUIController_o *_4__this; // x0
  float v9; // s8
  System_Action_o *_9__1; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B48286 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v5);
    sub_1BDB878(&Method_ClassBoardController___c__DisplayClass98_0__OnClickShop18Button_b__1__, v6);
    byte_4B48286 = 1;
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
    v9 = *(float *)&_4__this->fields.onClickToGrandServantList->klass;
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_ClassBoardController___c__DisplayClass98_0__OnClickShop18Button_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
    }
    if ( !commonUI )
LABEL_14:
      sub_1BDBAD4(_4__this, isDecide);
    CommonUI__maskFadeout(commonUI, 1, v9, _9__1, 0LL);
  }
  _4__this = (ClassBoardUIController_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  _4__this = (ClassBoardUIController_o *)((__int64 (__fastcall *)(ClassBoardUIController_o *, const char *, const MethodInfo *))_4__this->klass[1]._1.gc_desc)(
                                           _4__this,
                                           _4__this->klass[1]._1.name,
                                           method);
  if ( !_4__this )
    goto LABEL_14;
  ClassBoardUIController__SetCameraWorkBlock(_4__this, 0, 0LL);
  _4__this = (ClassBoardUIController_o *)this->fields.commonUI;
  if ( !_4__this )
    goto LABEL_14;
  CommonUI__CloseConfirmDialog((CommonUI_o *)_4__this, 0LL);
}


void __fastcall ClassBoardController___c__DisplayClass98_0___OnClickShop18Button_b__1(
        ClassBoardController___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  ClassBoardController___c__DisplayClass98_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct ClassBoardController_o *_4__this; // x8
  int32_t baseId; // w20
  SceneJumpInfo_o *v7; // x19

  v2 = this;
  if ( (byte_4B48287 & 1) == 0 )
  {
    sub_1BDB878(&SceneJumpInfo_TypeInfo, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    this = (ClassBoardController___c__DisplayClass98_0_o *)sub_1BDB878(&StringLiteral_12814/*"Shop18"*/, v4);
    byte_4B48287 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (baseId = _4__this->fields.baseId,
        v7 = (SceneJumpInfo_o *)sub_1BDBAC4(SceneJumpInfo_TypeInfo),
        SceneJumpInfo___ctor_40482296(v7, (System_String_o *)StringLiteral_12814/*"Shop18"*/, baseId, 0LL),
        (this = (ClassBoardController___c__DisplayClass98_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)this, 22, 1, (Il2CppObject *)v7, 0LL);
}