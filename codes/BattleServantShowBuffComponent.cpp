void __fastcall BattleServantShowBuffComponent___ctor(BattleServantShowBuffComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_43547B1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_43547B1 = 1;
  }
  this->fields.maxLine = 2;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.objList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleServantShowBuffComponent__CreateBuffObj(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *Object; // x21
  const MethodInfo *v6; // x3
  BattleServantBuffIconComponent_o *Component_srcLineSprite; // x0
  __int64 v8; // x1
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  __int64 v10; // x0

  if ( (byte_43547AC & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_43547AC = 1;
  }
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             this->fields.IconClone,
             this->fields.listTr,
             0LL,
             0LL);
  BattleServantShowBuffComponent__UpdatePosition(this, Object, index, v6);
  if ( !Object )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(Object, 1, 0LL);
  Component_srcLineSprite = (BattleServantBuffIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Object,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_9;
  if ( datalist->max_length <= index )
  {
    v10 = sub_B70798(Component_srcLineSprite);
    sub_B70738(v10, 0LL);
  }
  if ( !Component_srcLineSprite
    || (BattleServantBuffIconComponent__setIcon_20629452(Component_srcLineSprite, datalist->m_Items[index], 0LL),
        (Component_srcLineSprite = (BattleServantBuffIconComponent_o *)this->fields.objList) == 0LL) )
  {
LABEL_9:
    sub_B7076C(Component_srcLineSprite, v8);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Component_srcLineSprite,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleServantShowBuffComponent__HideBuffObject(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  unsigned int v4; // w20
  int32_t size; // w8
  _DWORD *monitor; // x10
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int max_length; // w9
  int v9; // w10
  unsigned int v10; // w11
  BattleBuffData_ShowBuffData_o *v11; // x12
  __int64 v12; // x0

  v2 = this;
  if ( (byte_43547AD & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (BattleServantShowBuffComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_43547AD = 1;
  }
  objList = v2->fields.objList;
  if ( !objList )
    goto LABEL_20;
  v4 = 0;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v4 >= size )
      break;
    if ( size <= v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleServantShowBuffComponent_o *)objList->fields._items->m_Items[v4];
    if ( !this )
      goto LABEL_20;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_20;
    monitor = this[1].monitor;
    if ( monitor )
    {
      datalist = v2->fields.datalist;
      if ( !datalist )
        goto LABEL_20;
      max_length = datalist->max_length;
      if ( max_length >= 1 )
      {
        v9 = monitor[9];
        v10 = 0;
        while ( 1 )
        {
          if ( v10 >= max_length )
          {
            v12 = sub_B70798(this);
            sub_B70738(v12, 0LL);
          }
          v11 = datalist->m_Items[v10];
          if ( !v11 )
            break;
          if ( v9 == v11->fields.addOrder )
            goto LABEL_19;
          if ( (int)++v10 >= max_length )
            goto LABEL_18;
        }
LABEL_20:
        sub_B7076C(this, method);
      }
LABEL_18:
      BattleServantBuffIconComponent__setIcon_20629452((BattleServantBuffIconComponent_o *)this, 0LL, 0LL);
    }
LABEL_19:
    objList = v2->fields.objList;
    ++v4;
    if ( !objList )
      goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantShowBuffComponent__NewBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v4; // x20
  struct System_Collections_Generic_List_GameObject__o *objList; // x24
  __int64 v6; // x21
  int size; // w8
  unsigned int v8; // w22
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_GameObject__o *v11; // x23
  __int64 v12; // x0

  v4 = this;
  if ( (byte_43547AF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (BattleServantShowBuffComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_43547AF = 1;
  }
  objList = v4->fields.objList;
  if ( !objList )
    goto LABEL_12;
  v6 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
    {
      BattleServantShowBuffComponent__CreateBuffObj(v4, index, method);
      return;
    }
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleServantShowBuffComponent_o *)*((_QWORD *)&objList->fields._items->obj.klass + v6);
    if ( !this )
      goto LABEL_12;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_12;
    if ( !this[1].monitor )
      break;
    objList = v4->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_12;
  }
  datalist = v4->fields.datalist;
  if ( !datalist )
    goto LABEL_12;
  if ( datalist->max_length <= index )
  {
    v12 = sub_B70798(this);
    sub_B70738(v12, 0LL);
  }
  BattleServantBuffIconComponent__setIcon_20629452(
    (BattleServantBuffIconComponent_o *)this,
    datalist->m_Items[index],
    0LL);
  v11 = v4->fields.objList;
  if ( !v11 )
LABEL_12:
    sub_B7076C(this, *(_QWORD *)&index);
  if ( v11->fields._size <= v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    v4,
    *((UnityEngine_GameObject_o **)&v11->fields._items->obj.klass + v6),
    index,
    v10);
}


void __fastcall BattleServantShowBuffComponent__UpdateActiveBuffList(
        BattleServantShowBuffComponent_o *this,
        const MethodInfo *method)
{
  BattleServantShowBuffComponent_o *v2; // x19
  struct System_Collections_Generic_List_GameObject__o *objList; // x22
  __int64 v4; // x20
  int size; // w8

  v2 = this;
  if ( (byte_43547B0 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (BattleServantShowBuffComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_43547B0 = 1;
  }
  objList = v2->fields.objList;
  if ( !objList )
LABEL_13:
    sub_B7076C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = objList->fields._size;
    if ( (int)v4 >= size )
      break;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleServantShowBuffComponent_o *)objList->fields._items->m_Items[v4];
    if ( this )
    {
      this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)this,
                                                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
      if ( this )
      {
        if ( this[1].monitor )
          BattleServantBuffIconComponent__UpdateActiveBuff((BattleServantBuffIconComponent_o *)this, 0LL);
        objList = v2->fields.objList;
        ++v4;
        if ( objList )
          continue;
      }
    }
    goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantShowBuffComponent__UpdateBuff(
        BattleServantShowBuffComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  int32_t v3; // w19
  BattleServantShowBuffComponent_o *v4; // x20
  struct System_Collections_Generic_List_GameObject__o *objList; // x25
  __int64 v6; // x21
  int size; // w8
  unsigned int v8; // w24
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *datalist; // x9
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_GameObject__o *v13; // x22
  __int64 v14; // x0

  v3 = index;
  v4 = this;
  if ( (byte_43547AE & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    this = (BattleServantShowBuffComponent_o *)sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_43547AE = 1;
  }
  objList = v4->fields.objList;
  if ( !objList )
    goto LABEL_16;
  v6 = 4LL;
  while ( 1 )
  {
    size = objList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
      return 0;
    if ( size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    this = (BattleServantShowBuffComponent_o *)*((_QWORD *)&objList->fields._items->obj.klass + v6);
    if ( !this )
      goto LABEL_16;
    this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)this,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    if ( !this )
      goto LABEL_16;
    monitor = this[1].monitor;
    if ( monitor )
    {
      datalist = v4->fields.datalist;
      if ( !datalist )
        goto LABEL_16;
      if ( datalist->max_length <= v3 )
      {
        v14 = sub_B70798(this);
        sub_B70738(v14, 0LL);
      }
      *(_QWORD *)&index = datalist->m_Items[v3];
      if ( !*(_QWORD *)&index )
        goto LABEL_16;
      if ( *(_DWORD *)(*(_QWORD *)&index + 36LL) == monitor[9] )
        break;
    }
    objList = v4->fields.objList;
    ++v6;
    if ( !objList )
      goto LABEL_16;
  }
  BattleServantBuffIconComponent__setIcon_20629452(
    (BattleServantBuffIconComponent_o *)this,
    *(BattleBuffData_ShowBuffData_o **)&index,
    0LL);
  v13 = v4->fields.objList;
  if ( !v13 )
LABEL_16:
    sub_B7076C(this, *(_QWORD *)&index);
  if ( v13->fields._size <= v8 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  BattleServantShowBuffComponent__UpdatePosition(
    v4,
    *((UnityEngine_GameObject_o **)&v13->fields._items->obj.klass + v6),
    v3,
    v12);
  return 1;
}


void __fastcall BattleServantShowBuffComponent__UpdatePosition(
        BattleServantShowBuffComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  int32_t maxCount; // w21
  int maxLine; // w22
  BattleServantShowBuffComponent_o *v6; // x20
  int v8; // w8
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( !obj
    || (maxCount = this->fields.maxCount,
        maxLine = this->fields.maxLine,
        v6 = this,
        (this = (BattleServantShowBuffComponent_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B7076C(this, obj);
  }
  v8 = index / maxCount;
  if ( index / maxCount > maxLine )
    v8 = maxLine;
  v9.fields.y = v6->fields.addPos.fields.y * (float)v8;
  v9.fields.x = v6->fields.addPos.fields.x * (float)(index % maxCount);
  v9.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v9, 0LL);
}


void __fastcall BattleServantShowBuffComponent__setBuffList(
        BattleServantShowBuffComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleBuffData_ShowBuffData_array **p_datalist; // x20
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *updated; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  struct BattleBuffData_ShowBuffData_array *datalist; // x8
  int32_t v16; // w21
  __int64 v17; // x8
  struct System_Collections_Generic_List_GameObject__o *objList; // x9
  int32_t size; // w9
  int v20; // w10
  int v21; // w22
  struct System_Collections_Generic_List_GameObject__o *v22; // x26
  __int64 v23; // x24
  int v24; // w8
  _DWORD *monitor; // x8
  struct BattleBuffData_ShowBuffData_array *v26; // x9
  BattleBuffData_ShowBuffData_o *v27; // x9
  __int64 v28; // x0

  if ( (byte_43547AB & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    byte_43547AB = 1;
  }
  this->fields.datalist = buffList;
  p_datalist = &this->fields.datalist;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.datalist,
    (System_Int32_array **)buffList,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleServantShowBuffComponent__HideBuffObject(this, v11);
  datalist = this->fields.datalist;
  if ( !datalist )
    goto LABEL_35;
  v16 = 0;
  while ( 1 )
  {
    v17 = *(_QWORD *)&datalist->max_length;
    if ( v16 >= (int)v17 )
      return;
    objList = this->fields.objList;
    if ( !objList )
      goto LABEL_35;
    size = objList->fields._size;
    v20 = this->fields.maxLine * this->fields.maxCount;
    if ( v20 <= v16 )
      break;
    if ( size <= v16 )
    {
      BattleServantShowBuffComponent__CreateBuffObj(this, v16, v14);
    }
    else
    {
      updated = (UnityEngine_GameObject_o *)BattleServantShowBuffComponent__UpdateBuff(this, v16, v14);
      if ( ((unsigned __int8)updated & 1) == 0 )
        BattleServantShowBuffComponent__NewBuff(this, v16, v14);
    }
    datalist = *p_datalist;
    ++v16;
    if ( !*p_datalist )
      goto LABEL_35;
  }
  v21 = size - v20;
  if ( size - v20 >= 1 && v16 < (int)v17 )
  {
    while ( 1 )
    {
      v22 = this->fields.objList;
      if ( !v22 )
        break;
      v23 = 0LL;
      while ( 1 )
      {
        v24 = v22->fields._size;
        if ( (int)v23 >= v24 )
          break;
        if ( v24 <= (unsigned int)v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        updated = v22->fields._items->m_Items[v23];
        if ( !updated )
          goto LABEL_35;
        updated = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                updated,
                                                (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleServantBuffIconComponent___);
        if ( !updated )
          goto LABEL_35;
        monitor = updated[3].monitor;
        if ( monitor )
        {
          v26 = *p_datalist;
          if ( !*p_datalist )
            goto LABEL_35;
          if ( v16 >= v26->max_length )
          {
            v28 = sub_B70798(updated);
            sub_B70738(v28, 0LL);
          }
          v27 = v26->m_Items[v16];
          if ( !v27 )
            goto LABEL_35;
          if ( monitor[9] == v27->fields.addOrder )
          {
            BattleServantBuffIconComponent__setIcon_20629452((BattleServantBuffIconComponent_o *)updated, 0LL, 0LL);
            --v21;
            break;
          }
        }
        v22 = this->fields.objList;
        ++v23;
        if ( !v22 )
          goto LABEL_35;
      }
      if ( !*p_datalist )
        break;
      if ( v21 >= 1 && ++v16 < (signed int)(*p_datalist)->max_length )
        continue;
      return;
    }
LABEL_35:
    sub_B7076C(updated, v13);
  }
}